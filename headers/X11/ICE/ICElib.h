typedef void *IcePointer;

typedef enum {
    IcePoAuthHaveReply,
    IcePoAuthRejected,
    IcePoAuthFailed,
    IcePoAuthDoneCleanup
} IcePoAuthStatus;

typedef enum {
    IcePaAuthContinue,
    IcePaAuthAccepted,
    IcePaAuthRejected,
    IcePaAuthFailed
} IcePaAuthStatus;

typedef enum {
    IceConnectPending,
    IceConnectAccepted,
    IceConnectRejected,
    IceConnectIOError
} IceConnectStatus;

typedef enum {
    IceProtocolSetupSuccess,
    IceProtocolSetupFailure,
    IceProtocolSetupIOError,
    IceProtocolAlreadyActive
} IceProtocolSetupStatus;

typedef enum {
    IceAcceptSuccess,
    IceAcceptFailure,
    IceAcceptBadMalloc
} IceAcceptStatus;

typedef enum {
    IceClosedNow,
    IceClosedASAP,
    IceConnectionInUse,
    IceStartedShutdownNegotiation
} IceCloseStatus;

typedef enum {
    IceProcessMessagesSuccess,
    IceProcessMessagesIOError,
    IceProcessMessagesConnectionClosed
} IceProcessMessagesStatus;

typedef struct {
    unsigned long sequence_of_request;
    int major_opcode_of_request;
    int minor_opcode_of_request;
    IcePointer reply;
} IceReplyWaitInfo;

typedef struct _IceConn *IceConn;

typedef struct _IceListenObj *IceListenObj;

typedef void (*IceWatchProc) ()
;

typedef void (*IcePoProcessMsgProc) ()
;

typedef void (*IcePaProcessMsgProc) ()
;

typedef IcePoAuthStatus(*IcePoAuthProc) ()
;

typedef IcePaAuthStatus(*IcePaAuthProc) ()
;

typedef int (*IceHostBasedAuthProc) ()
;

typedef int (*IceProtocolSetupProc) ()
;

typedef void (*IceProtocolActivateProc) ()
;

typedef void (*IceIOErrorProc) ()
;

typedef void (*IcePingReplyProc) ()
;

typedef void (*IceErrorHandler) ()
;

typedef void (*IceIOErrorHandler) ()
;

/*
 * 7 Default HeaderGroup for X11/ICE/ICElib.h
 */
typedef struct {
    int major_version;
    int minor_version;
    IcePoProcessMsgProc process_msg_proc;
} IcePoVersionRec;

typedef struct {
    int major_version;
    int minor_version;
    IcePaProcessMsgProc process_msg_proc;
} IcePaVersionRec;


IceConn IceAcceptConnection(IceListenObj, IceAcceptStatus *);
int IceAddConnectionWatch(IceWatchProc, IcePointer);
char *IceAllocScratch(IceConn, unsigned long);
void IceAppLockConn(IceConn);
void IceAppUnlockConn(IceConn);
int IceCheckShutdownNegotiation(IceConn);
IceCloseStatus IceCloseConnection(IceConn);
char *IceComposeNetworkIdList(int, IceListenObj *);
int IceConnectionNumber(IceConn);
IceConnectStatus IceConnectionStatus(IceConn);
char *IceConnectionString(IceConn);
int IceFlush(IceConn);
void IceFreeListenObjs(int, IceListenObj *);
IcePointer IceGetConnectionContext(IceConn);
int IceGetInBufSize(IceConn);
int IceGetListenConnectionNumber(IceListenObj);
char *IceGetListenConnectionString(IceListenObj);
int IceGetOutBufSize(IceConn);
int IceInitThreads(void);
unsigned long IceLastReceivedSequenceNumber(IceConn);
unsigned long IceLastSentSequenceNumber(IceConn);
int IceListenForConnections(int *, IceListenObj * *, int, char *);
int IceListenForWellKnownConnections(char *, int *, IceListenObj * *, int,

				     char *);
IceConn IceOpenConnection(char *, IcePointer, int, int, int, char *);
int IcePing(IceConn, IcePingReplyProc, IcePointer);
IceProcessMessagesStatus IceProcessMessages(IceConn, IceReplyWaitInfo *,

					    int *);
int IceProtocolRevision(IceConn);
IceProtocolSetupStatus IceProtocolSetup(IceConn, int, IcePointer, int,
					int *, int *, char **, char **,
					int, char *);
int IceProtocolShutdown(IceConn, int);
int IceProtocolVersion(IceConn);
int IceRegisterForProtocolReply(char *, char *, char *, int,
				IcePaVersionRec *, int, char **,
				IcePaAuthProc *, IceHostBasedAuthProc,
				IceProtocolSetupProc,
				IceProtocolActivateProc, IceIOErrorProc);
int IceRegisterForProtocolSetup(char *, char *, char *, int,
				IcePoVersionRec *, int, char **,
				IcePoAuthProc *, IceIOErrorProc);
char *IceRelease(IceConn);
void IceRemoveConnectionWatch(IceWatchProc, IcePointer);
IceErrorHandler IceSetErrorHandler(IceErrorHandler);
void IceSetHostBasedAuthProc(IceListenObj, IceHostBasedAuthProc);
IceIOErrorHandler IceSetIOErrorHandler(IceIOErrorHandler);
void IceSetShutdownNegotiation(IceConn, int);
int IceSwapping(IceConn);
char *IceVendor(IceConn);
