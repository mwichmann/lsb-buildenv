#ifndef _NETDB_H_
#define _NETDB_H_

#include <sys/socket.h>
#include <stddef.h>

#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && (__GNUC__ - 0 > 3 || (__GNUC__ - 0 == 3 && __GNUC_MINOR__ - 0 >= 2))
#define LSB_DECL_DEPRECATED __attribute__ ((__deprecated__))
#else
#define LSB_DECL_DEPRECATED
#endif

#ifdef __cplusplus
extern "C" {
#endif


#define h_errno	(*__h_errno_location ())
#define NETDB_INTERNAL	-1	/* See errno. */
#define NETDB_SUCCESS	0	/* No problem. */
#define HOST_NOT_FOUND	1	/* Authoritative Answer Host not found. */
#define IPPORT_RESERVED	1024
#define NI_MAXHOST	1025
#define TRY_AGAIN	2	/* Non-Authoritative Host not found, or SERVERFAIL. */
#define NO_RECOVERY	3	/* Non recoverable errors, FORMERR, REFUSED, NOTIMP. */
#define NI_MAXSERV	32
#define NO_DATA	4		/* Valid name, no data record of requested type. */
#define h_addr	h_addr_list[0]
#define NO_ADDRESS	NO_DATA	/* No address, look for MX record. */


    struct servent {
	char *s_name;
	char **s_aliases;
	int s_port;
	char *s_proto;
    };

    struct hostent {
	char *h_name;
	char **h_aliases;
	int h_addrtype;
	int h_length;
	char **h_addr_list;
    };

    struct protoent {
	char *p_name;
	char **p_aliases;
	int p_proto;
    };

    struct netent {
	char *n_name;
	char **n_aliases;
	int n_addrtype;
	unsigned int n_net;
    };


/* Possible values for `ai_flags' field in `addrinfo' structure.*/
#define AI_PASSIVE	0x0001	/* Socket address is intended for `bind' */
#define AI_CANONNAME	0x0002	/* Request for canonical name */
#define AI_NUMERICHOST	0x0004	/* Don't use name resolution */
#define AI_V4MAPPED	0x0008	/* IPv4 mapped addresses are acceptable. */
#define AI_ALL	0x0010		/* Return IPv4 mapped and IPv6 addresses. */
#define AI_ADDRCONFIG	0x0020	/* Use configuration of this host to choose returned address type.. */
#define AI_NUMERICSERV	0x0400	/* Don't use name resolution */


    struct addrinfo {
	int ai_flags;
	int ai_family;
	int ai_socktype;
	int ai_protocol;
	socklen_t ai_addrlen;
	struct sockaddr *ai_addr;
	char *ai_canonname;
	struct addrinfo *ai_next;
    };


/* Values to use as hints*/
#define NI_NUMERICHOST	1
#define NI_DGRAM	16
#define NI_NUMERICSERV	2
#define NI_NOFQDN	4
#define NI_NAMEREQD	8



/* Error values for `getaddrinfo' function.*/
#define EAI_BADFLAGS	-1	/* Invalid value for `ai_flags' field. */
#define EAI_MEMORY	-10	/* Memory allocation failure. */
#define EAI_SYSTEM	-11	/* System error returned in `errno'. */
#define EAI_NONAME	-2	/* NAME or SERVICE is unknown. */
#define EAI_AGAIN	-3	/* Temporary failure in name resolution. */
#define EAI_FAIL	-4	/* Non-recoverable failure in name res. */
#define EAI_NODATA	-5	/* No address associated with NAME. */
#define EAI_FAMILY	-6	/* `ai_family' not supported. */
#define EAI_SOCKTYPE	-7	/* `ai_family' not supported. */
#define EAI_SERVICE	-8	/* SERVICE not supported for `ai_socktype'. */
#define EAI_ADDRFAMILY	-9	/* Address family for NAME not supported. */



    extern int gethostbyname2_r(const char *, int, struct hostent *,
				char *, size_t, struct hostent **, int *);
    extern void endprotoent(void);
    extern void endservent(void);
    extern void freeaddrinfo(struct addrinfo *);
    extern const char *gai_strerror(int);
    extern int getaddrinfo(const char *, const char *,
			   const struct addrinfo *, struct addrinfo **);
    extern struct hostent *gethostbyaddr(const void *, socklen_t, int);
    extern struct hostent *gethostbyname(const char *);
    extern struct hostent *gethostbyname2(const char *, int);
    extern struct protoent *getprotobyname(const char *);
    extern struct protoent *getprotobynumber(int);
    extern struct protoent *getprotoent(void);
    extern struct servent *getservbyname(const char *, const char *);
    extern struct servent *getservbyport(int, const char *);
    extern struct servent *getservent(void);
    extern void setprotoent(int);
    extern void setservent(int);
    extern int *__h_errno_location(void);
    extern int gethostbyaddr_r(const void *, socklen_t, int,
			       struct hostent *, char *, size_t,
			       struct hostent **, int *);
    extern int gethostbyname_r(const char *, struct hostent *, char *,
			       size_t, struct hostent **, int *);
#ifdef __cplusplus
}
#endif
#endif
