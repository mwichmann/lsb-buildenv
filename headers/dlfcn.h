#ifndef _DLFCN_H_
#define _DLFCN_H_


#define RTLD_LOCAL	0
#define RTLD_LAZY	0x00001
#define RTLD_NOW	0x00002
#define RTLD_GLOBAL	0x00100


typedef struct
{
  char *dli_fname;
  void *dli_fbase;
  char *dli_sname;
  void *dli_saddr;
}
Dl_info;


int dladdr (void *, Dl_info *);
int dlclose (void *);
char *dlerror (void);
void *dlopen (char *, int);
void *dlsym (void *, char *);
#endif
