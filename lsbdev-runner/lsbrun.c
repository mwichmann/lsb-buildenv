/*
 * Copyright 2007 The Linux Foundation.
 *
 * Originally written by Jeff Licquia <licquia@linux-foundation.org>.
 */

#include <sys/types.h>
#include <sys/stat.h>
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
const char *native_linker_path = "/lib/ld.so.1";

#elif __powerpc64__

const char *lsb_linker_path = "/lib64/ld-lsb-ppc64.so.3";
const char *native_linker_path = "/lib/ld.so.1";

#elif __ia64__

const char *lsb_linker_path = "/lib/ld-lsb-ia64.so.3";
const char *native_linker_path = "/lib/ld-linux-ia64.so.2";

#elif __s390__ && !__s390x__

const char *lsb_linker_path = "/lib/ld-lsb-s390.so.3";
const char *native_linker_path = "/lib/ld.so.1";

#elif __s390x__

const char *lsb_linker_path = "/lib64/ld-lsb-s390x.so.3";
const char *native_linker_path = "/lib64/ld64.so.1";

#elif __x86_64__

const char *lsb_linker_path = "/lib64/ld-lsb-x86-64.so.3";
const char *native_linker_path = "/lib/ld-linux-x86-64.so.2";

#else
#error Current architecture not supported.
#endif

/* Handle memory errors. */

void handle_mem_error()
{
  perror("lsbrun");
  exit(1);
}

/* Take a non-absolute path and make it absolute.  If this is a bare
   filename, search the PATH. */

const char *find_binary_path(const char *binary)
{
  char buf[PATH_MAX+1];
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
	if (result == NULL) handle_mem_error();
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
    strcat(buf, "/");
    strncat(buf, binary, PATH_MAX-1);
    result = strdup(buf);
    if (result == NULL) handle_mem_error();
  }

  return result;
}

/* Check for a proper LSB environment, and modify the given binary to
   use lsbrun if not found. */

void check_binary(const char *binary_path, const char *lsbrun_path)
{
  char buf[PATH_MAX+1];
  char *binary_basename;
  char *new_binary_path;
  char *binary_dir;
  FILE *lsbrun_file;
  FILE *new_binary_file;
  struct stat binary_stat;
  size_t read;

  if (access(lsb_linker_path, X_OK) != 0) {

    /* We need special intervention to run LSB binaries. */

    strncpy(buf, binary_path, PATH_MAX);
    binary_basename = strdup(basename(buf));

    /* Add the leading '.' to the binary filename. */

    binary_basename = realloc(binary_basename, strlen(binary_basename) + 2);
    if (binary_basename == NULL) handle_mem_error();
    memmove(binary_basename + 1, binary_basename, strlen(binary_basename) + 1);
    binary_basename[0] = '.';

    /* Figure out the new full path for the binary. */

    strncpy(buf, binary_path, PATH_MAX);
    binary_dir = strdup(dirname(buf));
    if (binary_dir == NULL) handle_mem_error();

    snprintf(buf, PATH_MAX, "%s/%s", binary_dir, binary_basename);
    new_binary_path = strdup(buf);
    if (new_binary_path == NULL) handle_mem_error();

    /* Move the binary to its new location. */

    if (rename(binary_path, new_binary_path) != 0) {
      perror("lsbrun");
      exit(1);
    }

    /* Copy the lsbrun executable to the old binary path. */

    lsbrun_file = fopen(lsbrun_path, "r");
    new_binary_file = fopen(binary_path, "w");
    if ((lsbrun_file == NULL) || (new_binary_file == NULL)) {
      perror("lsbrun");
      fprintf(stderr, 
	      "warning: check the target binary, it may have been moved\n");
      exit(1);
    }

    while ((read = fread(buf, 1, PATH_MAX, lsbrun_file)) > 0)
      fwrite(buf, 1, read, new_binary_file);

    fclose(lsbrun_file);
    fclose(new_binary_file);

    /* Make sure the lsbrun copy has the same permissions as the old
       binary. */

    if (stat(new_binary_path, &binary_stat) == 0) {
      chmod(binary_path, binary_stat.st_mode & 07777);
    } else {
      perror("lsbrun");
      fprintf(stderr, 
	      "warning: check the target binary, it may not be executable\n");
      exit(1);
    }
    free (new_binary_path);
    free (binary_basename);
    free (binary_dir);
  }
}

void help(FILE *stream)
{
  fputs(
"lsbrun - a helper for LSB applications on non-LSB systems\n"
"Copyright 2007 The Linux Foundation.\n"
"Usage:\n"
"  lsbrun <binary>            Run a LSB binary\n"
"  lsbrun --check <binary>    Check that a LSB binary is runnable, and\n"
"                             adjust it to run properly if needed\n", 
	stream);
}

int main(int argc, char *argv[])
{
  char **real_cmdline;
  char **new_cmdline;
  int real_cmdline_len;

  const char *linker_path;
  char *exec_fn;
  char *abs_exec_dir;
  char *lsbrun_path;

  char buf[PATH_MAX+1];
  int index;

  /* First, let's figure out how we were started. */

  strcpy(buf, argv[0]);
  if (strstr(basename(buf), "lsbrun") != NULL) {
    if ((argc < 2) || (strcmp(argv[1], "--help") == 0)) {

      /* Print help. */

      help(stdout);
      exit(0);

    } else if (strcmp(argv[1], "--check") == 0) {

      /* Check the binary only; don't run it. */

      lsbrun_path = find_binary_path(argv[0]);
      if (access(lsbrun_path, X_OK) != 0) {
	fprintf(stderr, "lsbrun: could not find lsbrun binary: %s", 
		strerror(errno));
	exit(1);
      }

      exec_fn = find_binary_path(argv[2]);
      if (access(exec_fn, X_OK) != 0) {
	fprintf(stderr, "lsbrun: %s not executable: %s", 
		argv[2], strerror(errno));
	exit(1);
      }

      check_binary(exec_fn, lsbrun_path);
      exit(0);

    } else {

      /* All other situations involve running a LSB binary properly.
	 Here, we've been run directly from the command line. */

      real_cmdline = &(argv[1]);
    }
  } else {

    /* Copy argv. */

    real_cmdline = (char **)malloc(sizeof(char *) * (argc + 2));
    if (real_cmdline == NULL) handle_mem_error();

    for (index = 0; index < argc; index++)
      real_cmdline[index] = argv[index];
    real_cmdline[argc] = NULL;

    /* When started as a proxy to a binary, the real binary will be
       stored next to this program, but with a '.' prepended.  Look
       for that binary. */

    strncpy(buf, argv[0], PATH_MAX);
    exec_fn = strdup(basename(buf));
    if (exec_fn == NULL) handle_mem_error();

    if (access(argv[0], X_OK) == 0) {
      strncpy(buf, argv[0], PATH_MAX);
      abs_exec_dir = strdup(dirname(buf));
      if (abs_exec_dir == NULL) handle_mem_error();
    } else {
      abs_exec_dir = find_binary_path(argv[0]);
    }

    exec_fn = realloc(exec_fn, strlen(exec_fn) + 2);
    if (exec_fn == NULL) handle_mem_error();
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
  if (new_cmdline == NULL) handle_mem_error();
  new_cmdline[0] = linker_path;
  for (index = 1; index < real_cmdline_len + 1; index++)
    new_cmdline[index] = real_cmdline[index - 1];

  /* Now run the program. */

  execvp(linker_path, new_cmdline);
  perror(new_cmdline[1]);
  return 1;
}
