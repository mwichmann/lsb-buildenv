#ifndef _RPC_SVC_H_
#define _RPC_SVC_H_

#include <netinet/in.h>
#include <sys/types.h>




void svc_getreqset (fd_set *);
void svcerr_auth (struct SVCXPRT *,,);
void svcerr_decode (struct SVCXPRT *);
void svcerr_noproc (struct SVCXPRT *);
void svcerr_noprog (struct SVCXPRT *);
void svcerr_progvers (struct SVCXPRT *,,);
void svcerr_systemerr (struct SVCXPRT *);
void svcerr_weakauth (struct SVCXPRT *);
#endif
