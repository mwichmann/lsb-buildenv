#ifndef _SECURITY_PAM_APPL_H_
#define _SECURITY_PAM_APPL_H_


#ifdef __cplusplus
extern "C"
{
#endif







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


/* Possible Values for Item_type*/
#define PAM_SERVICE	1
#define PAM_USER	2
#define PAM_TTY	3
#define PAM_RHOST	4
#define PAM_CONV	5



  extern int pam_set_item (pam_handle_t *, int, void *);
  extern int pam_get_item (pam_handle_t *, int, void **);
  extern char *pam_strerror (int);
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
