#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QATOMIC_H_
#define _QTCORE_QATOMIC_H_

class QAtomic;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
struct QBasicAtomic	;

class QAtomic :  
{
private:
public:
};

#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
