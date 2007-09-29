#ifndef _QTGUI_QITEMSELECTIONMODEL_H_
#define _QTGUI_QITEMSELECTIONMODEL_H_

class QItemSelectionRange;
// *INDENT-OFF*



typedef SelectionFlags	
;

class QItemSelectionRange
{
private:
public:
};

class QItemSelectionModel : public QObject
{
private:
public:
};

enum SelectionFlag	
{
NoUpdate = 0,	
Clear = 1,	
Select = 2,	
ClearAndSelect = 3,	
Deselect = 4,	
Toggle = 8,	
Current = 16,	
SelectCurrent = 18,	
ToggleCurrent = 24,	
Rows = 32,	
Columns = 64
}
;

class QFlags<QItemSelectionModel::SelectionFlag>
{
private:
public:
};

class QItemSelection
{
private:
public:
};


extern bool _ZNK19QItemSelectionRange10intersectsERKS_(void);
extern QItemSelectionRange _ZNK19QItemSelectionRange9intersectERKS_(void);
extern QModelIndexList _ZNK19QItemSelectionRange7indexesEv(void);
extern struct QMetaObject _ZN19QItemSelectionModel16staticMetaObjectE ;
extern struct QMetaObject _ZNK19QItemSelectionModel10metaObjectEv(void);
extern void _ZN19QItemSelectionModel11qt_metacastEPKc(void);
extern int _ZN19QItemSelectionModel11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QItemSelectionModel _ZN19QItemSelectionModelC2EP18QAbstractItemModel(void);
extern QItemSelectionModel _ZN19QItemSelectionModelC1EP18QAbstractItemModel(void);
extern QItemSelectionModel _ZN19QItemSelectionModelC2EP18QAbstractItemModelP7QObject(void);
extern QItemSelectionModel _ZN19QItemSelectionModelC1EP18QAbstractItemModelP7QObject(void);
extern QItemSelectionModel _ZN19QItemSelectionModelD2Ev(void);
extern QItemSelectionModel _ZN19QItemSelectionModelD1Ev(void);
extern QItemSelectionModel _ZN19QItemSelectionModelD0Ev(void);
extern QModelIndex _ZNK19QItemSelectionModel12currentIndexEv(void);
extern bool _ZNK19QItemSelectionModel10isSelectedERK11QModelIndex(void);
extern bool _ZNK19QItemSelectionModel13isRowSelectedEiRK11QModelIndex(void);
extern bool _ZNK19QItemSelectionModel16isColumnSelectedEiRK11QModelIndex(void);
extern bool _ZNK19QItemSelectionModel22rowIntersectsSelectionEiRK11QModelIndex(void);
extern bool _ZNK19QItemSelectionModel25columnIntersectsSelectionEiRK11QModelIndex(void);
extern QModelIndexList _ZNK19QItemSelectionModel15selectedIndexesEv(void);
extern  _ZNK19QItemSelectionModel9selectionEv(void);
extern QAbstractItemModel _ZNK19QItemSelectionModel5modelEv(void);
extern void _ZN19QItemSelectionModel15setCurrentIndexERK11QModelIndex6QFlagsINS_13SelectionFlagEE(void);
extern void _ZN19QItemSelectionModel6selectERK11QModelIndex6QFlagsINS_13SelectionFlagEE(void);
extern void _ZN19QItemSelectionModel6selectERK14QItemSelection6QFlagsINS_13SelectionFlagEE(void);
extern void _ZN19QItemSelectionModel5clearEv(void);
extern void _ZN19QItemSelectionModel5resetEv(void);
extern void _ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_(void);
extern void _ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_(void);
extern void _ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_(void);
extern void _ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_(void);
extern QItemSelectionModel _ZN19QItemSelectionModelC2ER26QItemSelectionModelPrivateP18QAbstractItemModel(void);
extern QItemSelectionModel _ZN19QItemSelectionModelC1ER26QItemSelectionModelPrivateP18QAbstractItemModel(void);
extern void _ZN19QItemSelectionModel20emitSelectionChangedERK14QItemSelectionS2_(void);
extern QItemSelection _ZN14QItemSelectionC2ERK11QModelIndexS2_(void);
extern QItemSelection _ZN14QItemSelectionC1ERK11QModelIndexS2_(void);
extern void _ZN14QItemSelection6selectERK11QModelIndexS2_(void);
extern bool _ZNK14QItemSelection8containsERK11QModelIndex(void);
extern QModelIndexList _ZNK14QItemSelection7indexesEv(void);
extern void _ZN14QItemSelection5mergeERKS_6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void);
extern void _ZN14QItemSelection5splitERK19QItemSelectionRangeS2_PS_(void);
extern QDebug _Zls6QDebugRK19QItemSelectionRange(void);
// *INDENT-ON*
#endif
