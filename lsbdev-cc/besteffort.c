/*
 * Copyright 2008 Linux Foundation
 *
 * Originally written by Jeff Licquia <licquia@linuxfoundation.org>.
 */

/*
 * This code is intended to implement "best-effort" dynamic linking to
 * the LSB dynamic linker.  This allows executables built this way to
 * work with a separate LSB environment if it exists and run normally
 * if no LSB environment exists.
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

#include "linkers.h"

char *lsb_linker_path = LSB_LINKER;
char *native_linker_path = NATIVE_LINKER;

#if HAVE_GCC_CONSTRUCTOR_PRIORITY
void _lsb_init() __attribute__((constructor(101)));
#else
void _lsb_init() __attribute__((constructor));
#endif

void _lsb_init()
{
  struct stat lsblinker;
  struct stat nativelinker;
  char cmdbuf[1024];
  char exebuf[PATH_MAX];
  ssize_t result, cmdread;
  int fd;
  int argc = 0;
  char *argv[128];
  char *pos;

  if (getenv("LSB_BESTEFFORT_TEST") == NULL) {

    if (lstat(lsb_linker_path, &lsblinker) ||
	S_ISLNK(lsblinker.st_mode))
      return;

    if (stat(native_linker_path, &nativelinker))
      return;

    if (lsblinker.st_ino == nativelinker.st_ino)
      return;

  }

  /* At this point, we've decided to re-exec.  We only abort on some
     failure or other. */

  /* First, build argv for the exec. */

  fd = open("/proc/self/cmdline", O_RDONLY);
  if (fd == -1)
    return;

  cmdread = 0;
  do {
    result = read(fd, cmdbuf + cmdread, 1024 - cmdread);
    if (result < 0)
      return;
    cmdread += result;
  } while (result > 0);
  cmdbuf[cmdread] = '\0';

  argv[argc++] = lsb_linker_path;
  pos = cmdbuf;
  while (*pos && argc < 128) {
    argv[argc++] = pos;
    while (*(++pos)) ;
    pos++;
  }
  argv[argc] = NULL;

  /* Now, use /proc/self/exe to get the path to the executable. */

  result = readlink("/proc/self/exe", exebuf, PATH_MAX);
  if ((result == -1) || (result == PATH_MAX))
    return;
  exebuf[result] = '\0';
  argv[1] = exebuf;

  /* Finally, do the re-exec. */

  execv(lsb_linker_path, argv);
  fputs("lsb best-effort exec failed\n", stderr);
  exit(255);
}
