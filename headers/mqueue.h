#if (__LSB_VERSION__ >= 10 )
#ifndef _MQUEUE_H_
#define _MQUEUE_H_

#include <signal.h>
#include <sys/types.h>
#include <time.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
    typedef int mqd_t;

#endif				/* __LSB_VERSION__ >= 3.2 */

#if __LSB_VERSION__ >= 32
    struct mq_attr {
	long int mq_flags;
	long int mq_maxmsg;
	long int mq_msgsize;
	long int mq_curmsgs;
	long int __pad[4];
    };

#endif				/* __LSB_VERSION__ >= 3.2 */


/* Function prototypes */

#if __LSB_VERSION__ >= 32
    extern int mq_close(mqd_t __mqdes);
    extern int mq_getattr(mqd_t __mqdes, struct mq_attr *__mqstat);
    extern int mq_notify(mqd_t __mqdes,
			 const struct sigevent *__notification);
    extern mqd_t mq_open(const char *__name, int __oflag, ...);
    extern ssize_t mq_receive(mqd_t __mqdes, char *__msg_ptr,
			      size_t __msg_len, unsigned int *__msg_prio);
    extern int mq_send(mqd_t __mqdes, const char *__msg_ptr,
		       size_t __msg_len, unsigned int __msg_prio);
    extern int mq_setattr(mqd_t __mqdes, const struct mq_attr *__mqstat,
			  struct mq_attr *__omqstat);
    extern ssize_t mq_timedreceive(mqd_t __mqdes, char *__msg_ptr,
				   size_t __msg_len,
				   unsigned int *__msg_prio,
				   const struct timespec *__abs_timeout);
    extern int mq_timedsend(mqd_t __mqdes, const char *__msg_ptr,
			    size_t __msg_len, unsigned int __msg_prio,
			    const struct timespec *__abs_timeout);
    extern int mq_unlink(const char *__name);
#endif				/* __LSB_VERSION__ >= 3.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
