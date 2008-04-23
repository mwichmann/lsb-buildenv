#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QMAP_H_
#define _QTCORE_QMAP_H_

class QMap < QString, QVariant >;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QMap<int, QVariant>
{
private:
public:
};

class QMap<QString, QVariant>
{
private:
public:
};

struct QMapData	;

struct Node	;

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMapData _ZN8QMapData11shared_nullE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
