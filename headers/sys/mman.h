/*
 * 56 Default HeaderGroup for sys/mman.h
 */

int msync(void *, size_t, int);
int mlock(void *, size_t);
int mlockall(int);
void *mmap(void *, size_t, int, int, int, __off_t);
int mprotect(void *, size_t, int);
int munlock(void *, size_t);
int munlockall(void);
int munmap(void *, size_t);
void *mmap64(void *, size_t, int, int, int, __off64_t);
