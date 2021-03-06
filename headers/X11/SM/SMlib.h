#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_SM_SMLIB_H_
#define _X11_SM_SMLIB_H_

#include <X11/ICE/ICElib.h>
#include <X11/ICE/ICEconn.h>
#include <X11/SM/SM.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Session Management property*/

/* SmcCloseConnection status return*/

/* Client callbacks*/

/* Callbacks set up at SmcOpenConnection time*/

/* Session manager callbacks*/

/* Callbacks set up by a session manager when a new client connects.*/


/* Error handlers*/

/* Default Header Section for X11/SM/SMlib.h*/
#if __LSB_VERSION__ >= 12
#define SmcSaveYourselfProcMask	(1L << 0)
#define SmsRegisterClientProcMask	(1L << 0)
#define SmcDieProcMask	(1L << 1)
#define SmsInteractRequestProcMask	(1L << 1)
#define SmcSaveCompleteProcMask	(1L << 2)
#define SmsInteractDoneProcMask	(1L << 2)
#define SmcShutdownCancelledProcMask	(1L << 3)
#define SmsSaveYourselfRequestProcMask	(1L << 3)
#define SmsSaveYourselfP2RequestProcMask	(1L << 4)
#define SmsSaveYourselfDoneProcMask	(1L << 5)
#define SmsCloseConnectionProcMask	(1L << 6)
#define SmsSetPropertiesProcMask	(1L << 7)
#define SmsDeletePropertiesProcMask	(1L << 8)
#define SmsGetPropertiesProcMask	(1L << 9)
#endif				/* __LSB_VERSION__ >= 1.2 */



#if __LSB_VERSION__ >= 12
    typedef void *SmPointer;

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

    typedef struct _SmcConn *SmcConn;

    typedef void (*SmcSaveYourselfProc) (SmcConn, SmPointer, int, int, int,
					 int);

    typedef void (*SmcDieProc) (SmcConn, SmPointer);

    typedef void (*SmcSaveCompleteProc) (SmcConn, SmPointer);

    typedef void (*SmcShutdownCancelledProc) (SmcConn, SmPointer);

    typedef struct {
	struct {
	    SmcSaveYourselfProc callback;
	    SmPointer client_data;
	} save_yourself;
	struct {
	    SmcDieProc callback;
	    SmPointer client_data;
	} die;
	struct {
	    SmcSaveCompleteProc callback;
	    SmPointer client_data;
	} save_complete;
	struct {
	    SmcShutdownCancelledProc callback;
	    SmPointer client_data;
	} shutdown_cancelled;
    } SmcCallbacks;

    typedef struct _SmsConn *SmsConn;

    typedef void (*SmsErrorHandler) (SmsConn, int, int, long unsigned int,
				     int, int, SmPointer);

    typedef void (*SmcErrorHandler) (SmcConn, int, int, long unsigned int,
				     int, int, SmPointer);

    typedef int (*SmsRegisterClientProc) (SmsConn, SmPointer, char *);

    typedef void (*SmsInteractRequestProc) (SmsConn, SmPointer, int);

    typedef void (*SmsInteractDoneProc) (SmsConn, SmPointer, int);

    typedef void (*SmsSaveYourselfRequestProc) (SmsConn, SmPointer, int,
						int, int, int, int);

    typedef void (*SmsSaveYourselfPhase2RequestProc) (SmsConn, SmPointer);

    typedef void (*SmsSaveYourselfDoneProc) (SmsConn, SmPointer, int);

    typedef void (*SmsCloseConnectionProc) (SmsConn, SmPointer, int,
					    char **);

    typedef void (*SmsSetPropertiesProc) (SmsConn, SmPointer, int,
					  SmProp * *);

    typedef void (*SmsDeletePropertiesProc) (SmsConn, SmPointer, int,
					     char **);

    typedef void (*SmsGetPropertiesProc) (SmsConn, SmPointer);

    typedef struct {
	struct {
	    SmsRegisterClientProc callback;
	    SmPointer manager_data;
	} register_client;
	struct {
	    SmsInteractRequestProc callback;
	    SmPointer manager_data;
	} interact_request;
	struct {
	    SmsInteractDoneProc callback;
	    SmPointer manager_data;
	} interact_done;
	struct {
	    SmsSaveYourselfRequestProc callback;
	    SmPointer manager_data;
	} save_yourself_request;
	struct {
	    SmsSaveYourselfPhase2RequestProc callback;
	    SmPointer manager_data;
	} save_yourself_phase2_request;
	struct {
	    SmsSaveYourselfDoneProc callback;
	    SmPointer manager_data;
	} save_yourself_done;
	struct {
	    SmsCloseConnectionProc callback;
	    SmPointer manager_data;
	} close_connection;
	struct {
	    SmsSetPropertiesProc callback;
	    SmPointer manager_data;
	} set_properties;
	struct {
	    SmsDeletePropertiesProc callback;
	    SmPointer manager_data;
	} delete_properties;
	struct {
	    SmsGetPropertiesProc callback;
	    SmPointer manager_data;
	} get_properties;
    } SmsCallbacks;

    typedef int (*SmsNewClientProc) (SmsConn, SmPointer,
				     long unsigned int *, SmsCallbacks *,
				     char **);

    typedef void (*SmcPropReplyProc) (SmcConn, SmPointer, int, SmProp * *);

    typedef void (*SmcInteractProc) (SmcConn, SmPointer);

    typedef void (*SmcSaveYourselfPhase2Proc) (SmcConn, SmPointer);

    typedef enum {
	SmcClosedNow = 0,
	SmcClosedASAP = 1,
	SmcConnectionInUse = 2
    } SmcCloseStatus;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct _SmcConn;

    struct _SmsConn;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

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
    extern void SmcModifyCallbacks(SmcConn, long unsigned int,
				   SmcCallbacks *);
    extern SmcConn SmcOpenConnection(char *, SmPointer, int, int,
				     long unsigned int, SmcCallbacks *,
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
#endif				/* protection */
#endif				/* LSB version */
