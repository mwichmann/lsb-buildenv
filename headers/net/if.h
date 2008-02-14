#ifndef _NET_IF_H_
#define _NET_IF_H_

#include <sys/types.h>
#include <sys/socket.h>

#ifdef __cplusplus
extern "C" {
#endif


#define IF_NAMESIZE	16


    struct ifmap {
	unsigned long int mem_start;
	unsigned long int mem_end;
	unsigned short base_addr;
	unsigned char irq;
	unsigned char dma;
	unsigned char port;
    };


/* Standard interface flags.*/
#define IFF_UP	0x01		/* Interface is up. */
#define IFF_BROADCAST	0x02	/* Broadcast address valid. */
#define IFF_DEBUG	0x04	/* Turn on debugging. */
#define IFF_LOOPBACK	0x08	/* Is a loopback net. */
#define IFF_POINTOPOINT	0x10	/* Interface is point-to-point link. */
#define IFF_PROMISC	0x100	/* Receive all packets. */
#define IFF_MULTICAST	0x1000	/* Supports multicast. */
#define IFF_NOTRAILERS	0x20	/* Avoid use of trailers. */
#define IFF_RUNNING	0x40	/* Resources allocated. */
#define IFF_NOARP	0x80	/* No address resolution protocol. */




    struct if_nameindex {
	unsigned int if_index;	/* 1, 2, ... */
	char *if_name;		/* null terminated name: */
    };


/* The ifaddr structure contains information about one address of an
   interface.  They are maintained by the different address families,
   are allocated and attached when an address is set, and are linked
   together so all addresses for an interface can be located.*/
    struct ifaddr {
	struct sockaddr ifa_addr;	/* Address of interface. */
	union {
	    struct sockaddr ifu_broadaddr;
	    struct sockaddr ifu_dstaddr;
	} ifa_ifu;
	void *ifa_ifp;
	void *ifa_next;
    };


/* Interface request structure used for socket ioctl's.  All interface
   ioctl's must have parameter definitions which begin with ifr_name.
   The remainder may be interface specific.*/
#define ifr_name	ifr_ifrn.ifrn_name	/* interface name */
#define ifr_addr	ifr_ifru.ifru_addr	/* address */
#define ifr_broadaddr	ifr_ifru.ifru_broadaddr	/* broadcast address */
#define ifr_data	ifr_ifru.ifru_data	/* for use by interface */
#define ifr_dstaddr	ifr_ifru.ifru_dstaddr	/* other end of p-p lnk */
#define ifr_flags	ifr_ifru.ifru_flags	/* flags */
#define ifr_hwaddr	ifr_ifru.ifru_hwaddr	/* interface name */
#define ifr_bandwidth	ifr_ifru.ifru_ivalue	/* link bandwidth */
#define ifr_ifindex	ifr_ifru.ifru_ivalue	/* interface index */
#define ifr_metric	ifr_ifru.ifru_ivalue	/* metric */
#define ifr_qlen	ifr_ifru.ifru_ivalue	/* queue length */
#define ifr_mtu	ifr_ifru.ifru_mtu	/* mtu */
#define ifr_netmask	ifr_ifru.ifru_netmask	/* interface net mask */
#define ifr_slave	ifr_ifru.ifru_slave	/* slave device */
#define IFNAMSIZ	IF_NAMESIZE


    struct ifreq {
	union {
	    char ifrn_name[IFNAMSIZ];
	} ifr_ifrn;
	union {
	    struct sockaddr ifru_addr;
	    struct sockaddr ifru_dstaddr;
	    struct sockaddr ifru_broadaddr;
	    struct sockaddr ifru_netmask;
	    struct sockaddr ifru_hwaddr;
	    short ifru_flags;
	    int ifru_ivalue;
	    int ifru_mtu;
	    char ifru_slave[IFNAMSIZ];
	    char ifru_newname[IFNAMSIZ];
	    caddr_t ifru_data;
	    struct ifmap ifru_map;
	} ifr_ifru;
    };


/* Structure used in SIOCGIFCONF request.  Used to retrieve interface
   configuration for machine (useful for programs which must know all
   networks accessible).*/
#define ifc_buf	ifc_ifcu.ifcu_buf	/* Buffer address. */
#define ifc_req	ifc_ifcu.ifcu_req	/* Array of structures. */


    struct ifconf {
	int ifc_len;
	union {
	    caddr_t ifcu_buf;
	    struct ifreq *ifcu_req;
	} ifc_ifcu;
    };


    extern void if_freenameindex(struct if_nameindex *);
    extern char *if_indextoname(unsigned int, char *);
    extern struct if_nameindex *if_nameindex(void);
    extern unsigned int if_nametoindex(const char *);
#ifdef __cplusplus
}
#endif
#endif
