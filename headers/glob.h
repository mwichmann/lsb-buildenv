#ifndef _GLOB_H_
#define _GLOB_H_

#include <dirent.h>
#include <sys/stat.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C"
{
#endif





/* Bits set in the FLAGS argument to `glob'.*/
#define GLOB_ERR	(1<<0)
#define GLOB_MARK	(1<<1)
#define GLOB_BRACE	(1<<10)
#define GLOB_NOMAGIC	(1<<11)
#define GLOB_TILDE	(1<<12)
#define GLOB_ONLYDIR	(1<<13)
#define GLOB_TILDE_CHECK	(1<<14)
#define GLOB_NOSORT	(1<<2)
#define GLOB_DOOFFS	(1<<3)
#define GLOB_NOCHECK	(1<<4)
#define GLOB_APPEND	(1<<5)
#define GLOB_NOESCAPE	(1<<6)
#define GLOB_PERIOD	(1<<7)
#define GLOB_MAGCHAR	(1<<8)
#define GLOB_ALTDIRFUNC	(1<<9)



/* Error returns from `glob'.*/
#define GLOB_NOSPACE	1
#define GLOB_ABORTED	2
#define GLOB_NOMATCH	3
#define GLOB_NOSYS	4





  typedef struct
  {
    size_t gl_pathc;
    char **gl_pathv;
    size_t gl_offs;
    int gl_flags;
    void (*gl_closedir) (void *);
    struct dirent *(*gl_readdir) (void *);
    void *(*gl_opendir) (const char *);
    int (*gl_lstat) (const char *, struct stat *);
    int (*gl_stat) (const char *, struct stat *);
  }
  glob_t;




  typedef struct
  {
    size_t gl_pathc;
    char **gl_pathv;
    size_t gl_offs;
    int gl_flags;
    void (*gl_closedir) (void *);
    struct dirent64 *(*gl_readdir64) (void *);
    void *(*gl_opendir) (const char *);
    int (*gl_lstat) (const char *, struct stat *);
    int (*gl_stat) (const char *, struct stat *);
  }
  glob64_t;


  extern int glob (const char *, int, int (*)(const char *, int), glob_t *);
  extern int glob64 (char *, int, int (*)(const char *, int), glob64_t *);
  extern void globfree (glob_t *);
  extern void globfree64 (glob64_t *);
#ifdef __cplusplus
}
#endif
#endif
