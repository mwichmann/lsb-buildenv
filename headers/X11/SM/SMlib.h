#ifndef _X11_SM_SMLIB_H_
#define _X11_SM_SMLIB_H_

#include <X11/ICE/ICElib.h>



typedef IcePointer SmPointer;

typedef struct _SmcConn *SmcConn;

typedef struct _SmsConn *SmsConn;


/* Session Management property*/


typedef struct
{
  int length;
  SmPointer value;
}
SmPropValue;

typedef struct
{
  char *name;
  char *type;
  int num_vals;
  SmPropValue *vals;
}
SmProp;


/* SmcCloseConnection status return*/


typedef enum
{
  SmcClosedNow,
  SmcClosedASAP,
  SmcConnectionInUse
}
SmcCloseStatus;


/* Client callbacks*/


typedef void (*SmcSaveYourselfPhase2Proc) (void);

typedef void (*SmcInteractProc) (void);

typedef void (*SmcDieProc) (void);

typedef void (*SmcShutdownCancelledProc) (void);

typedef void (*SmcSaveCompleteProc) (void);

typedef void (*SmcPropReplyProc) (void);


/* Callbacks set up at SmcOpenConnection time*/


typedef struct
{
  SmcShutdownCancelledProc callback;
  SmPointer client_data;
}
SmcCallbacks;


/* Session manager callbacks*/


typedef void (*SmsSetPropertiesProc) (void);

typedef void (*SmsDeletePropertiesProc) (void);

typedef void (*SmsGetPropertiesProc) (void);


/* Callbacks set up by a session manager when a new client connects.*/


typedef struct
{
  SmsGetPropertiesProc callback;
  SmPointer manager_data;
}
SmsCallbacks;




typedef int (*SmsNewClientProc) (void);


/* Error handlers*/


typedef void (*SmcErrorHandler) (void);

typedef void (*SmsErrorHandler) (void);


/* Default HeaderGroup for X11/SM/SMlib.h*/



void SmFreeProperty (SmProp *);
void SmFreeReasons (int, char **);
char *SmcClientID (SmcConn);
SmcCloseStatus SmcCloseConnection (SmcConn, int, char **);
void SmcDeleteProperties (SmcConn, int, char **);
IceConn SmcGetIceConnection (SmcConn);
int SmcGetProperties (SmcConn, SmcPropReplyProc, SmPointer);
void SmcInteractDone (SmcConn, int);
int SmcInteractRequest (SmcConn, int, SmcInteractProc, SmPointer);
void SmcModifyCallbacks (SmcConn, unsigned long, SmcCallbacks *);
SmcConn SmcOpenConnection (char *, SmPointer, int, int, unsigned long,
			   SmcCallbacks *, char *, char **, int, char *);
int SmcProtocolRevision (SmcConn);
int SmcProtocolVersion (SmcConn);
char *SmcRelease (SmcConn);
void SmcRequestSaveYourself (SmcConn, int, int, int, int, int);
int SmcRequestSaveYourselfPhase2 (SmcConn, SmcSaveYourselfPhase2Proc,
				  SmPointer);
void SmcSaveYourselfDone (SmcConn, int);
SmcErrorHandler SmcSetErrorHandler (SmcErrorHandler);
void SmcSetProperties (SmcConn, int, SmProp * *);
char *SmcVendor (SmcConn);
void SmsCleanUp (SmsConn);
char *SmsClientHostName (SmsConn);
char *SmsClientID (SmsConn);
void SmsDie (SmsConn);
char *SmsGenerateClientID (SmsConn);
IceConn SmsGetIceConnection (SmsConn);
int SmsInitialize (char *, char *, SmsNewClientProc, SmPointer,
		   IceHostBasedAuthProc, int, char *);
void SmsInteract (SmsConn);
int SmsProtocolRevision (SmsConn);
int SmsProtocolVersion (SmsConn);
int SmsRegisterClientReply (SmsConn, char *);
void SmsReturnProperties (SmsConn, int, SmProp * *);
void SmsSaveComplete (SmsConn);
void SmsSaveYourself (SmsConn, int, int, int, int);
void SmsSaveYourselfPhase2 (SmsConn);
SmsErrorHandler SmsSetErrorHandler (SmsErrorHandler);
void SmsShutdownCancelled (SmsConn);
#endif
