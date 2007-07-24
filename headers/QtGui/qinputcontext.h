#ifndef _QTGUI_QINPUTCONTEXT_H_
#define _QTGUI_QINPUTCONTEXT_H_

#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>
#include <QtGui/qfont.h>
#include <QtGui/qtextformat.h>
#include <QtGui/qwidget.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N13QInputContext14StandardFormatE {
	PreeditFormat,
	SelectionFormat
    };


    extern struct QMetaObject _ZN13QInputContext16staticMetaObjectE;
    extern struct QMetaObject _ZNK13QInputContext10metaObjectEv(void);
    extern void _ZN13QInputContext11qt_metacastEPKc(void);
    extern int
	_ZN13QInputContext11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN13QInputContextC2EP7QObject(void);
    extern Class _ZN13QInputContextC1EP7QObject(void);
    extern Class _ZN13QInputContextD2Ev(void);
    extern Class _ZN13QInputContextD1Ev(void);
    extern Class _ZN13QInputContextD0Ev(void);
    extern void _ZN13QInputContext6updateEv(void);
    extern void _ZN13QInputContext12mouseHandlerEiP11QMouseEvent(void);
    extern Class _ZNK13QInputContext4fontEv(void);
    extern Class _ZNK13QInputContext11focusWidgetEv(void);
    extern void _ZN13QInputContext14setFocusWidgetEP7QWidget(void);
    extern void _ZN13QInputContext15widgetDestroyedEP7QWidget(void);
    extern _ZN13QInputContext7actionsEv(void);
    extern bool
	_ZN13QInputContext14x11FilterEventEP7QWidgetP7_XEvent(void);
    extern bool _ZN13QInputContext11filterEventEPK6QEvent(void);
    extern void _ZN13QInputContext9sendEventERK17QInputMethodEvent(void);
    extern Class
	_ZNK13QInputContext14standardFormatENS_14StandardFormatE(void);
#ifdef __cplusplus
}
#endif
#endif
