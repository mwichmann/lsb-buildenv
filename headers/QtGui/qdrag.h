#ifndef _QTGUI_QDRAG_H_
#define _QTGUI_QDRAG_H_

class QDrag;
// *INDENT-OFF*



class QDrag : public QObject
{
private:
public:
};


extern struct QMetaObject _ZN5QDrag16staticMetaObjectE ;
extern struct QMetaObject _ZNK5QDrag10metaObjectEv(void);
extern void _ZN5QDrag11qt_metacastEPKc(void);
extern int _ZN5QDrag11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QDrag _ZN5QDragC2EP7QWidget(void);
extern QDrag _ZN5QDragC1EP7QWidget(void);
extern QDrag _ZN5QDragD2Ev(void);
extern QDrag _ZN5QDragD1Ev(void);
extern QDrag _ZN5QDragD0Ev(void);
extern void _ZN5QDrag11setMimeDataEP9QMimeData(void);
extern QMimeData _ZNK5QDrag8mimeDataEv(void);
extern void _ZN5QDrag9setPixmapERK7QPixmap(void);
extern  _ZNK5QDrag6pixmapEv(void);
extern void _ZN5QDrag10setHotSpotERK6QPoint(void);
extern QPoint _ZNK5QDrag7hotSpotEv(void);
extern  _ZNK5QDrag6sourceEv(void);
extern  _ZNK5QDrag6targetEv(void);
extern enum N2Qt10DropActionE _ZN5QDrag5startE6QFlagsIN2Qt10DropActionEE(void);
extern void _ZN5QDrag13setDragCursorERK7QPixmapN2Qt10DropActionE(void);
extern void _ZN5QDrag13actionChangedEN2Qt10DropActionE(void);
extern void _ZN5QDrag13targetChangedEP7QWidget(void);
// *INDENT-ON*
#endif
