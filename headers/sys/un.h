#if (__LSB_VERSION__ >= 12 )
#ifndef _SYS_UN_H_
#define _SYS_UN_H_

#include <sys/socket.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define UNIX_PATH_MAX	108
#endif				// __LSB_VERSION__ >= 1.2



#if __LSB_VERSION__ >= 12
    struct sockaddr_un {
	sa_family_t sun_family;	/* AF_UNIX */
	char sun_path[UNIX_PATH_MAX];
    };

#endif				// __LSB_VERSION__ >= 1.2

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
