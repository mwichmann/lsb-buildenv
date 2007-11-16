#ifndef _QTGUI_QLAYOUTITEM_H_
#define _QTGUI_QLAYOUTITEM_H_

class QLayoutItem;
// *INDENT-OFF*




class QLayoutItem
{
private:
public:
};

class QSpacerItem : public QLayoutItem
{
private:
public:
};

class QWidgetItem : public QLayoutItem
{
private:
public:
};


extern QLayoutItem _ZN11QLayoutItemD2Ev(void);
extern QLayoutItem _ZN11QLayoutItemD1Ev(void);
extern QLayoutItem _ZN11QLayoutItemD0Ev(void);
extern bool _ZNK11QLayoutItem17hasHeightForWidthEv(void);
extern int _ZNK11QLayoutItem14heightForWidthEi(void);
extern int _ZNK11QLayoutItem21minimumHeightForWidthEi(void);
extern void _ZN11QLayoutItem10invalidateEv(void);
extern QWidget _ZN11QLayoutItem6widgetEv(void);
extern  _ZN11QLayoutItem6layoutEv(void);
extern  _ZN11QLayoutItem10spacerItemEv(void);
extern void _ZN11QLayoutItem12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void);
extern  _ZN11QSpacerItemD0Ev(void);
extern  _ZN11QSpacerItemD1Ev(void);
extern void _ZN11QSpacerItem10changeSizeEiiN11QSizePolicy6PolicyES1_(void);
extern QSize _ZNK11QSpacerItem8sizeHintEv(void);
extern QSize _ZNK11QSpacerItem11minimumSizeEv(void);
extern QSize _ZNK11QSpacerItem11maximumSizeEv(void);
extern N2Qt12OrientationsE _ZNK11QSpacerItem19expandingDirectionsEv(void);
extern bool _ZNK11QSpacerItem7isEmptyEv(void);
extern void _ZN11QSpacerItem11setGeometryERK5QRect(void);
extern QRect _ZNK11QSpacerItem8geometryEv(void);
extern QSpacerItem _ZN11QSpacerItem10spacerItemEv(void);
extern  _ZN11QWidgetItemD0Ev(void);
extern  _ZN11QWidgetItemD1Ev(void);
extern QSize _ZNK11QWidgetItem8sizeHintEv(void);
extern QSize _ZNK11QWidgetItem11minimumSizeEv(void);
extern QSize _ZNK11QWidgetItem11maximumSizeEv(void);
extern N2Qt12OrientationsE _ZNK11QWidgetItem19expandingDirectionsEv(void);
extern bool _ZNK11QWidgetItem7isEmptyEv(void);
extern void _ZN11QWidgetItem11setGeometryERK5QRect(void);
extern QRect _ZNK11QWidgetItem8geometryEv(void);
extern QWidget _ZN11QWidgetItem6widgetEv(void);
extern bool _ZNK11QWidgetItem17hasHeightForWidthEv(void);
extern int _ZNK11QWidgetItem14heightForWidthEi(void);
// *INDENT-ON*
#endif
