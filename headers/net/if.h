#ifndef _NET_IF_H_
#define _NET_IF_H_

#include <sys/socket.h>
#include <sys/types.h>

#ifdef __cplusplus
extern "C"
{
#endif


#define IF_NAMESIZE	16



/* Standard interface flags.*/
#define IFF_UP	0x01
#define IFF_BROADCAST	0x02
#define IFF_DEBUG	0x04
#define IFF_LOOPBACK	0x08
#define IFF_POINTOPOINT	0x10
#define IFF_PROMISC	0x100
#define IFF_MULTICAST	0x1000
#define IFF_NOTRAILERS	0x20
#define IFF_RUNNING	0x40
#define IFF_NOARP	0x80



/* The ifaddr structure contains information about one address of an
   interface.  They are maintained by the different address families,
   are allocated and attached when an address is set, and are linked
   together so all addresses for an interface can be located.*/


  struct ifaddr
  {
    struct sockaddr ifa_addr;	/* Address of interface. */
    union
    {
      struct sockaddr ifu_broadaddr;
      struct sockaddr ifu_dstaddr;
    }
    ifa_ifu;
  }
   ;


/* Interface request structure used for socket ioctl's.  All interface
   ioctl's must have parameter definitions which begin with ifr_name.
   The remainder may be interface specific.*/
#define ifr_name	ifr_ifrn.ifrn_name
#define ifr_addr	ifr_ifru.ifru_addr
#define IFNAMSIZ	IF_NAMESIZE


  struct ifreq
  {
    union
    {
      char ifrn_name[IFNAMSIZ];
    }
    ifr_ifrn;
    union
    {
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
    }
    ifr_ifru;
  }
   ;

  union
  {
    char ifrn_name[IFNAMSIZ];
  }
   ;

  union
  {
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
  }
   ;


/* Structure used in SIOCGIFCONF request.  Used to retrieve interface
   configuration for machine (useful for programs which must know all
   networks accessible).*/
#define ifc_buf	ifc_ifcu.ifcu_buf
#define ifc_req	ifc_ifcu.ifcu_req


  struct ifconf
  {
    int ifc_len;
    union
    {
      caddr_t ifcu_buf;
      struct ifreq *ifcu_req;
    }
    ifc_ifcu;
  }
   ;


#ifdef __cplusplus
}
#endif
#endif
