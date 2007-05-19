/*
 * Copyright 2007 The Linux Foundation.
 *
 * Originally written by Jeff Licquia <licquia@linux-foundation.org>.
 */

#include <limits.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <libgen.h>

/* The full paths to the LSB and native dynamic linkers. */

#if   __i386__

const char *lsb_linker_path = "/lib/ld-lsb.so.3";
const char *native_linker_path = "/lib/ld-linux.so.2";

#elif __powerpc__ && !__powerpc64__

const char *lsb_linker_path = "/lib/ld-lsb-ppc32.so.3";

#elif __powerpc64__

const char *lsb_linker_path = "/lib64/ld-lsb-ppc64.so.3";

#elif __ia64__

const char *lsb_linker_path = "/lib/ld-lsb-ia64.so.3";

#elif __s390__ && !__s390x__

const char *lsb_linker_path = "/lib/ld-lsb-s390.so.3";

#elif __s390x__

const char *lsb_linker_path = "/lib64/ld-lsb-s390x.so.3";

#elif __x86_64__

const char *lsb_linker_path = "/lib64/ld-lsb-x86-64.so.3";

#else
#error Current architecture not supported.
#endif

/* Take a non-absolute path and make it absolute.  If this is a bare
   filename, search the PATH. */

const char *find_binary_path(const char *binary)
{
  char buf[PATH_MAX];
  char *path;
  char *path_item;
  char *result = NULL;

  /* If this is a bare name, search the PATH first. */

  if (strchr(binary, '/') == NULL) {
    path = strdup(getenv("PATH"));
    for (path_item = strtok(path, ":"); path_item != NULL;
	 path_item = strtok(NULL, ":")) {
      snprintf(buf, PATH_MAX, "%s/%s", path_item, binary);
      if (access(buf, X_OK) == 0) {
	result = strdup(buf);
	break;
      } else {
	buf[0] = '\0';
      }
    }
    free(path);
  }

  /* Not a bare name, or the name couldn't be found in the PATH?
     Assume it's in the current directory. */

  if (result == NULL) {
    getcwd(buf, PATH_MAX);
    strncat(buf, "/", PATH_MAX);
    strncat(buf, binary, PATH_MAX);
    result = strdup(buf);
  }

  return result;
}

void help(FILE *stream)
{
  fputs("help goes here\n", stream);
}

int main(int argc, char *argv[])
{
  char **real_cmdline;
  char **new_cmdline;
  int real_cmdline_len;

  const char *linker_path;
  char *exec_fn;
  char *abs_exec_dir;

  char buf[PATH_MAX];
  int index;

  /* First, let's figure out how we were started. */

  strcpy(buf, argv[0]);
  if (strstr(basename(buf), "lsbrun") != NULL) {
    if ((argc < 2) || (strcmp(argv[1], "--help") == 0)) {
      help(stdout);
      exit(0);
    } else {
      real_cmdline = &(argv[1]);
    }
  } else {

    /* Copy argv. */

    real_cmdline = (char **)malloc(sizeof(char *) * (argc + 2));
    for (index = 0; index < argc; index++)
      real_cmdline[index] = argv[index];
    real_cmdline[argc] = NULL;

    /* When started as a proxy to a binary, the real binary will be
       stored next to this program, but with a '.' prepended.  Look
       for that binary. */

    strncpy(buf, argv[0], PATH_MAX);
    exec_fn = strdup(basename(buf));

    if (access(argv[0], X_OK) == 0) {
      strncpy(buf, argv[0], PATH_MAX);
      abs_exec_dir = strdup(dirname(buf));
    } else {
      abs_exec_dir = find_binary_path(argv[0]);
    }

    exec_fn = realloc(exec_fn, strlen(exec_fn) + 2);
    memmove(exec_fn + 1, exec_fn, strlen(exec_fn) + 1);
    exec_fn[0] = '.';

    snprintf(buf, PATH_MAX, "%s/%s", abs_exec_dir, exec_fn);

    /* Otherwise, set this as the real executable to run. */
    real_cmdline[0] = strdup(buf);

    /* Clean up. */
    free(exec_fn);
    free(abs_exec_dir);
  }

  /* Fail if the real executable isn't right. */

  if (access(real_cmdline[0], X_OK) != 0) {
    fprintf(stderr, "lsbrun: could not execute %s: %s\n", 
	    real_cmdline[0], strerror(errno));
    exit(1);
  }

  /* Look for the LSB environment. */

  linker_path = lsb_linker_path;
  if (access(linker_path, X_OK) == 0) {

    /* We're OK.  Just run the program. */

    execvp(real_cmdline[0], real_cmdline);
    perror(real_cmdline[0]);
    exit(1);
  }

  /* No LSB environment, so we need to run with the native linker.
     First, let's find it. */

  linker_path = native_linker_path;

  /* Create a new argv array, using the native linker as argv[0]. */

  real_cmdline_len = 0;
  while (real_cmdline[real_cmdline_len] != NULL)
    real_cmdline_len++;

  new_cmdline = (char **)malloc(sizeof(char *) * (real_cmdline_len + 1));
  new_cmdline[0] = linker_path;
  for (index = 1; index < real_cmdline_len + 1; index++)
    new_cmdline[index] = real_cmdline[index - 1];

  /* Now run the program. */

  execvp(linker_path, new_cmdline);
  perror(new_cmdline[1]);
  return 1;
}
