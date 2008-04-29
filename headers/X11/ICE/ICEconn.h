#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_ICE_ICECONN_H_
#define _X11_ICE_ICECONN_H_

#include <X11/ICE/ICElib.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
    typedef struct {
	char *vendor;
	char *release;
	int version_count;
	IcePoVersionRec *version_recs;
	int auth_count;
	char **auth_names;
	IcePoAuthProc *auth_procs;
	IceIOErrorProc io_error_proc;
    } _IcePoProtocol;

    typedef struct {
	char *vendor;
	char *release;
	int version_count;
	IcePaVersionRec *version_recs;
	IceProtocolSetupProc protocol_setup_proc;
	IceProtocolActivateProc protocol_activate_proc;
	int auth_count;
	char **auth_names;
	IcePaAuthProc *auth_procs;
	IceHostBasedAuthProc host_based_auth_proc;
	IceIOErrorProc io_error_proc;
    } _IcePaProtocol;

    typedef struct {
	char *protocol_name;
	_IcePoProtocol *orig_client;
	_IcePaProtocol *accept_client;
    } _IceProtocol;

    typedef struct {
	int in_use;
	int my_opcode;
	_IceProtocol *protocol;
	IcePointer client_data;
	int accept_flag;
	union {
	    IcePaProcessMsgProc accept_client;
	    IcePoProcessMsgProc orig_client;
	} process_msg_proc;
    } _IceProcessMsgInfo;

    typedef struct _IceSavedReplyWait _IceSavedReplyWait;

    typedef struct _IcePingWait _IcePingWait;

    typedef struct {
	int auth_active;
	char my_auth_index;
	IcePointer my_auth_state;
    } _IceConnectToYouInfo;

    typedef struct {
	int my_opcode;
	int my_auth_count;
	int *my_auth_indices;
	int auth_active;
	char my_auth_index;
	IcePointer my_auth_state;
    } _IceProtoSetupToYouInfo;

    typedef struct {
	int his_version_index;
	int my_version_index;
	char *his_vendor;
	char *his_release;
	char my_auth_index;
	IcePointer my_auth_state;
	int must_authenticate;
    } _IceConnectToMeInfo;

    typedef struct {
	int his_opcode;
	int my_opcode;
	int his_version_index;
	int my_version_index;
	char *his_vendor;
	char *his_release;
	char my_auth_index;
	IcePointer my_auth_state;
	int must_authenticate;
    } _IceProtoSetupToMeInfo;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct _XtransConnInfo;

    struct _IceSavedReplyWait {
	IceReplyWaitInfo *reply_wait;
	int reply_ready;
	_IceSavedReplyWait *next;
    };

    struct _IcePingWait {
	IcePingReplyProc ping_reply_proc;
	IcePointer client_data;
	_IcePingWait *next;
    };

    struct _IceConn {
	unsigned int io_ok:1;
	unsigned int swap:1;
	unsigned int waiting_for_byteorder:1;
	unsigned int skip_want_to_close:1;
	unsigned int want_to_close:1;
	unsigned int free_asap:1;
	unsigned int unused1:2;
	unsigned char unused2:8;
	enum IceConnectStatus connection_status;
	unsigned char my_ice_version_index;
	struct _XtransConnInfo *trans_conn;
	long unsigned int send_sequence;
	long unsigned int receive_sequence;
	char *connection_string;
	char *vendor;
	char *release;
	char *inbuf;
	char *inbufptr;
	char *inbufmax;
	char *outbuf;
	char *outbufptr;
	char *outbufmax;
	char *scratch;
	long unsigned int scratch_size;
	int dispatch_level;
	IcePointer context;
	_IceProcessMsgInfo *process_msg_info;
	char his_min_opcode;
	char his_max_opcode;
	unsigned char open_ref_count;
	unsigned char proto_ref_count;
	IceListenObj listen_obj;
	_IceSavedReplyWait *saved_reply_waits;
	_IcePingWait *ping_waits;
	_IceConnectToYouInfo *connect_to_you;
	_IceProtoSetupToYouInfo *protosetup_to_you;
	_IceConnectToMeInfo *connect_to_me;
	_IceProtoSetupToMeInfo *protosetup_to_me;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
