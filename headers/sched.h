
int sched_get_priority_max(int);
int sched_get_priority_min(int);
int sched_getparam(__pid_t, struct sched_param *);
int sched_getscheduler(__pid_t);
int sched_rr_get_interval(__pid_t, struct timespec *);
int sched_setparam(__pid_t, struct sched_param *);
int sched_setscheduler(__pid_t, int, struct sched_param *);
int sched_yield(void);
