/*
 * 15 Default HeaderGroup for dirent.h
 */
typedef struct __dirstream DIR;


void rewinddir(DIR *);
void seekdir(DIR *, long);
long telldir(DIR *);
int closedir(DIR *);
DIR *opendir(char *);
struct dirent *readdir(DIR *);
struct dirent64 *readdir64(DIR *);
