#if (__LSB_VERSION__ >= 10 )
#ifndef _SYS_UTSNAME_H_
#define _SYS_UTSNAME_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 20
#define SYS_NMLN	65
#endif				// __LSB_VERSION__ >= 2.0



#if __LSB_VERSION__ >= 12
    struct utsname {
	char sysname[65];
	char nodename[65];
	char release[65];
	char version[65];
	char machine[65];
	char domainname[65];
    };

#endif				// __LSB_VERSION__ >= 1.2


// Function prototypes

#if __LSB_VERSION__ >= 10
    extern int uname(struct utsname *);
#endif				// __LSB_VERSION__ >= 1.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
