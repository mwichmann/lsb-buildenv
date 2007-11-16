#ifndef _QTGUI_QINPUTCONTEXT_H_
#define _QTGUI_QINPUTCONTEXT_H_

class QInputContext;
// *INDENT-OFF*




class QInputContext : public QObject
{
private:
public:
};

enum StandardFormat	
{
PreeditFormat = 0,	
SelectionFormat = 1
}
;


extern struct QMetaObject _ZN13QInputContext16staticMetaObjectE ;
extern struct QMetaObject _ZNK13QInputContext10metaObjectEv(void);
extern void _ZN13QInputContext11qt_metacastEPKc(void);
extern int _ZN13QInputContext11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QInputContext _ZN13QInputContextC2EP7QObject(void);
extern QInputContext _ZN13QInputContextC1EP7QObject(void);
extern QInputContext _ZN13QInputContextD2Ev(void);
extern QInputContext _ZN13QInputContextD1Ev(void);
extern QInputContext _ZN13QInputContextD0Ev(void);
extern void _ZN13QInputContext6updateEv(void);
extern void _ZN13QInputContext12mouseHandlerEiP11QMouseEvent(void);
extern QFont _ZNK13QInputContext4fontEv(void);
extern QWidget _ZNK13QInputContext11focusWidgetEv(void);
extern void _ZN13QInputContext14setFocusWidgetEP7QWidget(void);
extern void _ZN13QInputContext15widgetDestroyedEP7QWidget(void);
extern  _ZN13QInputContext7actionsEv(void);
extern bool _ZN13QInputContext14x11FilterEventEP7QWidgetP7_XEvent(void);
extern bool _ZN13QInputContext11filterEventEPK6QEvent(void);
extern void _ZN13QInputContext9sendEventERK17QInputMethodEvent(void);
extern QTextFormat _ZNK13QInputContext14standardFormatENS_14StandardFormatE(void);
// *INDENT-ON*
#endif
