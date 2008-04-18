#if (__LSB_VERSION__ >= 10 )
#ifndef _MQUEUE_H_
#define _MQUEUE_H_

#include <signal.h>
#include <sys/types.h>
#include <sys/time.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
    typedef int mqd_t;

#endif				// __LSB_VERSION__ >= 3.2

#if __LSB_VERSION__ >= 32
    struct mq_attr {
	long int mq_flags;
	long int mq_maxmsg;
	long int mq_msgsize;
	long int mq_curmsgs;
	long int __pad[4];
    };

#endif				// __LSB_VERSION__ >= 3.2


// Function prototypes

#if __LSB_VERSION__ >= 32
    extern int mq_close(mqd_t);
    extern int mq_getattr(mqd_t, struct mq_attr *);
    extern int mq_notify(mqd_t, const struct sigevent *);
    extern mqd_t mq_open(const char *, int, ...);
    extern ssize_t mq_receive(mqd_t, char *, size_t, unsigned int *);
    extern int mq_send(mqd_t, const char *, size_t, unsigned int);
    extern int mq_setattr(mqd_t, const struct mq_attr *, struct mq_attr *);
    extern ssize_t mq_timedreceive(mqd_t, char *, size_t, unsigned int *,
				   const struct timespec *);
    extern int mq_timedsend(mqd_t, const char *, size_t, unsigned int,
			    const struct timespec *);
    extern int mq_unlink(const char *);
#endif				// __LSB_VERSION__ >= 3.2

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
