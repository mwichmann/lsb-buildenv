
int msgctl(int, int, struct msqid_ds *);
int msgget(key_t, int);
int msgrcv(int, void *, size_t, long, int);
int msgsnd(int, void *, size_t, int);
