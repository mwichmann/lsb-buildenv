#ifndef _X11_SM_SMLIB_H_
#define _X11_SM_SMLIB_H_

#include <X11/ICE/ICElib.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef IcePointer SmPointer;

    typedef struct _SmcConn *SmcConn;

    typedef struct _SmsConn *SmsConn;


/* Session Management property*/
    typedef struct {
	int length;
	SmPointer value;
    } SmPropValue;

    typedef struct {
	char *name;
	char *type;
	int num_vals;
	SmPropValue *vals;
    } SmProp;


/* SmcCloseConnection status return*/
    typedef enum {
	SmcClosedNow,
	SmcClosedASAP,
	SmcConnectionInUse
    } SmcCloseStatus;


/* Client callbacks*/
    typedef void (*SmcSaveYourselfPhase2Proc) (void);

    typedef void (*SmcInteractProc) (void);

    typedef void (*SmcDieProc) (void);

    typedef void (*SmcShutdownCancelledProc) (void);

    typedef void (*SmcSaveCompleteProc) (void);

    typedef void (*SmcPropReplyProc) (void);


/* Callbacks set up at SmcOpenConnection time*/
    typedef struct {
	SmcShutdownCancelledProc callback;
	SmPointer client_data;
    } SmcCallbacks;


/* Session manager callbacks*/
    typedef void (*SmsSetPropertiesProc) (void);

    typedef void (*SmsDeletePropertiesProc) (void);

    typedef void (*SmsGetPropertiesProc) (void);


/* Callbacks set up by a session manager when a new client connects.*/
    typedef struct {
	SmsGetPropertiesProc callback;
	SmPointer manager_data;
    } SmsCallbacks;


    typedef int (*SmsNewClientProc) (void);


/* Error handlers*/
    typedef void (*SmcErrorHandler) (void);

    typedef void (*SmsErrorHandler) (void);


/* Default Header Section for X11/SM/SMlib.h*/

    extern void SmFreeProperty(SmProp *);
    extern void SmFreeReasons(int, char **);
    extern char *SmcClientID(SmcConn);
    extern SmcCloseStatus SmcCloseConnection(SmcConn, int, char **);
    extern void SmcDeleteProperties(SmcConn, int, char **);
    extern IceConn SmcGetIceConnection(SmcConn);
    extern int SmcGetProperties(SmcConn, SmcPropReplyProc, SmPointer);
    extern void SmcInteractDone(SmcConn, int);
    extern int SmcInteractRequest(SmcConn, int, SmcInteractProc,
				  SmPointer);
    extern void SmcModifyCallbacks(SmcConn, unsigned long int,
				   SmcCallbacks *);
    extern SmcConn SmcOpenConnection(char *, SmPointer, int, int,
				     unsigned long int, SmcCallbacks *,
				     char *, char **, int, char *);
    extern int SmcProtocolRevision(SmcConn);
    extern int SmcProtocolVersion(SmcConn);
    extern char *SmcRelease(SmcConn);
    extern void SmcRequestSaveYourself(SmcConn, int, int, int, int, int);
    extern int SmcRequestSaveYourselfPhase2(SmcConn,
					    SmcSaveYourselfPhase2Proc,
					    SmPointer);
    extern void SmcSaveYourselfDone(SmcConn, int);
    extern SmcErrorHandler SmcSetErrorHandler(SmcErrorHandler);
    extern void SmcSetProperties(SmcConn, int, SmProp * *);
    extern char *SmcVendor(SmcConn);
    extern void SmsCleanUp(SmsConn);
    extern char *SmsClientHostName(SmsConn);
    extern char *SmsClientID(SmsConn);
    extern void SmsDie(SmsConn);
    extern char *SmsGenerateClientID(SmsConn);
    extern IceConn SmsGetIceConnection(SmsConn);
    extern int SmsInitialize(char *, char *, SmsNewClientProc, SmPointer,
			     IceHostBasedAuthProc, int, char *);
    extern void SmsInteract(SmsConn);
    extern int SmsProtocolRevision(SmsConn);
    extern int SmsProtocolVersion(SmsConn);
    extern int SmsRegisterClientReply(SmsConn, char *);
    extern void SmsReturnProperties(SmsConn, int, SmProp * *);
    extern void SmsSaveComplete(SmsConn);
    extern void SmsSaveYourself(SmsConn, int, int, int, int);
    extern void SmsSaveYourselfPhase2(SmsConn);
    extern SmsErrorHandler SmsSetErrorHandler(SmsErrorHandler);
    extern void SmsShutdownCancelled(SmsConn);
#ifdef __cplusplus
}
#endif
#endif
