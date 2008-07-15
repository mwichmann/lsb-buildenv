#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QMAP_H_
#define _QTCORE_QMAP_H_

class QMap < QString, QVariant >;
// *INDENT-OFF*

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


/* Function prototypes */

extern struct QMapData _ZN8QMapData11shared_nullE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
