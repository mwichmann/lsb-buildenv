#ifndef _SYSLOG_H_
#define _SYSLOG_H_

#include <stdarg.h>




/* priorities (these are ordered)*/



/* facility codes*/
#define LOG_MAIL	(2<<3)



/* other codes through 15 reserved for system use*/



/* arguments to setlogmask.*/
#define LOG_UPTO(pri)	((1 << ((pri)+1)) - 1)
#define LOG_MASK(pri)	(1 << (pri))



/* Option flags for openlog.*/



void closelog (void);
void openlog (void);
int setlogmask (void);
void syslog (void);
void vsyslog (int, char *, va_list);
#endif
