#ifndef _X11_ICE_ICELIB_H_
#define _X11_ICE_ICELIB_H_




typedef void *IcePointer;

typedef enum
{
  IcePoAuthHaveReply,
  IcePoAuthRejected,
  IcePoAuthFailed,
  IcePoAuthDoneCleanup
}
IcePoAuthStatus;

typedef enum
{
  IcePaAuthContinue,
  IcePaAuthAccepted,
  IcePaAuthRejected,
  IcePaAuthFailed
}
IcePaAuthStatus;

typedef enum
{
  IceConnectPending,
  IceConnectAccepted,
  IceConnectRejected,
  IceConnectIOError
}
IceConnectStatus;

typedef enum
{
  IceProtocolSetupSuccess,
  IceProtocolSetupFailure,
  IceProtocolSetupIOError,
  IceProtocolAlreadyActive
}
IceProtocolSetupStatus;

typedef enum
{
  IceAcceptSuccess,
  IceAcceptFailure,
  IceAcceptBadMalloc
}
IceAcceptStatus;

typedef enum
{
  IceClosedNow,
  IceClosedASAP,
  IceConnectionInUse,
  IceStartedShutdownNegotiation
}
IceCloseStatus;

typedef enum
{
  IceProcessMessagesSuccess,
  IceProcessMessagesIOError,
  IceProcessMessagesConnectionClosed
}
IceProcessMessagesStatus;




typedef struct
{
  unsigned long sequence_of_request;
  int major_opcode_of_request;
  int minor_opcode_of_request;
  IcePointer reply;
}
IceReplyWaitInfo;




typedef struct _IceConn *IceConn;

typedef struct _IceListenObj *IceListenObj;




typedef void (*IceWatchProc) (void);

typedef void (*IcePoProcessMsgProc) (void);

typedef void (*IcePaProcessMsgProc) (void);

typedef IcePoAuthStatus (*IcePoAuthProc) (void);

typedef IcePaAuthStatus (*IcePaAuthProc) (void);

typedef int (*IceHostBasedAuthProc) (void);

typedef int (*IceProtocolSetupProc) (void);

typedef void (*IceProtocolActivateProc) (void);

typedef void (*IceIOErrorProc) (void);

typedef void (*IcePingReplyProc) (void);

typedef void (*IceErrorHandler) (void);

typedef void (*IceIOErrorHandler) (void);


/* Default HeaderGroup for X11/ICE/ICElib.h*/


typedef struct
{
  int major_version;
  int minor_version;
  IcePoProcessMsgProc process_msg_proc;
}
IcePoVersionRec;

typedef struct
{
  int major_version;
  int minor_version;
  IcePaProcessMsgProc process_msg_proc;
}
IcePaVersionRec;


extern IceConn IceAcceptConnection (IceListenObj, IceAcceptStatus *);
extern int IceAddConnectionWatch (IceWatchProc, IcePointer);
extern char *IceAllocScratch (IceConn, unsigned long);
extern void IceAppLockConn (IceConn);
extern void IceAppUnlockConn (IceConn);
extern int IceCheckShutdownNegotiation (IceConn);
extern IceCloseStatus IceCloseConnection (IceConn);
extern char *IceComposeNetworkIdList (int, IceListenObj *);
extern int IceConnectionNumber (IceConn);
extern IceConnectStatus IceConnectionStatus (IceConn);
extern char *IceConnectionString (IceConn);
extern int IceFlush (IceConn);
extern void IceFreeListenObjs (int, IceListenObj *);
extern IcePointer IceGetConnectionContext (IceConn);
extern int IceGetInBufSize (IceConn);
extern int IceGetListenConnectionNumber (IceListenObj);
extern char *IceGetListenConnectionString (IceListenObj);
extern int IceGetOutBufSize (IceConn);
extern int IceInitThreads (void);
extern unsigned long IceLastReceivedSequenceNumber (IceConn);
extern unsigned long IceLastSentSequenceNumber (IceConn);
extern int IceListenForConnections (int *, IceListenObj * *, int, char *);
extern int IceListenForWellKnownConnections (char *, int *, IceListenObj * *,
					     int, char *);
extern IceConn IceOpenConnection (char *, IcePointer, int, int, int, char *);
extern int IcePing (IceConn, IcePingReplyProc, IcePointer);
extern IceProcessMessagesStatus IceProcessMessages (IceConn,
						    IceReplyWaitInfo *,
						    int *);
extern int IceProtocolRevision (IceConn);
extern IceProtocolSetupStatus IceProtocolSetup (IceConn, int, IcePointer, int,
						int *, int *, char **,
						char **, int, char *);
extern int IceProtocolShutdown (IceConn, int);
extern int IceProtocolVersion (IceConn);
extern int IceRegisterForProtocolReply (char *, char *, char *, int,
					IcePaVersionRec *, int, char **,
					IcePaAuthProc *, IceHostBasedAuthProc,
					IceProtocolSetupProc,
					IceProtocolActivateProc,
					IceIOErrorProc);
extern int IceRegisterForProtocolSetup (char *, char *, char *, int,
					IcePoVersionRec *, int, char **,
					IcePoAuthProc *, IceIOErrorProc);
extern char *IceRelease (IceConn);
extern void IceRemoveConnectionWatch (IceWatchProc, IcePointer);
extern IceErrorHandler IceSetErrorHandler (IceErrorHandler);
extern void IceSetHostBasedAuthProc (IceListenObj, IceHostBasedAuthProc);
extern IceIOErrorHandler IceSetIOErrorHandler (IceIOErrorHandler);
extern void IceSetShutdownNegotiation (IceConn, int);
extern int IceSwapping (IceConn);
extern char *IceVendor (IceConn);
#endif
