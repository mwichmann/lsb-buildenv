
int getitimer (__itimer_which_t, struct itimerval *);
int setitimer (__itimer_which_t, struct itimerval *, struct itimerval *);
int adjtime (struct timeval *, struct timeval *);
int gettimeofday (struct timeval *, __timezone_ptr_t);
int utimes (char *, struct timeval);
