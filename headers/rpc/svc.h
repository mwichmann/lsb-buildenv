#ifndef _RPC_SVC_H_
#define _RPC_SVC_H_

#include <netinet/in.h>
#include <sys/types.h>




extern void svc_getreqset (fd_set *);
extern void svcerr_auth (struct SVCXPRT *,,);
extern void svcerr_decode (struct SVCXPRT *);
extern void svcerr_noproc (struct SVCXPRT *);
extern void svcerr_noprog (struct SVCXPRT *);
extern void svcerr_progvers (struct SVCXPRT *,,);
extern void svcerr_systemerr (struct SVCXPRT *);
extern void svcerr_weakauth (struct SVCXPRT *);
#endif
