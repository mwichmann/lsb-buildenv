
#define RTLD_LAZY	0x00001
#define RTLD_NOW	0x00002
int dladdr (void *, Dl_info *);
int dlclose (void *);
char *dlerror (void);
void *dlopen (char *, int);
void *dlsym (void *, char *);
