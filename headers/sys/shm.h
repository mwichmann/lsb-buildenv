
void *shmat(int, void *, int);
int shmctl(int, int, struct shmid_ds *);
int shmdt(void *);
int shmget(key_t, size_t, int);
