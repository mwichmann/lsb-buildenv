#if (__LSB_VERSION__ >= 40 )
#ifndef _NSPR4_PRIO_H_
#define _NSPR4_PRIO_H_

#include <stddef.h>
#include <nspr4/prinrval.h>
#include <nspr4/prtime.h>
#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define prio_h___
#if __LSB_VERSION__ >= 50
#define PR_RDONLY	0x01
#define PR_WRONLY	0x02
#define PR_RDWR	0x04
#define PR_CREATE_FILE	0x08
#define PR_APPEND	0x10
#define PR_TRUNCATE	0x20
#define PR_SYNC	0x40
#define PR_EXCL	0x80
#endif				/* __LSB_VERSION__ >= 5.0 */



    typedef enum PRDescType {
	PR_DESC_FILE = 1,
	PR_DESC_SOCKET_TCP = 2,
	PR_DESC_SOCKET_UDP = 3,
	PR_DESC_LAYERED = 4,
	PR_DESC_PIPE = 5
    } PRDescType;

    typedef struct PRIPv6Addr PRIPv6Addr;

    typedef enum PRTransmitFileFlags {
	PR_TRANSMITFILE_KEEP_OPEN = 0,
	PR_TRANSMITFILE_CLOSE_SOCKET = 1
    } PRTransmitFileFlags;

    typedef struct PRLinger PRLinger;

    typedef struct PRFilePrivate PRFilePrivate;

    typedef struct PRFileDesc PRFileDesc;

    typedef union PRNetAddr PRNetAddr;

    typedef struct PRMcastRequest PRMcastRequest;

    typedef struct PRIOVec PRIOVec;

    typedef struct PRSocketOptionData PRSocketOptionData;

    typedef PRStatus(*PRFsyncFN) (PRFileDesc *);

    typedef PRStatus(*PRListenFN) (PRFileDesc *, PRIntn);

    typedef enum PRSeekWhence {
	PR_SEEK_SET = 0,
	PR_SEEK_CUR = 1,
	PR_SEEK_END = 2
    } PRSeekWhence;

    typedef PRInt32(*PRAcceptreadFN) (PRFileDesc *, PRFileDesc * *,
				      PRNetAddr * *, void *, PRInt32,
				      PRIntervalTime);

    typedef PRStatus(*PRCloseFN) (PRFileDesc *);

    typedef PRInt32(*PRTransmitfileFN) (PRFileDesc *, PRFileDesc *,
					const void *, PRInt32,
					PRTransmitFileFlags,
					PRIntervalTime);

    typedef enum PRSockOption {
	PR_SockOpt_Nonblocking,
	PR_SockOpt_Linger = 1,
	PR_SockOpt_Reuseaddr = 2,
	PR_SockOpt_Keepalive = 3,
	PR_SockOpt_RecvBufferSize = 4,
	PR_SockOpt_SendBufferSize = 5,
	PR_SockOpt_IpTimeToLive = 6,
	PR_SockOpt_IpTypeOfService = 7,
	PR_SockOpt_AddMember = 8,
	PR_SockOpt_DropMember = 9,
	PR_SockOpt_McastInterface = 10,
	PR_SockOpt_McastTimeToLive = 11,
	PR_SockOpt_McastLoopback = 12,
	PR_SockOpt_NoDelay = 13,
	PR_SockOpt_MaxSegment = 14,
	PR_SockOpt_Broadcast = 15,
	PR_SockOpt_Last = 16
    } PRSockOption;

    typedef PRFileDesc *(*PRAcceptFN) (PRFileDesc *, PRNetAddr *,
				       PRIntervalTime);

    typedef PRStatus(*PRConnectcontinueFN) (PRFileDesc *, PRInt16);

    typedef PRInt32(*PRReadFN) (PRFileDesc *, void *, PRInt32);

    typedef struct PRFileInfo64 PRFileInfo64;

    typedef PRStatus(*PRGetsocketoptionFN) (PRFileDesc *,
					    PRSocketOptionData *);

    typedef PRInt32(*PRSendtoFN) (PRFileDesc *, const void *, PRInt32,
				  PRIntn, const PRNetAddr *,
				  PRIntervalTime);

    typedef PRStatus(*PRGetsocknameFN) (PRFileDesc *, PRNetAddr *);

    typedef PRInt32(*PRSendFN) (PRFileDesc *, const void *, PRInt32,
				PRIntn, PRIntervalTime);

    typedef PROffset32(*PRSeekFN) (PRFileDesc *, PROffset32, PRSeekWhence);

    typedef PRInt64(*PRAvailable64FN) (PRFileDesc *);

    typedef PRInt32(*PRAvailableFN) (PRFileDesc *);

    typedef struct PRFileInfo PRFileInfo;

    typedef PROffset64(*PRSeek64FN) (PRFileDesc *, PROffset64,
				     PRSeekWhence);

    typedef PRStatus(*PRSetsocketoptionFN) (PRFileDesc *,
					    const PRSocketOptionData *);

    typedef PRInt32(*PRRecvFN) (PRFileDesc *, void *, PRInt32, PRIntn,
				PRIntervalTime);

    typedef struct PRSendFileData PRSendFileData;

    typedef PRIntn PRDescIdentity;

    typedef PRStatus(*PRConnectFN) (PRFileDesc *, const PRNetAddr *,
				    PRIntervalTime);

    typedef PRInt32(*PRSendfileFN) (PRFileDesc *, PRSendFileData *,
				    PRTransmitFileFlags, PRIntervalTime);

    typedef PRInt32(*PRRecvfromFN) (PRFileDesc *, void *, PRInt32, PRIntn,
				    PRNetAddr *, PRIntervalTime);

    typedef struct PRPollDesc PRPollDesc;

    typedef PRInt32(*PRWriteFN) (PRFileDesc *, const void *, PRInt32);

    typedef PRStatus(*PRFileInfo64FN) (PRFileDesc *, PRFileInfo64 *);

    typedef PRStatus(*PRShutdownFN) (PRFileDesc *, PRIntn);

    typedef PRIntn(*PRReservedFN) (PRFileDesc *);

    typedef PRStatus(*PRFileInfoFN) (PRFileDesc *, PRFileInfo *);

    typedef PRInt32(*PRWritevFN) (PRFileDesc *, const PRIOVec *, PRInt32,
				  PRIntervalTime);

    typedef enum PRFileType {
	PR_FILE_FILE = 1,
	PR_FILE_DIRECTORY = 2,
	PR_FILE_OTHER = 3
    } PRFileType;

    typedef PRStatus(*PRBindFN) (PRFileDesc *, const PRNetAddr *);

    typedef PRInt16(*PRPollFN) (PRFileDesc *, PRInt16, PRInt16 *);

    typedef PRStatus(*PRGetpeernameFN) (PRFileDesc *, PRNetAddr *);

    typedef enum PRShutdownHow {
	PR_SHUTDOWN_RCV = 0,
	PR_SHUTDOWN_SEND = 1,
	PR_SHUTDOWN_BOTH = 2
    } PRShutdownHow;

    struct PRIOMethods {
	PRDescType file_type;
	PRCloseFN close;
	PRReadFN read;
	PRWriteFN write;
	PRAvailableFN available;
	PRAvailable64FN available64;
	PRFsyncFN fsync;
	PRSeekFN seek;
	PRSeek64FN seek64;
	PRFileInfoFN fileInfo;
	PRFileInfo64FN fileInfo64;
	PRWritevFN writev;
	PRConnectFN connect;
	PRAcceptFN accept;
	PRBindFN bind;
	PRListenFN listen;
	PRShutdownFN shutdown;
	PRRecvFN recv;
	PRSendFN send;
	PRRecvfromFN recvfrom;
	PRSendtoFN sendto;
	PRPollFN poll;
	PRAcceptreadFN acceptread;
	PRTransmitfileFN transmitfile;
	PRGetsocknameFN getsockname;
	PRGetpeernameFN getpeername;
	PRReservedFN reserved_fn_6;
	PRReservedFN reserved_fn_5;
	PRGetsocketoptionFN getsocketoption;
	PRSetsocketoptionFN setsocketoption;
	PRSendfileFN sendfile;
	PRConnectcontinueFN connectcontinue;
	PRReservedFN reserved_fn_3;
	PRReservedFN reserved_fn_2;
	PRReservedFN reserved_fn_1;
	PRReservedFN reserved_fn_0;
    };

    struct PRIPv6Addr {
	union {
	    PRUint8 _S6_u8[15];
	    PRUint16 _S6_u16[7];
	    PRUint32 _S6_u32[3];
	    PRUint64 _S6_u64[1];
	} _S6_un;
    };

    struct PRLinger {
	PRBool polarity;
	PRIntervalTime linger;
    };

    struct PRFileDesc {
	const struct PRIOMethods *methods;
	PRFilePrivate *secret;
	PRFileDesc *lower;
	PRFileDesc *higher;
	void (*dtor) (PRFileDesc *);
	PRDescIdentity identity;
    };

    union PRNetAddr {
	struct {
	    PRUint16 family;
	    char data[14];
	} raw;
	struct {
	    PRUint16 family;
	    PRUint16 port;
	    PRUint32 ip;
	    char pad[7];
	} inet;
	struct {
	    PRUint16 family;
	    PRUint16 port;
	    PRUint32 flowinfo;
	    PRIPv6Addr ip;
	    PRUint32 scope_id;
	} ipv6;
	struct {
	    PRUint16 family;
	    char path[103];
	} local;
    };

    struct PRMcastRequest {
	union PRNetAddr mcaddr;
	union PRNetAddr ifaddr;
    };

    struct PRIOVec {
	char *iov_base;
	int iov_len;
    };

    struct PRSocketOptionData {
	PRSockOption option;
	union {
	    PRUintn ip_ttl;
	    PRUintn mcast_ttl;
	    PRUintn tos;
	    PRBool non_blocking;
	    PRBool reuse_addr;
	    PRBool keep_alive;
	    PRBool mcast_loopback;
	    PRBool no_delay;
	    PRBool broadcast;
	    PRSize max_segment;
	    PRSize recv_buffer_size;
	    PRSize send_buffer_size;
	    PRLinger linger;
	    PRMcastRequest add_member;
	    PRMcastRequest drop_member;
	    union PRNetAddr mcast_if;
	} value;
    };

    struct PRFileInfo64 {
	PRFileType type;
	PROffset64 size;
	PRTime creationTime;
	PRTime modifyTime;
    };

    struct PRFileInfo {
	PRFileType type;
	PROffset32 size;
	PRTime creationTime;
	PRTime modifyTime;
    };

    struct PRSendFileData {
	PRFileDesc *fd;
	PRUint32 file_offset;
	PRSize file_nbytes;
	const void *header;
	PRInt32 hlen;
	const void *trailer;
	PRInt32 tlen;
    };

    struct PRPollDesc {
	PRFileDesc *fd;
	PRInt16 in_flags;
	PRInt16 out_flags;
    };


