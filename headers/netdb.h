#ifndef _NETDB_H_
#define _NETDB_H_

#include <stddef.h>
#include <sys/socket.h>

#define h_addr	h_addr_list[0]


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
extern int h_errno;
extern void setnetent (int);
extern void setprotoent (int);
extern int gethostbyname_r (char *, struct hostent *, char *, size_t,
			    struct hostent **, int *);
#endif
