typedef union sigval {
    int sival_int;
    void *sival_ptr;
} sigval_t;

typedef void (*__sighandler_t) ();

struct sigevent {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;
};

typedef struct {
    unsigned long __val[1];
} __sigset_t;

typedef __sigset_t sigset_t;

struct sigaction;

typedef struct {
    int si_band;
    int si_fd;
    struct _sifields;
    struct _sigpoll;
} siginfo_t;

struct sigaltstack {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
};

struct sigstack {
    void *ss_sp;
    int ss_onstack;
};

int __libc_current_sigrtmax(void);
int __libc_current_sigrtmin(void);
int __sigpause(int, int);
__sighandler_t __sysv_signal(int, __sighandler_t);
int killpg(__pid_t, int);
int raise(int);
int sigaddset(sigset_t *, int);
int sigdelset(sigset_t *, int);
int sigemptyset(sigset_t *);
int sigfillset(sigset_t *);
int sighold(int);
int sigignore(int);
int siginterrupt(int, int);
int sigismember(sigset_t *, int);
int sigpending(sigset_t *);
int sigrelse(int);
__sighandler_t sigset(int, __sighandler_t);
int sigstack(struct sigstack *, struct sigstack *);
int sigaction(int, struct sigaction *, struct sigaction *);
int sigwait(sigset_t *, int *);
int kill(__pid_t, int);
int sigaltstack(struct sigaltstack *, struct sigaltstack *);
__sighandler_t signal(int, __sighandler_t);
int sigprocmask(int, sigset_t *, sigset_t *);
int sigsuspend(sigset_t *);
int sigqueue(__pid_t, int, union sigval);
int sigwaitinfo(sigset_t *, siginfo_t *);
int sigtimedwait(sigset_t *, siginfo_t *, struct timespec *);
__sighandler_t bsd_signal(int, __sighandler_t);
