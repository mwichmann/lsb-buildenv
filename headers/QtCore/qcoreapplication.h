#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QCOREAPPLICATION_H_
#define _QTCORE_QCOREAPPLICATION_H_

class QCoreApplication;
// *INDENT-OFF*

typedef bool	QCoreApplication::EventFilter	
;

typedef void	QtCleanUpFunction	
;

class QCoreApplication;

enum _ZN16QCoreApplication8EncodingE	
{
DefaultCodec = 0,	
UnicodeUTF8 = 1
}
;


/* Function prototypes */

extern void _Z15qAddPostRoutinePFvvE(void(*)(void));
extern void _Z18qRemovePostRoutinePFvvE(void(*)(void));
extern QString _Z8qAppNamev(void);
extern struct QMetaObject _ZN16QCoreApplication16staticMetaObjectE;
extern QCoreApplication * _ZN16QCoreApplication4selfE;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
