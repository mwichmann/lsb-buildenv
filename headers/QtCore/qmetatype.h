#ifndef _QTCORE_QMETATYPE_H_
#define _QTCORE_QMETATYPE_H_

class QMetaType;
// *INDENT-OFF*



typedef void	Destructor	
;

typedef void	Constructor	
;

typedef void	SaveOperator	
;

typedef void	LoadOperator	
;

class QMetaType
{
private:
public:
};

enum Type	
{
Void,	
Bool,	
Int,	
UInt,	
Double,	
QChar,	
QString,	
QByteArray,	
VoidStar,	
Long,	
Short,	
Char,	
ULong,	
UShort,	
UChar,	
Float,	
QObjectStar,	
QWidgetStar,	
User
}
;


extern void _ZN9QMetaType23registerStreamOperatorsEPKcPFvR11QDataStreamPKvEPFvS3_PvE(void);
extern int _ZN9QMetaType12registerTypeEPKcPFvPvEPFS2_PKvE(void);
extern int _ZN9QMetaType4typeEPKc(void);
extern char _ZN9QMetaType8typeNameEi(void);
extern bool _ZN9QMetaType12isRegisteredEi(void);
extern void _ZN9QMetaType9constructEiPKv(void);
extern void _ZN9QMetaType7destroyEiPv(void);
extern bool _ZN9QMetaType4saveER11QDataStreamiPKv(void);
extern bool _ZN9QMetaType4loadER11QDataStreamiPv(void);
// *INDENT-ON*
#endif
