#if (__LSB_VERSION__ >= 40 )
#ifndef _SYS_EPOLL_H_
#define _SYS_EPOLL_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#define EPOLLONESHOT	(1 << 30)
#define EPOLLET	(1 << 31)
#define EPOLLIN	1
#define EPOLL_CTL_ADD	1
#define EPOLLMSG	1024
#define EPOLLRDBAND	128
#define EPOLLHUP	16
#define EPOLLPRI	2
#define EPOLL_CTL_DEL	2
#define EPOLLWRNORM	256
#define EPOLL_CTL_MOD	3
#define EPOLLOUT	4
#define EPOLLWRBAND	512
#define EPOLLRDNORM	64
#define EPOLLERR	8


    typedef union epoll_data epoll_data_t;

    union epoll_data {
	void *ptr;
	int fd;
	uint32_t u32;
	uint64_t u64;
    };

    struct epoll_event {
	uint32_t events;
	epoll_data_t data;
    };


/* Function prototypes */

    extern int epoll_create(int);
    extern int epoll_ctl(int, int, int, struct epoll_event *);
    extern int epoll_wait(int, struct epoll_event *, int, int);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
