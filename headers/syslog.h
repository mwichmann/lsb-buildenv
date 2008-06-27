#if (__LSB_VERSION__ >= 12 )
#ifndef _SYSLOG_H_
#define _SYSLOG_H_

#include <stdarg.h>

#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && (__GNUC__ - 0 > 3 || (__GNUC__ - 0 == 3 && __GNUC_MINOR__ - 0 >= 2))
#define LSB_DECL_DEPRECATED __attribute__ ((__deprecated__))
#else
#define LSB_DECL_DEPRECATED
#endif

#ifdef __cplusplus
extern "C" {
#endif



/* priorities (these are ordered)*/
#if __LSB_VERSION__ >= 12
#define LOG_EMERG	0	/* system is unusable */
#define LOG_ALERT	1	/* action must be taken immediately */
#define LOG_CRIT	2	/* critical conditions */
#define LOG_ERR	3		/* error conditions */
#define LOG_WARNING	4	/* warning conditions */
#define LOG_NOTICE	5	/* normal but significant condition */
#define LOG_INFO	6	/* informational */
#define LOG_DEBUG	7	/* debug-level messages */
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 20
#define LOG_MAKEPRI(fac, pri)	(((fac) << 3) | (pri))
#define LOG_PRI(p)	((p) & LOG_PRIMASK)	/* extract priority */
#define LOG_PRIMASK	0x07	/* mask to extract priority part */
#endif				/* __LSB_VERSION__ >= 2.0 */




/* facility codes*/
#if __LSB_VERSION__ >= 12
#define LOG_KERN	(0<<3)	/* kernel messages */
#define LOG_AUTHPRIV	(10<<3)	/* security/authorization messages (private) */
#define LOG_FTP	(11<<3)		/* ftp daemon */
#define LOG_USER	(1<<3)	/* random user-level messages */
#define LOG_MAIL	(2<<3)	/* mail system */
#define LOG_DAEMON	(3<<3)	/* system daemons */
#define LOG_AUTH	(4<<3)	/* security/authorization messages */
#define LOG_SYSLOG	(5<<3)	/* messages generated internally by syslogd */
#define LOG_LPR	(6<<3)		/* line printer subsystem */
#define LOG_NEWS	(7<<3)	/* network news subsystem */
#define LOG_UUCP	(8<<3)	/* UUCP subsystem */
#define LOG_CRON	(9<<3)	/* clock daemon */
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 20
#define LOG_FAC(p)	(((p) & LOG_FACMASK) >> 3)	/* facility of pri */
#define LOG_FACMASK	0x03f8	/* mask to extract facility part */
#endif				/* __LSB_VERSION__ >= 2.0 */




/* other codes through 15 reserved for system use*/
#if __LSB_VERSION__ >= 12
#define LOG_LOCAL0	(16<<3)	/* reserved for local use */
#define LOG_LOCAL1	(17<<3)	/* reserved for local use */
#define LOG_LOCAL2	(18<<3)	/* reserved for local use */
#define LOG_LOCAL3	(19<<3)	/* reserved for local use */
#define LOG_LOCAL4	(20<<3)	/* reserved for local use */
#define LOG_LOCAL5	(21<<3)	/* reserved for local use */
#define LOG_LOCAL6	(22<<3)	/* reserved for local use */
#define LOG_LOCAL7	(23<<3)	/* reserved for local use */
#endif				/* __LSB_VERSION__ >= 1.2 */




/* arguments to setlogmask.*/
#if __LSB_VERSION__ >= 12
#define LOG_UPTO(pri)	((1 << ((pri)+1)) - 1)	/* all priorities through pri */
#define LOG_MASK(pri)	(1 << (pri))	/* mask for one priority */
#endif				/* __LSB_VERSION__ >= 1.2 */




/* Option flags for openlog.*/
#if __LSB_VERSION__ >= 12
#define LOG_PID	0x01		/* log the pid with each message */
#define LOG_CONS	0x02	/* log on the console if errors in sending */
#define LOG_ODELAY	0x04	/* delay open until first syslog() (default) */
#define LOG_NDELAY	0x08	/* don't delay open */
#define LOG_NOWAIT	0x10	/* don't wait for console forks: DEPRECATED */
#define LOG_PERROR	0x20	/* log to stderr as well */
#endif				/* __LSB_VERSION__ >= 1.2 */




/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern void closelog(void);
    extern void openlog(const char *, int, int);
    extern void syslog(int, const char *, ...);
#endif				/* __LSB_VERSION__ >= 1.0 */

#if __LSB_VERSION__ >= 11
    extern int setlogmask(int);
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 12
    extern void vsyslog(int, const char *, va_list);
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 40
    extern void __syslog_chk(int, int, const char *, ...);
    extern void __vsyslog_chk(int, int, const char *, va_list);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
