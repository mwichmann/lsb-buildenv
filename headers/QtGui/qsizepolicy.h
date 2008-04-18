#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QSIZEPOLICY_H_
#define _QTGUI_QSIZEPOLICY_H_

class QSizePolicy;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef enum Policy	
{
Fixed = 0,	
Minimum = 1,	
MinimumExpanding = 3,	
Maximum = 4,	
Preferred = 5,	
Expanding = 7,	
Ignored = 13
}
SizeType	
;

typedef Orientations	ExpandData	
;

#endif // __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31
class QSizePolicy
{
private:
public:
    QVariant operator QVariant() const;
};

enum SizePolicyMasks	
{
HSize = 4,	
HMask = 15,	
VMask = 240
}
;

enum PolicyFlag	
{
GrowFlag = 1,	
ExpandFlag = 2,	
ShrinkFlag = 4,	
IgnoreFlag = 8
}
;

enum Policy	
{
Fixed = 0,	
Minimum = 1,	
MinimumExpanding = 3,	
Maximum = 4,	
Preferred = 5,	
Expanding = 7,	
Ignored = 13
}
;

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN11QSizePolicy16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
