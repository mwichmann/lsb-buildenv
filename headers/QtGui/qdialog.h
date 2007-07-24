#ifndef _QTGUI_QDIALOG_H_
#define _QTGUI_QDIALOG_H_

#include <QtCore/qnamespace.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>
#include <QtCore/qsize.h>
#include <QtGui/qwidget.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N7QDialog10DialogCodeE {
	Rejected,
	Accepted
    };


    extern struct QMetaObject _ZN7QDialog16staticMetaObjectE;
    extern struct QMetaObject _ZNK7QDialog10metaObjectEv(void);
    extern void _ZN7QDialog11qt_metacastEPKc(void);
    extern int _ZN7QDialog11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN7QDialogC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(void);
    extern Class _ZN7QDialogC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(void);
    extern Class
	_ZN7QDialogC2EP7QWidgetPKcb6QFlagsIN2Qt10WindowTypeEE(void);
    extern Class
	_ZN7QDialogC1EP7QWidgetPKcb6QFlagsIN2Qt10WindowTypeEE(void);
    extern Class _ZN7QDialogD2Ev(void);
    extern Class _ZN7QDialogD1Ev(void);
    extern Class _ZN7QDialogD0Ev(void);
    extern int _ZNK7QDialog6resultEv(void);
    extern void _ZN7QDialog10setVisibleEb(void);
    extern void _ZN7QDialog14setOrientationEN2Qt11OrientationE(void);
    extern enum N2Qt11OrientationE _ZNK7QDialog11orientationEv(void);
    extern void _ZN7QDialog12setExtensionEP7QWidget(void);
    extern Class _ZNK7QDialog9extensionEv(void);
    extern Class _ZNK7QDialog8sizeHintEv(void);
    extern Class _ZNK7QDialog15minimumSizeHintEv(void);
    extern void _ZN7QDialog18setSizeGripEnabledEb(void);
    extern bool _ZNK7QDialog17isSizeGripEnabledEv(void);
    extern void _ZN7QDialog8setModalEb(void);
    extern void _ZN7QDialog9setResultEi(void);
    extern void _ZN7QDialog8finishedEi(void);
    extern void _ZN7QDialog8acceptedEv(void);
    extern void _ZN7QDialog8rejectedEv(void);
    extern int _ZN7QDialog4execEv(void);
    extern void _ZN7QDialog4doneEi(void);
    extern void _ZN7QDialog6acceptEv(void);
    extern void _ZN7QDialog6rejectEv(void);
    extern void _ZN7QDialog13showExtensionEb(void);
    extern Class
	_ZN7QDialogC2ER14QDialogPrivateP7QWidget6QFlagsIN2Qt10WindowTypeEE
	(void);
    extern Class
	_ZN7QDialogC1ER14QDialogPrivateP7QWidget6QFlagsIN2Qt10WindowTypeEE
	(void);
    extern void _ZN7QDialog13keyPressEventEP9QKeyEvent(void);
    extern void _ZN7QDialog10closeEventEP11QCloseEvent(void);
    extern void _ZN7QDialog9showEventEP10QShowEvent(void);
    extern void _ZN7QDialog11resizeEventEP12QResizeEvent(void);
    extern void _ZN7QDialog16contextMenuEventEP17QContextMenuEvent(void);
    extern bool _ZN7QDialog11eventFilterEP7QObjectP6QEvent(void);
    extern void _ZN7QDialog14adjustPositionEP7QWidget(void);
#ifdef __cplusplus
}
#endif
#endif
