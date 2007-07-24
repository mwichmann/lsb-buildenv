#ifndef _QTGUI_QITEMSELECTIONMODEL_H_
#define _QTGUI_QITEMSELECTIONMODEL_H_

#include <QtCore/qlist.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>
#include <QtCore/qdebug.h>
#include <QtCore/qabstractitemmodel.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".." N19QItemSelectionModel14SelectionFlagsE;

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    enum N19QItemSelectionModel13SelectionFlagE {
	NoUpdate,
	Clear,
	Select,
	ClearAndSelect,
	Deselect,
	Toggle,
	Current,
	SelectCurrent,
	ToggleCurrent,
	Rows,
	Columns
    };

    Unknown Type:".Class.";

    Unknown Type:".Class.";


    extern bool _ZNK19QItemSelectionRange10intersectsERKS_(void);
    extern Class _ZNK19QItemSelectionRange9intersectERKS_(void);
    extern QModelIndexList _ZNK19QItemSelectionRange7indexesEv(void);
    extern struct QMetaObject _ZN19QItemSelectionModel16staticMetaObjectE;
    extern struct QMetaObject
	_ZNK19QItemSelectionModel10metaObjectEv(void);
    extern void _ZN19QItemSelectionModel11qt_metacastEPKc(void);
    extern int
	_ZN19QItemSelectionModel11qt_metacallEN11QMetaObject4CallEiPPv
	(void);
    extern Class _ZN19QItemSelectionModelC2EP18QAbstractItemModel(void);
    extern Class _ZN19QItemSelectionModelC1EP18QAbstractItemModel(void);
    extern Class
	_ZN19QItemSelectionModelC2EP18QAbstractItemModelP7QObject(void);
    extern Class
	_ZN19QItemSelectionModelC1EP18QAbstractItemModelP7QObject(void);
    extern Class _ZN19QItemSelectionModelD2Ev(void);
    extern Class _ZN19QItemSelectionModelD1Ev(void);
    extern Class _ZN19QItemSelectionModelD0Ev(void);
    extern Class _ZNK19QItemSelectionModel12currentIndexEv(void);
    extern bool
	_ZNK19QItemSelectionModel10isSelectedERK11QModelIndex(void);
    extern bool
	_ZNK19QItemSelectionModel13isRowSelectedEiRK11QModelIndex(void);
    extern bool
	_ZNK19QItemSelectionModel16isColumnSelectedEiRK11QModelIndex(void);
    extern bool
	_ZNK19QItemSelectionModel22rowIntersectsSelectionEiRK11QModelIndex
	(void);
    extern bool
	_ZNK19QItemSelectionModel25columnIntersectsSelectionEiRK11QModelIndex
	(void);
    extern QModelIndexList
	_ZNK19QItemSelectionModel15selectedIndexesEv(void);
    extern _ZNK19QItemSelectionModel9selectionEv(void);
    extern Class _ZNK19QItemSelectionModel5modelEv(void);
    extern void
	_ZN19QItemSelectionModel15setCurrentIndexERK11QModelIndex6QFlagsINS_13SelectionFlagEE
	(void);
    extern void
	_ZN19QItemSelectionModel6selectERK11QModelIndex6QFlagsINS_13SelectionFlagEE
	(void);
    extern void
	_ZN19QItemSelectionModel6selectERK14QItemSelection6QFlagsINS_13SelectionFlagEE
	(void);
    extern void _ZN19QItemSelectionModel5clearEv(void);
    extern void _ZN19QItemSelectionModel5resetEv(void);
    extern void
	_ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_
	(void);
    extern void
	_ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_(void);
    extern void
	_ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_
	(void);
    extern void
	_ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_
	(void);
    extern Class
	_ZN19QItemSelectionModelC2ER26QItemSelectionModelPrivateP18QAbstractItemModel
	(void);
    extern Class
	_ZN19QItemSelectionModelC1ER26QItemSelectionModelPrivateP18QAbstractItemModel
	(void);
    extern void
	_ZN19QItemSelectionModel20emitSelectionChangedERK14QItemSelectionS2_
	(void);
    extern Class _ZN14QItemSelectionC2ERK11QModelIndexS2_(void);
    extern Class _ZN14QItemSelectionC1ERK11QModelIndexS2_(void);
    extern void _ZN14QItemSelection6selectERK11QModelIndexS2_(void);
    extern bool _ZNK14QItemSelection8containsERK11QModelIndex(void);
    extern QModelIndexList _ZNK14QItemSelection7indexesEv(void);
    extern void
	_ZN14QItemSelection5mergeERKS_6QFlagsIN19QItemSelectionModel13SelectionFlagEE
	(void);
    extern void
	_ZN14QItemSelection5splitERK19QItemSelectionRangeS2_PS_(void);
    extern Class _Zls6QDebugRK19QItemSelectionRange(void);
#ifdef __cplusplus
}
#endif
#endif
