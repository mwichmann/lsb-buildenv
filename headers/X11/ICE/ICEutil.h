#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_ICE_ICEUTIL_H_
#define _X11_ICE_ICEUTIL_H_

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define IceAuthLockSuccess	0
#define IceAuthLockError	1
#define IceAuthLockTimeout	2
#endif				/* __LSB_VERSION__ >= 1.2 */



#if __LSB_VERSION__ >= 12
    typedef struct {
	char *protocol_name;
	char *network_id;
	char *auth_name;
	short unsigned int auth_data_length;
	char *auth_data;
    } IceAuthDataEntry;

    typedef struct {
	char *protocol_name;
	short unsigned int protocol_data_length;
	char *protocol_data;
	char *network_id;
	char *auth_name;
	short unsigned int auth_data_length;
	char *auth_data;
    } IceAuthFileEntry;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct {
	char *protocol_name;
	char *network_id;
	char *auth_name;
	short unsigned int auth_data_length;
	char *auth_data;
    };

    struct {
	char *protocol_name;
	short unsigned int protocol_data_length;
	char *protocol_data;
	char *network_id;
	char *auth_name;
	short unsigned int auth_data_length;
	char *auth_data;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern char *IceAuthFileName(void);
    extern void IceFreeAuthFileEntry(IceAuthFileEntry *);
    extern char *IceGenerateMagicCookie(int);
    extern IceAuthFileEntry *IceGetAuthFileEntry(char *, char *, char *);
    extern int IceLockAuthFile(char *, int, int, long int);
    extern IceAuthFileEntry *IceReadAuthFileEntry(FILE *);
    extern void IceSetPaAuthData(int, IceAuthDataEntry *);
    extern void IceUnlockAuthFile(char *);
    extern int IceWriteAuthFileEntry(FILE *, IceAuthFileEntry *);
#endif				/* __LSB_VERSION__ >= 1.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
