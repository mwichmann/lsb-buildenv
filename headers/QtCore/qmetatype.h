#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QMETATYPE_H_
#define _QTCORE_QMETATYPE_H_

class QMetaType;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef void	Destructor	
;

typedef void	Constructor	
;

typedef void	SaveOperator	
;

typedef void	LoadOperator	
;

#endif // __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31
class QMetaType
{
private:
public:
    static void registerStreamOperators(char const*, void (*)(QDataStream&, void const*), void (*)(QDataStream&, void*));
    static int registerType(char const*, void (*)(void*), void* (*)(void const*));
    static int type(char const*);
    static const char * typeName(int);
    static bool isRegistered(int);
    static void * construct(int, void const*);
    static void destroy(int, void*);
    static bool save(QDataStream&, int, void const*);
    static bool load(QDataStream&, int, void*);
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

#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
