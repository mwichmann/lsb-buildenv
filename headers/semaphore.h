/*
 * 39 Default HeaderGroup for semaphore.h
 */
typedef struct {
    struct __sem_lock;
    long status;
    int __sem_value;
    int spinlock;
    Unknown Type:".." __sem_waiting;
} sem_t;


int sem_close(sem_t *);
int sem_destroy(sem_t *);
int sem_getvalue(sem_t *, int *);
int sem_init(sem_t *, int, unsigned int);
sem_t *sem_open(char *, int, ...);
int sem_post(sem_t *);
int sem_trywait(sem_t *);
int sem_unlink(char *);
int sem_wait(sem_t *);
