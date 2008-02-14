#ifndef _QTCORE_QOBJECTDEFS_H_
#define _QTCORE_QOBJECTDEFS_H_

class QGenericReturnArgument;
// *INDENT-OFF*

class QGenericArgument
{
private:
public:
};

class QGenericReturnArgument :  
{
private:
public:
};

struct QMetaObject	;

enum Call	
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
#endif
