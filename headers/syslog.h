#ifndef _SYSLOG_H_
#define _SYSLOG_H_








#define LOG_MAIL	(2<<3)






#define LOG_UPTO(pri)	((1 << ((pri)+1)) - 1)
#define LOG_MASK(pri)	(1 << (pri))






void closelog (void);
void openlog (void);
int setlogmask (void);
void syslog (void);
#endif
