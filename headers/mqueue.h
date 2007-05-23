#ifndef _MQUEUE_H_
#define _MQUEUE_H_

#include <signal.h>
#include <sys/types.h>
#include <sys/time.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef int mqd_t;

    struct mq_attr {
	long int mq_flags;
	long int mq_maxmsg;
	long int mq_msgsize;
	long int mq_curmsgs;
	long int __pad[4];
    };

    long int;


    extern int mq_close(mqd_t);
    extern int mq_getattr(mqd_t, struct mq_attr *);
    extern int mq_notify(mqd_t, const struct sigevent *);
    extern ssize_t mq_open(const char *, int, ...);
    extern ssize_t mq_receive(mqd_t, char *, size_t, unsigned int *);
    extern int mq_send(mqd_t, const char *, size_t, unsigned int);
    extern int mq_setattr(mqd_t, const struct mq_attr *, struct mq_attr *);
    extern ssize_t mq_timedreceive(mqd_t, char *, size_t, unsigned int *,
				   const struct timespec *);
    extern int mq_timedsend(mqd_t, const char *, size_t, unsigned int,
			    const struct timespec *);
    extern int mq_unlink(const char *);
#ifdef __cplusplus
}
#endif
#endif
