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


void endhostent (void);
void endnetent (void);
void endprotoent (void);
void endservent (void);
struct hostent *gethostbyaddr (void *, socklen_t, int);
struct hostent *gethostbyname (char *);
struct netent *getnetbyaddr (unsigned long, int);
struct protoent *getprotobyname (char *);
struct protoent *getprotobynumber (int);
struct protoent *getprotoent (void);
struct servent *getservbyname (char *, char *);
struct servent *getservbyport (int, char *);
struct servent *getservent (void);
extern int h_errno;
void setnetent (int);
void setprotoent (int);
int gethostbyname_r (char *, struct hostent *, char *, size_t,
		     struct hostent **, int *);
#endif
