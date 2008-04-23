#if (__LSB_VERSION__ >= 10 )
#ifndef _DLFCN_H_
#define _DLFCN_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#define RTLD_LOCAL	0
#define RTLD_LAZY	0x00001
#define RTLD_NOW	0x00002
#define RTLD_GLOBAL	0x00100
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 20
#define RTLD_NEXT	((void *) -1l)
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 32
#define RTLD_DEFAULT	((void *) 0)
#endif				/* __LSB_VERSION__ >= 3.2 */



#if __LSB_VERSION__ >= 12
    typedef struct {
	char *dli_fname;
	void *dli_fbase;
	char *dli_sname;
	void *dli_saddr;
    } Dl_info;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern int dladdr(const void *, Dl_info *);
    extern int dlclose(void *);
    extern char *dlerror(void);
    extern void *dlopen(const char *, int);
    extern void *dlsym(void *, const char *);
#endif				/* __LSB_VERSION__ >= 1.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
