#ifndef _RPC_CLNT_H_
#define _RPC_CLNT_H_

#include <sys/types.h>
#include <rpc/rpc.h>

#ifdef __cplusplus
extern "C"
{
#endif




  struct clnt_ops
  {
    enum clnt_stat (*cl_call) (void);
    void (*cl_abort) (void);
    void (*cl_geterr) (void);
      bool_t (*cl_freeres) (void);
    void (*cl_destroy) (void);
      bool_t (*cl_control) (void);
  }
   ;


  extern struct CLIENT *clnt_create (char *, u_long, u_long, char *);
  extern void clnt_pcreateerror (char *);
  extern void clnt_perrno (,);
  extern void clnt_perror (struct CLIENT *, char *);
  extern char *clnt_spcreateerror (char *);
  extern char *clnt_sperrno (,);
  extern char *clnt_sperror (struct CLIENT *, char *);
#ifdef __cplusplus
}
#endif
#endif
