#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QDEBUG_H_
#define _QTCORE_QDEBUG_H_

class QDebug;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QDebug
{
private:
public:
};

struct Stream	;

#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
