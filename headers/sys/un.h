#if (__LSB_VERSION__ >= 12 )
#ifndef _SYS_UN_H_
#define _SYS_UN_H_

#include <sys/socket.h>

#ifdef __cplusplus
extern "C" {
#endif


    struct sockaddr_un {
	sa_family_t sun_family;	/* AF_UNIX */
	char sun_path[108];
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
