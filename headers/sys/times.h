/*
 * 53 Default HeaderGroup for sys/times.h
 */
struct tms {
    clock_t tms_utime;
    clock_t tms_stime;
    clock_t tms_cutime;
    clock_t tms_cstime;
};


clock_t times(struct tms *);
