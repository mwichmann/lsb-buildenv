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


extern struct QMapData _ZN8QMapData10createDataEv(void);
extern void _ZN8QMapData16continueFreeDataEi(void);
extern struct Node _ZN8QMapData11node_createEPPNS_4NodeEi(void);
extern void _ZN8QMapData11node_deleteEPPNS_4NodeEiS1_(void);
extern struct QMapData _ZN8QMapData11shared_nullE ;
// *INDENT-ON*
#endif
