#ifndef _GLOB_H_
#define _GLOB_H_


#ifdef __cplusplus
extern "C"
{
#endif







  typedef struct
  {
    size_t gl_pathc;
    char **gl_pathv;
    size_t gl_offs;
    int gl_flags;
    void (*gl_closedir) (void);
    struct dirent *(*gl_readdir) (void);
    void *(*gl_opendir) (void);
    int (*gl_lstat) (void);
    int (*gl_stat) (void);
  }
  glob_t;




  typedef struct
  {
    size_t gl_pathc;
    char **gl_pathv;
    size_t gl_offs;
    int gl_flags;
    void (*gl_closedir) (void);
    struct dirent *(*gl_readdir) (void);
    void *(*gl_opendir) (void);
    int (*gl_lstat) (void);
    int (*gl_stat) (void);
  }
  glob64_t;


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



#define GLOB_NOSPACE	1
#define GLOB_ABORTED	2
#define GLOB_NOMATCH	3
#define GLOB_NOSYS	4



  extern int glob (char *, int, int, glob_t *);
  extern int glob64 (char *, int, int, glob64_t *);
  extern void globfree (glob_t *);
  extern void globfree64 (glob64_t *);
#ifdef __cplusplus
}
#endif
#endif
