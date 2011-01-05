#if (__LSB_VERSION__ >= 40 )
#ifndef _SYS_EPOLL_H_
#define _SYS_EPOLL_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#define EPOLL_CTL_ADD	1	/* Add a file decriptor to the interface. */
#define EPOLL_CTL_DEL	2	/* Remove a file decriptor from the interface. */
#define EPOLL_CTL_MOD	3	/* Change file decriptor epoll_event structure. */
#define EPOLLIN	1
#define EPOLLPRI	2
#define EPOLLOUT	4
#define EPOLLERR	8
#define EPOLLHUP	16
#define EPOLLRDHUP	0x2000
#define EPOLLONESHOT	(1 << 30)
#define EPOLLET	(1 << 31)


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

    extern int epoll_create(int __size);
    extern int epoll_ctl(int __epfd, int __op, int __fd,
			 struct epoll_event *__event);
    extern int epoll_wait(int __epfd, struct epoll_event *__events,
			  int __maxevents, int __timeout);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