/* Function prototypes */

    extern PRFileDesc *PR_Accept(PRFileDesc * fd, PRNetAddr * addr,
				 PRIntervalTime timeout);
    extern PRStatus PR_Bind(PRFileDesc * fd, const PRNetAddr * addr);
    extern PRStatus PR_Close(PRFileDesc * fd);
    extern PRStatus PR_Connect(PRFileDesc * fd, const PRNetAddr * addr,
			       PRIntervalTime timeout);
    extern PRFileDesc *PR_CreateIOLayerStub(PRDescIdentity ident,
					    const struct PRIOMethods
					    *methods);
    extern const struct PRIOMethods *PR_GetDefaultIOMethods(void);
    extern PRDescIdentity PR_GetLayersIdentity(PRFileDesc * fd);
    extern PRStatus PR_GetSocketOption(PRFileDesc * fd,
				       PRSocketOptionData * data);
    extern PRDescIdentity PR_GetUniqueIdentity(const char *layer_name);
    extern PRStatus PR_Listen(PRFileDesc * fd, PRIntn backlog);
    extern PRFileDesc *PR_OpenTCPSocket(PRIntn af);
    extern PRFileDesc *PR_OpenUDPSocket(PRIntn af);
    extern PRInt32 PR_Poll(PRPollDesc * pds, PRIntn npds,
			   PRIntervalTime timeout);
    extern PRFileDesc *PR_PopIOLayer(PRFileDesc * fd_stack,
				     PRDescIdentity id);
    extern PRStatus PR_PushIOLayer(PRFileDesc * fd_stack,
				   PRDescIdentity id, PRFileDesc * layer);
    extern PRInt32 PR_Read(PRFileDesc * fd, void *buf, PRInt32 amount);
    extern PRInt32 PR_Recv(PRFileDesc * fd, void *buf, PRInt32 amount,
			   PRIntn flags, PRIntervalTime timeout);
    extern PRInt32 PR_RecvFrom(PRFileDesc * fd, void *buf, PRInt32 amount,
			       PRIntn flags, PRNetAddr * addr,
			       PRIntervalTime timeout);
    extern PRInt32 PR_Send(PRFileDesc * fd, const void *buf,
			   PRInt32 amount, PRIntn flags,
			   PRIntervalTime timeout);
    extern PRInt32 PR_SendTo(PRFileDesc * fd, const void *buf,
			     PRInt32 amount, PRIntn flags,
			     const PRNetAddr * addr,
			     PRIntervalTime timeout);
    extern PRStatus PR_SetSocketOption(PRFileDesc * fd,
				       const PRSocketOptionData * data);
    extern PRStatus PR_Shutdown(PRFileDesc * fd, PRShutdownHow how);
    extern PRInt32 PR_Write(PRFileDesc * fd, const void *buf,
			    PRInt32 amount);
#if __LSB_VERSION__ >= 50
    extern PRStatus PR_ConnectContinue(PRFileDesc * fd, PRInt16 out_flags);
    extern PRStatus PR_CreatePipe(PRFileDesc * *readPipe,
				  PRFileDesc * *writePipe);
    extern PRDescType PR_GetDescType(PRFileDesc * file);
    extern PRFileDesc *PR_Open(const char *name, PRIntn flags,
			       PRIntn mode);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
