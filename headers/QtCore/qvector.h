#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QVECTOR_H_
#define _QTCORE_QVECTOR_H_

class QVector < QVariant >;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QVector<QVariant>
{
private:
public:
};

struct QVectorData	;

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QVectorData _ZN11QVectorData11shared_nullE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
