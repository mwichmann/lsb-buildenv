typedef struct
{
  __size_t gl_pathc;
  char **gl_pathv;
  __size_t gl_offs;
  int gl_flags;
  void (*gl_closedir) ();
  struct dirent64 *(*gl_readdir) ();
  void *(*gl_opendir) ();
  int (*gl_lstat) ();
  int (*gl_stat) ();
}
glob_t;

typedef struct
{
  __size_t gl_pathc;
  char **gl_pathv;
  __size_t gl_offs;
  int gl_flags;
  void (*gl_closedir) ();
  struct dirent64 *(*gl_readdir) ();
  void *(*gl_opendir) ();
  int (*gl_lstat) ();
  int (*gl_stat) ();
}
glob64_t;

int glob (char *, int, int, glob_t *);
int glob64 (char *, int, int, glob64_t *);
void globfree (glob_t *);
void globfree64 (glob64_t *);
