#if (__LSB_VERSION__ >= 13 )
#ifndef _SECURITY_PAM_APPL_H_
#define _SECURITY_PAM_APPL_H_

#include <security/_pam_types.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern int pam_acct_mgmt(pam_handle_t *, int);
    extern int pam_authenticate(pam_handle_t *, int);
    extern int pam_chauthtok(pam_handle_t *, int);
    extern int pam_close_session(pam_handle_t *, int);
    extern int pam_end(pam_handle_t *, int);
    extern int pam_open_session(pam_handle_t *, int);
    extern int pam_setcred(pam_handle_t *, int);
    extern int pam_start(const char *, const char *,
			 const struct pam_conv *, pam_handle_t * *);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
