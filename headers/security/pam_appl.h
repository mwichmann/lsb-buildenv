#ifndef _SECURITY_PAM_APPL_H_
#define _SECURITY_PAM_APPL_H_


#ifdef __cplusplus
extern "C"
{
#endif







  typedef struct pam_handle pam_handle_t;

  struct pam_message
  {
    int msg_style;
    const char *msg;
  }
   ;

  struct pam_response
  {
    char *resp;
    int resp_retcode;		/* currently un-used, zero expected */
  }
   ;




  struct pam_conv
  {
    int (*conv) (int num_msg, const struct pam_message * *msg,
		 struct pam_response * *resp, void *appdata_ptr);
    void *appdata_ptr;
  }
   ;


/* Valid choices for msg_style*/
#define PAM_PROMPT_ECHO_OFF	1
#define PAM_PROMPT_ECHO_ON	2
#define PAM_ERROR_MSG	3
#define PAM_TEXT_INFO	4



/* Possible Values for Item_type*/
#define PAM_SERVICE	1
#define PAM_USER	2
#define PAM_TTY	3
#define PAM_RHOST	4
#define PAM_CONV	5
#define PAM_RUSER	8
#define PAM_USER_PROMPT	9



/* PAM API Return Values*/
#define PAM_SUCCESS	0
#define PAM_USER_UNKNOWN	10
#define PAM_MAXTRIES	11
#define PAM_ACCT_EXPIRED	13
#define PAM_SESSION_ERR	14
#define PAM_CRED_UNAVAIL	15
#define PAM_CRED_EXPIRED	16
#define PAM_CRED_ERR	17
#define PAM_CONV_ERR	19
#define PAM_AUTHTOK_ERR	20
#define PAM_AUTHTOK_RECOVER_ERR	21
#define PAM_AUTHTOK_LOCK_BUSY	22
#define PAM_AUTHTOK_DISABLE_AGING	23
#define PAM_TRY_AGAIN	24
#define PAM_ABORT	26
#define PAM_AUTHTOKEN_REQD	27
#define PAM_AUTHTOK_EXPIRED	27
#define PAM_BAD_ITEM	29
#define PAM_BUF_ERR	5
#define PAM_PERM_DENIED	6
#define PAM_AUTH_ERR	7
#define PAM_CRED_INSUFFICIENT	8



/* PAM Flags*/
#define PAM_DISALLOW_NULL_AUTHTOK	0x0001U
#define PAM_ESTABLISH_CRED	0x0002U
#define PAM_DELETE_CRED	0x0004U
#define PAM_REINITIALIZE_CRED	0x0008U
#define PAM_REFRESH_CRED	0x0010U
#define PAM_CHANGE_EXPIRED_AUTHTOK	0x0020U
#define PAM_SILENT	0x8000U



  extern int pam_set_item (pam_handle_t *, int, void *);
  extern int pam_get_item (pam_handle_t *, int, void **);
  extern char *pam_strerror (pam_handle_t *, int);
  extern int pam_start (char *, char *, struct pam_conv *, pam_handle_t *);
  extern int pam_end (pam_handle_t *, int);
  extern int pam_authenticate (pam_handle_t *, int);
  extern int pam_setcred (pam_handle_t *, int);
  extern int pam_acct_mgmt (pam_handle_t *, int);
  extern int pam_open_session (pam_handle_t *, int);
  extern int pam_close_session (pam_handle_t *, int);
  extern int pam_set_data (pam_handle_t *, char *, char *,
			   int (*cleanup) (void));
#ifdef __cplusplus
}
#endif
#endif
