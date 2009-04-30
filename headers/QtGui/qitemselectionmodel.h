#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QITEMSELECTIONMODEL_H_
#define _QTGUI_QITEMSELECTIONMODEL_H_

class QItemSelectionRange;
// *INDENT-OFF*

typedef class QFlags<QItemSelectionModel::SelectionFlag>QItemSelectionModel::SelectionFlags	
;

class QItemSelectionRange;

class QItemSelectionModel;

enum _ZN19QItemSelectionModel13SelectionFlagE	
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

class QFlags<QItemSelectionModel::SelectionFlag>;

class QItemSelection;


/* Function prototypes */

extern struct QMetaObject _ZN19QItemSelectionModel16staticMetaObjectE;
extern QDebug _Zls6QDebugRK19QItemSelectionRange(_Z6QDebug, const QItemSelectionRange &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
