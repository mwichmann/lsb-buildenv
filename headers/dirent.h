

typedef struct __dirstream DIR;


enum
{
  DT_UNKNOWN,
  DT_FIFO,
  DT_CHR,
  DT_DIR,
  DT_BLK,
  DT_REG,
  DT_LNK,
  DT_SOCK,
  DT_WHT
}
 ;

#define DT_BLK	DT_BLK
#define DT_CHR	DT_CHR
#define DT_DIR	DT_DIR
#define DT_FIFO	DT_FIFO
#define DT_LNK	DT_LNK
#define DT_REG	DT_REG
#define DT_SOCK	DT_SOCK
#define DT_UNKNOWN	DT_UNKNOWN
#define DT_WHT	DT_WHT

struct dirent;

struct dirent64;

void rewinddir (DIR *);
void seekdir (DIR *, long);
long telldir (DIR *);
int closedir (DIR *);
DIR *opendir (char *);
struct dirent *readdir (DIR *);
struct dirent64 *readdir64 (DIR *);
