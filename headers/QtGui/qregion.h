#ifndef _QTGUI_QREGION_H_
#define _QTGUI_QREGION_H_

class QRegion;
// *INDENT-OFF*




class QRegion
{
private:
public:
};

enum RegionType	
{
Rectangle = 0,	
Ellipse = 1
}
;

struct QRegionData	;


extern QRegion _ZN7QRegionC2Ev(void);
extern QRegion _ZN7QRegionC1Ev(void);
extern QRegion _ZN7QRegionC2EiiiiNS_10RegionTypeE(void);
extern QRegion _ZN7QRegionC1EiiiiNS_10RegionTypeE(void);
extern QRegion _ZN7QRegionC2ERK5QRectNS_10RegionTypeE(void);
extern QRegion _ZN7QRegionC1ERK5QRectNS_10RegionTypeE(void);
extern QRegion _ZN7QRegionC2ERK8QPolygonN2Qt8FillRuleE(void);
extern QRegion _ZN7QRegionC1ERK8QPolygonN2Qt8FillRuleE(void);
extern QRegion _ZN7QRegionC2ERK8QPolygonb(void);
extern QRegion _ZN7QRegionC1ERK8QPolygonb(void);
extern QRegion _ZN7QRegionC2ERKS_(void);
extern QRegion _ZN7QRegionC1ERKS_(void);
extern QRegion _ZN7QRegionC2ERK7QBitmap(void);
extern QRegion _ZN7QRegionC1ERK7QBitmap(void);
extern  _ZN7QRegionD2Ev(void);
extern  _ZN7QRegionD1Ev(void);
extern QRegion _ZN7QRegionaSERKS_(void);
extern bool _ZNK7QRegion7isEmptyEv(void);
extern bool _ZNK7QRegion8containsERK6QPoint(void);
extern bool _ZNK7QRegion8containsERK5QRect(void);
extern void _ZN7QRegion9translateEii(void);
extern QRegion _ZNK7QRegion10translatedEii(void);
extern QRegion _ZNK7QRegion5uniteERKS_(void);
extern QRegion _ZNK7QRegion9intersectERKS_(void);
extern QRegion _ZNK7QRegion8subtractERKS_(void);
extern QRegion _ZNK7QRegion3eorERKS_(void);
extern QRect _ZNK7QRegion12boundingRectEv(void);
extern  _ZNK7QRegion5rectsEv(void);
extern void _ZN7QRegion8setRectsEPK5QRecti(void);
extern QRegion _ZNK7QRegionorERKS_(void);
extern QRegion _ZNK7QRegionplERKS_(void);
extern QRegion _ZNK7QRegionanERKS_(void);
extern QRegion _ZNK7QRegionmiERKS_(void);
extern QRegion _ZNK7QRegioneoERKS_(void);
extern QRegion _ZN7QRegionoRERKS_(void);
extern QRegion _ZN7QRegionpLERKS_(void);
extern QRegion _ZN7QRegionaNERKS_(void);
extern QRegion _ZN7QRegionmIERKS_(void);
extern QRegion _ZN7QRegioneOERKS_(void);
extern bool _ZNK7QRegioneqERKS_(void);
extern QRegion _ZNK7QRegioncv8QVariantEv(void);
extern QDataStream _ZlsR11QDataStreamRK7QRegion(void);
extern QDataStream _ZrsR11QDataStreamR7QRegion(void);
extern QDebug _Zls6QDebugRK7QRegion(void);
// *INDENT-ON*
#endif
