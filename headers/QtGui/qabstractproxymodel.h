#ifndef _QTGUI_QABSTRACTPROXYMODEL_H_
#define _QTGUI_QABSTRACTPROXYMODEL_H_

#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtGui/qitemselectionmodel.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";


    extern struct QMetaObject _ZN19QAbstractProxyModel16staticMetaObjectE;
    extern struct QMetaObject
	_ZNK19QAbstractProxyModel10metaObjectEv(void);
    extern void _ZN19QAbstractProxyModel11qt_metacastEPKc(void);
    extern int
	_ZN19QAbstractProxyModel11qt_metacallEN11QMetaObject4CallEiPPv
	(void);
    extern Class _ZN19QAbstractProxyModelC2EP7QObject(void);
    extern Class _ZN19QAbstractProxyModelC1EP7QObject(void);
    extern Class _ZN19QAbstractProxyModelD2Ev(void);
    extern Class _ZN19QAbstractProxyModelD1Ev(void);
    extern Class _ZN19QAbstractProxyModelD0Ev(void);
    extern void
	_ZN19QAbstractProxyModel14setSourceModelEP18QAbstractItemModel
	(void);
    extern Class _ZNK19QAbstractProxyModel11sourceModelEv(void);
    extern Class
	_ZNK19QAbstractProxyModel20mapSelectionToSourceERK14QItemSelection
	(void);
    extern Class
	_ZNK19QAbstractProxyModel22mapSelectionFromSourceERK14QItemSelection
	(void);
    extern bool _ZN19QAbstractProxyModel6submitEv(void);
    extern void _ZN19QAbstractProxyModel6revertEv(void);
    extern Class
	_ZN19QAbstractProxyModelC2ER26QAbstractProxyModelPrivateP7QObject
	(void);
    extern Class
	_ZN19QAbstractProxyModelC1ER26QAbstractProxyModelPrivateP7QObject
	(void);
#ifdef __cplusplus
}
#endif
#endif
