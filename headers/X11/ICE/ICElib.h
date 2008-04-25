#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_ICE_ICELIB_H_
#define _X11_ICE_ICELIB_H_


#ifdef __cplusplus
extern "C" {
#endif






/* Default Header Section for X11/ICE/ICElib.h*/
#if __LSB_VERSION__ >= 12
    typedef void *IcePointer;

    typedef struct _IceConn *IceConn;

    typedef void (*IcePaProcessMsgProc) (IceConn, IcePointer, int,
					 long unsigned int, int);

    typedef struct {
	int major_version;
	int minor_version;
	IcePaProcessMsgProc process_msg_proc;
    } IcePaVersionRec;

    typedef struct {
	long unsigned int sequence_of_request;
	int major_opcode_of_request;
	int minor_opcode_of_request;
	IcePointer reply;
    } IceReplyWaitInfo;

    typedef void (*IcePoProcessMsgProc) (IceConn, IcePointer, int,
					 long unsigned int, int,
					 IceReplyWaitInfo *, int *);

    typedef struct {
	int major_version;
	int minor_version;
	IcePoProcessMsgProc process_msg_proc;
    } IcePoVersionRec;

    typedef (*IcePoAuthProc) (IceConn, IcePointer *, int, int, int,
			      IcePointer, int *, IcePointer *, char **);

    typedef (*IcePaAuthProc) (IceConn, IcePointer *, int, int, IcePointer,
			      int *, IcePointer *, char **);

    typedef struct _IceListenObj *IceListenObj;

    typedef void (*IceIOErrorProc) (IceConn);

    typedef int (*IceProtocolSetupProc) (IceConn, int, int, char *, char *,
					 IcePointer *, char **);

    typedef void (*IceProtocolActivateProc) (IceConn, IcePointer);

    typedef int (*IceHostBasedAuthProc) (char *);

    typedef void (*IcePingReplyProc) (IceConn, IcePointer);

    typedef void (*IceWatchProc) (IceConn, IcePointer, int, IcePointer *);

    typedef void (*IceIOErrorHandler) (IceConn);

    typedef void (*IceErrorHandler) (IceConn, int, int, long unsigned int,
				     int, int, IcePointer);

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct {
	int major_version;
	int minor_version;
	IcePaProcessMsgProc process_msg_proc;
    };

    struct {
	long unsigned int sequence_of_request;
	int major_opcode_of_request;
	int minor_opcode_of_request;
	IcePointer reply;
    };

    struct {
	int major_version;
	int minor_version;
	IcePoProcessMsgProc process_msg_proc;
    };

    enum IceAcceptStatus {
	IceAcceptSuccess = 0,
	IceAcceptFailure = 1,
	IceAcceptBadMalloc = 2
    };

    struct _IceListenObj;

    enum IceConnectStatus {
	IceConnectPending = 0,
	IceConnectAccepted = 1,
	IceConnectRejected = 2,
	IceConnectIOError = 3
    };

#include <X11/ICE/ICEconn.h>
    enum IceProcessMessagesStatus {
	IceProcessMessagesSuccess = 0,
	IceProcessMessagesIOError = 1,
	IceProcessMessagesConnectionClosed = 2
    };

    enum IceCloseStatus {
	IceClosedNow = 0,
	IceClosedASAP = 1,
	IceConnectionInUse = 2,
	IceStartedShutdownNegotiation = 3
    };

    enum IceProtocolSetupStatus {
	IceProtocolSetupSuccess = 0,
	IceProtocolSetupFailure = 1,
	IceProtocolSetupIOError = 2,
	IceProtocolAlreadyActive = 3
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern IceConn IceAcceptConnection(IceListenObj,
				       enum IceAcceptStatus *);
    extern int IceAddConnectionWatch(IceWatchProc, IcePointer);
    extern char *IceAllocScratch(IceConn, long unsigned int);
    extern void IceAppLockConn(IceConn);
    extern void IceAppUnlockConn(IceConn);
    extern int IceCheckShutdownNegotiation(IceConn);
    extern enum IceCloseStatus IceCloseConnection(IceConn);
    extern char *IceComposeNetworkIdList(int, IceListenObj *);
    extern int IceConnectionNumber(IceConn);
    extern enum IceConnectStatus IceConnectionStatus(IceConn);
    extern char *IceConnectionString(IceConn);
    extern int IceFlush(IceConn);
    extern void IceFreeListenObjs(int, IceListenObj *);
    extern IcePointer IceGetConnectionContext(IceConn);
    extern int IceGetInBufSize(IceConn);
    extern int IceGetListenConnectionNumber(IceListenObj);
    extern char *IceGetListenConnectionString(IceListenObj);
    extern int IceGetOutBufSize(IceConn);
    extern int IceInitThreads(void);
    extern long unsigned int IceLastReceivedSequenceNumber(IceConn);
    extern long unsigned int IceLastSentSequenceNumber(IceConn);
    extern int IceListenForConnections(int *, IceListenObj * *, int,
				       char *);
    extern int IceListenForWellKnownConnections(char *, int *,
						IceListenObj * *, int,
						char *);
    extern IceConn IceOpenConnection(char *, IcePointer, int, int, int,
				     char *);
    extern int IcePing(IceConn, IcePingReplyProc, IcePointer);
    extern enum IceProcessMessagesStatus IceProcessMessages(IceConn,
							    IceReplyWaitInfo
							    *, int *);
    extern int IceProtocolRevision(IceConn);
    extern enum IceProtocolSetupStatus IceProtocolSetup(IceConn, int,
							IcePointer, int,
							int *, int *,
							char **, char **,
							int, char *);
    extern int IceProtocolShutdown(IceConn, int);
    extern int IceProtocolVersion(IceConn);
    extern int IceRegisterForProtocolReply(char *, char *, char *, int,
					   IcePaVersionRec *, int, char **,
					   IcePaAuthProc *,
					   IceHostBasedAuthProc,
					   IceProtocolSetupProc,
					   IceProtocolActivateProc,
					   IceIOErrorProc);
    extern int IceRegisterForProtocolSetup(char *, char *, char *, int,
					   IcePoVersionRec *, int, char **,
					   IcePoAuthProc *,
					   IceIOErrorProc);
    extern char *IceRelease(IceConn);
    extern void IceRemoveConnectionWatch(IceWatchProc, IcePointer);
    extern IceErrorHandler IceSetErrorHandler(IceErrorHandler);
    extern void IceSetHostBasedAuthProc(IceListenObj,
					IceHostBasedAuthProc);
    extern IceIOErrorHandler IceSetIOErrorHandler(IceIOErrorHandler);
    extern void IceSetShutdownNegotiation(IceConn, int);
    extern int IceSwapping(IceConn);
    extern char *IceVendor(IceConn);
#endif				/* __LSB_VERSION__ >= 1.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
