#ifndef _NETDB_H_
#define _NETDB_H_

#include <sys/socket.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C"
{
#endif


#define h_errno	(*__h_errno_location ())
#define NETDB_INTERNAL	-1
#define NETDB_SUCCESS	0
#define HOST_NOT_FOUND	1
#define NI_MAXHOST	1025
#define TRY_AGAIN	2
#define NO_RECOVERY	3
#define NI_MAXSERV	32
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
    int h_length;
    char **h_addr_list;
  }
   ;

  struct protoent
  {
    char *p_name;
    char **p_aliases;
    int p_proto;
  }
   ;

  struct netent
  {
    char *n_name;
    char **n_aliases;
    int n_addrtype;
    unsigned int n_net;
  }
   ;


/* Possible values for `ai_flags' field in `addrinfo' structure.*/
#define AI_PASSIVE	0x0001
#define AI_CANONNAME	0x0002
#define AI_NUMERICHOST	0x0004


  struct addrinfo
  {
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    socklen_t ai_addrlen;
    struct sockaddr *ai_addr;
    char *ai_canonname;
    struct addrinfo *ai_next;
  }
   ;


/* Values to use as hints*/
#define NI_NUMERICHOST	1
#define NI_DGRAM	16
#define NI_NUMERICSERV	2
#define NI_NOFQDN	4
#define NI_NAMEREQD	8



/* Error values for `getaddrinfo' function.*/
#define EAI_BADFLAGS	-1
#define EAI_MEMORY	-10
#define EAI_SYSTEM	-11
#define EAI_NONAME	-2
#define EAI_AGAIN	-3
#define EAI_FAIL	-4
#define EAI_NODATA	-5
#define EAI_FAMILY	-6
#define EAI_SOCKTYPE	-7
#define EAI_SERVICE	-8
#define EAI_ADDRFAMILY	-9



  extern void endnetent (void);
  extern void endprotoent (void);
  extern void endservent (void);
  extern void freeaddrinfo (struct addrinfo *);
  extern char *gai_strerror (int);
  extern int getaddrinfo (const char *, const char *, const struct addrinfo *,
			  struct addrinfo **);
  extern struct hostent *gethostbyaddr (const void *, socklen_t, int);
  extern struct hostent *gethostbyname (const char *);
  extern struct netent *getnetbyaddr (unsigned long, int);
  extern struct protoent *getprotobyname (const char *);
  extern struct protoent *getprotobynumber (int);
  extern struct protoent *getprotoent (void);
  extern struct servent *getservbyname (const char *, const char *);
  extern struct servent *getservbyport (int, const char *);
  extern struct servent *getservent (void);
  extern void setnetent (int);
  extern void setprotoent (int);
  extern void setservent (int);
  extern int *__h_errno_location (void);
  extern int gethostbyname_r (const char *, struct hostent *, char *, size_t,
			      struct hostent **, int *);
#ifdef __cplusplus
}
#endif
#endif
