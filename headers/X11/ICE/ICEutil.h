#ifndef _X11_ICE_ICEUTIL_H_
#define _X11_ICE_ICEUTIL_H_

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif





    typedef struct {
	char *protocol_name;
	unsigned short protocol_data_length;
	char *protocol_data;
	char *network_id;
	char *auth_name;
	unsigned short auth_data_length;
	char *auth_data;
    } IceAuthFileEntry;

    typedef struct {
	char *protocol_name;
	char *network_id;
	char *auth_name;
	unsigned short auth_data_length;
	char *auth_data;
    } IceAuthDataEntry;


    extern char *IceAuthFileName(void);
    extern void IceFreeAuthFileEntry(IceAuthFileEntry *);
    extern char *IceGenerateMagicCookie(int);
    extern IceAuthFileEntry *IceGetAuthFileEntry(char *, char *, char *);
    extern int IceLockAuthFile(char *, int, int, long int);
    extern IceAuthFileEntry *IceReadAuthFileEntry(FILE);
    extern void IceSetPaAuthData(int, IceAuthDataEntry *);
    extern void IceUnlockAuthFile(char *);
    extern int IceWriteAuthFileEntry(FILE, IceAuthFileEntry *);
#ifdef __cplusplus
}
#endif
#endif
