#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QMETAOBJECT_H_
#define _QTCORE_QMETAOBJECT_H_

class QMetaProperty;
// *INDENT-OFF*

class QMetaMethod;

enum QMetaMethod::Access	
{
Private = 0,	
Protected = 1,	
Public = 2
}
;

enum QMetaMethod::MethodType	
{
Method = 0,	
Signal = 1,	
Slot = 2
}
;

enum QMetaMethod::Attributes	
{
Compatibility = 1,	
Cloned = 2,	
Scriptable = 4
}
;

class QMetaEnum;

class QMetaProperty;

class QMetaClassInfo;

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
