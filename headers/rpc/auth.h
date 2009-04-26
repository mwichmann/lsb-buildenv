#if (__LSB_VERSION__ >= 11 )
#ifndef _RPC_AUTH_H_
#define _RPC_AUTH_H_

#include <sys/types.h>
#include <rpc/xdr.h>
#include <rpc/types.h>

#if !defined(LSB_DECL_DEPRECATED)
#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && (__GNUC__ - 0 > 3 || (__GNUC__ - 0 == 3 && __GNUC_MINOR__ - 0 >= 2))
#define LSB_DECL_DEPRECATED __attribute__ ((__deprecated__))
#else
#define LSB_DECL_DEPRECATED
#endif
#endif				/* LSB_DECL_DEPRECATED */

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
#define auth_destroy(auth)	((*((auth)->ah_ops->ah_destroy))(auth))
#endif				/* __LSB_VERSION__ >= 3.2 */




/* Status returned from authentication check*/
#if __LSB_VERSION__ >= 13
    enum auth_stat {
	AUTH_OK = 0,
	AUTH_BADCRED = 1,	/* bogus credentials (seal broken) */
	AUTH_REJECTEDCRED = 2,	/* client should begin new session */
	AUTH_BADVERF = 3,	/* bogus verifier (seal broken) */
	AUTH_REJECTEDVERF = 4,	/* verifier expired or was replayed */
	AUTH_TOOWEAK = 5,	/* Rpc calls return an enum clnt_stat. */
	AUTH_INVALIDRESP = 6,	/* bogus response verifier */
	AUTH_FAILED = 7		/* some unknown reason */
    };

#endif				/* __LSB_VERSION__ >= 1.3 */


#if __LSB_VERSION__ >= 13
    union des_block {
	struct {
	    u_int32_t high;
	    u_int32_t low;
	} key;
	char c[8];
    };

#endif				/* __LSB_VERSION__ >= 1.3 */


/* Authentication info.  Opaque to client.opaque_auth*/
#if __LSB_VERSION__ >= 13
    struct opaque_auth {
	enum_t oa_flavor;	/* flavor of auth */
	caddr_t oa_base;	/* address of more auth stuff */
	u_int oa_length;	/* not to exceed MAX_AUTH_BYTES */
    };

#endif				/* __LSB_VERSION__ >= 1.3 */


/* Auth handle, interface to client side authenticators.*/
#if __LSB_VERSION__ >= 13
    typedef struct AUTH AUTH;

#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 13
    struct AUTH {
	struct opaque_auth ah_cred;
	struct opaque_auth ah_verf;
	union des_block ah_key;
	struct auth_ops *ah_ops;
	caddr_t ah_private;
    };

#endif				/* __LSB_VERSION__ >= 1.3 */


#if __LSB_VERSION__ >= 13
    struct auth_ops {
	void (*ah_nextverf) (struct AUTH *);
	int (*ah_marshal) (struct AUTH *, XDR *);	/* nextverf & serialize */
	int (*ah_validate) (struct AUTH *, struct opaque_auth *);	/* validate verifier */
	int (*ah_refresh) (struct AUTH *);	/* refresh credentials */
	void (*ah_destroy) (struct AUTH *);	/* Rpc calls return an enum clnt_stat. */
    };

#endif				/* __LSB_VERSION__ >= 1.3 */


/* Function prototypes */

    extern struct AUTH *authnone_create(void);
    /* This function was supposed to be used within the RPC's secure authentication mechanism. There should be no need for user programs to use this functions. Note also that this routine was a part of the Linux/Doors-project, abandoned by now. */
    extern int key_decryptsession(char *,
				  union des_block *) LSB_DECL_DEPRECATED;
    extern bool_t xdr_opaque_auth(XDR *, struct opaque_auth *);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
