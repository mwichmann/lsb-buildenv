#if (__LSB_VERSION__ >= 50 )
#ifndef _SECURITY_PAM_MODULES_H_
#define _SECURITY_PAM_MODULES_H_

#include <security/_pam_types.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern int pam_get_data(const pam_handle_t *, const char *,
			    const void **);
    extern int pam_get_user(pam_handle_t *, const char **, const char *);
    extern int pam_set_data(pam_handle_t *, const char *, void *,
			    void (*)(pam_handle_t *, void *, int));
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
