#ifndef _NETDB_H_
#define _NETDB_H_

#ifdef __cplusplus
extern "C"
{
#endif
#include <stddef.h>
#include <sys/socket.h>

#define h_errno	(*__h_errno_location ())
#define NETDB_INTERNAL	-1
#define NETDB_SUCCESS	0
#define HOST_NOT_FOUND	1
#define TRY_AGAIN	2
#define NO_RECOVERY	3
#define NO_DATA	4
#define h_addr	h_addr_list[0]
#define NO_ADDRESS	NO_DATA


  struct servent
  {
    char *s_name;
    char **s_aliases;
    int s_port;
    char *s_proto;
  }
   ;

  struct hostent
  {
    char *h_name;
    char **h_aliases;
    int h_addrtype;
    socklen_t h_length;
    char **h_addr_list;
  }
   ;


  extern void endhostent (void);
  extern void endnetent (void);
  extern void endprotoent (void);
  extern void endservent (void);
  extern struct hostent *gethostbyaddr (void *, socklen_t, int);
  extern struct hostent *gethostbyname (char *);
  extern struct netent *getnetbyaddr (unsigned long, int);
  extern struct protoent *getprotobyname (char *);
  extern struct protoent *getprotobynumber (int);
  extern struct protoent *getprotoent (void);
  extern struct servent *getservbyname (char *, char *);
  extern struct servent *getservbyport (int, char *);
  extern struct servent *getservent (void);
  extern void setnetent (int);
  extern void setprotoent (int);
  extern void setservent (void);
  extern int *__h_errno_location (void);
  extern int gethostbyname_r (const char *, struct hostent *, char *, size_t,
			      struct hostent **, int *);
#ifdef __cplusplus
}
#endif
#endif
