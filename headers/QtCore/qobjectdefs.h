#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QOBJECTDEFS_H_
#define _QTCORE_QOBJECTDEFS_H_

class QGenericReturnArgument;
// *INDENT-OFF*

class QGenericArgument;

class QGenericReturnArgument;

struct QMetaObject	;

enum QMetaObject::Call	
{
InvokeMetaMethod = 0,	
ReadProperty = 1,	
WriteProperty = 2,	
ResetProperty = 3,	
QueryPropertyDesignable = 4,	
QueryPropertyScriptable = 5,	
QueryPropertyStored = 6,	
QueryPropertyEditable = 7,	
QueryPropertyUser = 8
}
;

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
