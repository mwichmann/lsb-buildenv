#ifndef _SYS_UN_H_
#define _SYS_UN_H_

#ifdef __cplusplus
extern "C"
{
#endif
#include <sys/socket.h>

#define UNIX_PATH_MAX	108


  struct sockaddr_un
  {
    sa_family_t sun_family;	/* AF_UNIX */
    char sun_path[UNIX_PATH_MAX];
  }
   ;


#ifdef __cplusplus
}
#endif
#endif
