#if (__LSB_VERSION__ >= 50 )
#ifndef _IFADDRS_H_
#define _IFADDRS_H_

#include <sys/socket.h>

#ifdef __cplusplus
extern "C" {
#endif


#define ifa_broadaddr	ifa_ifu.ifu_broadaddr
#define ifa_dstaddr	ifa_ifu.ifu_dstaddr


    struct ifaddrs {
	struct ifaddrs *ifa_next;
	char *ifa_name;
	unsigned int ifa_flags;
	struct sockaddr *ifa_addr;
	struct sockaddr *ifa_netmask;
	union {
	    struct sockaddr *ifu_broadaddr;
	    struct sockaddr *ifu_dstaddr;
	} ifa_ifu;
	void *ifa_data;
    };


/* Function prototypes */

    extern void freeifaddrs(struct ifaddrs *);
    extern int getifaddrs(struct ifaddrs **);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
