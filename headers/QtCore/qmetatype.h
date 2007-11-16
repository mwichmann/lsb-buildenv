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
Void = 0,	
Bool = 1,	
Int = 2,	
UInt = 3,	
Double = 6,	
QChar = 7,	
QString = 10,	
QByteArray = 12,	
VoidStar = 128,	
Long = 129,	
Short = 130,	
Char = 131,	
ULong = 132,	
UShort = 133,	
UChar = 134,	
Float = 135,	
QObjectStar = 136,	
QWidgetStar = 137,	
User = 256
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
