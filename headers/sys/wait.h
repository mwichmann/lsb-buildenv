#if (__LSB_VERSION__ >= 10 )
#ifndef _SYS_WAIT_H_
#define _SYS_WAIT_H_

#include <signal.h>
#include <sys/types.h>
#include <sys/resource.h>
#include <sys/time.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#define WIFSIGNALED(status)	(!WIFSTOPPED(status) && !WIFEXITED(status))
#define WIFSTOPPED(status)	(((status) & 0xff) == 0x7f)
#define WEXITSTATUS(status)	(((status) & 0xff00) >> 8)
#define WTERMSIG(status)	((status) & 0x7f)
#define WCOREDUMP(status)	((status) & 0x80)
#define WIFEXITED(status)	(WTERMSIG(status) == 0)
#define WNOHANG	0x00000001
#define WUNTRACED	0x00000002
#define WCOREFLAG	0x80
#define WSTOPSIG(status)	WEXITSTATUS(status)
#endif				/* __LSB_VERSION__ >= 1.1 */



#if __LSB_VERSION__ >= 10
    typedef enum {
	P_ALL,
	P_PID,
	P_PGID
    } idtype_t;

#endif				/* __LSB_VERSION__ >= 1.0 */


/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern pid_t wait(int *);
    extern pid_t wait4(pid_t, int *, int, struct rusage *);
    extern pid_t waitpid(pid_t, int *, int);
#if __LSB_VERSION__ < 20
    extern int waitid(idtype_t, id_t, siginfo_t *, int);
#endif				/* __LSB_VERSION__ < 2.0 */

#if __LSB_VERSION__ < 30
#if defined __i386__
/* IA32 */
    extern pid_t wait3(int *, int, struct rusage *);
#endif
    extern pid_t wait3(int *, int, struct rusage *);
#endif				/* __LSB_VERSION__ < 3.0 */

#endif				/* __LSB_VERSION__ >= 1.0 */

#if __LSB_VERSION__ >= 12
#if __LSB_VERSION__ < 30
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    extern pid_t wait3(int *, int, struct rusage *);
#endif
#endif				/* __LSB_VERSION__ < 3.0 */

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#if __LSB_VERSION__ < 30
#if defined __s390__ && !defined __s390x__
/* S390 */
    extern pid_t wait3(int *, int, struct rusage *);
#endif
#if defined __ia64__
/* IA64 */
    extern pid_t wait3(int *, int, struct rusage *);
#endif
#if defined __s390x__
/* S390X */
    extern pid_t wait3(int *, int, struct rusage *);
#endif
#endif				/* __LSB_VERSION__ < 3.0 */

#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#if __LSB_VERSION__ < 30
#if defined __x86_64__
/* x86-64 */
    extern pid_t wait3(int *, int, struct rusage *);
#endif
#if defined __powerpc64__
/* PPC64 */
    extern pid_t wait3(int *, int, struct rusage *);
#endif
#endif				/* __LSB_VERSION__ < 3.0 */

#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 32
    extern int waitid(idtype_t, id_t, siginfo_t *, int);
#endif				/* __LSB_VERSION__ >= 3.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
