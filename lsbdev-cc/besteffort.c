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

#include "linkers.h"

char *lsb_linker_path = LSB_LINKER;
char *native_linker_path = NATIVE_LINKER;

void _lsb_init() __attribute__((constructor));

void _lsb_init()
{
  struct stat lsblinker;
  struct stat nativelinker;
  char cmdbuf[1024];
  int fd;
  int argc = 0;
  char *argv[128];
  char *pos;

  if (lstat(lsb_linker_path, &lsblinker) ||
      S_ISLNK(lsblinker.st_mode))
    return;

  if (stat(native_linker_path, &nativelinker))
    return;

  if (lsblinker.st_ino == nativelinker.st_ino)
    return;

  /* At this point, we've decided to re-exec.  We only abort on some
     failure or other. */

  fd = open("/proc/self/cmdline", O_RDONLY);
  if (fd == -1)
    return;

  if (read(fd, cmdbuf, 1024) <= 0)
    return;

  pos = cmdbuf;
  while (*pos && argc < 128) {
    argv[argc++] = pos;
    while (*(++pos)) ;
    pos++;
  }
  argv[argc] = NULL;

  execv("/proc/self/exe", argv);
  fputs("lsb best-effort exec failed\n", stderr);
  exit(255);
}
