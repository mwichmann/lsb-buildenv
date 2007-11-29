#ifndef _QTGUI_QCOMBOBOX_H_
#define _QTGUI_QCOMBOBOX_H_

class QComboBox;
// *INDENT-OFF*




typedef enum InsertPolicy	
{
NoInsert = 0,	
NoInsertion = 0,	
InsertAtTop = 1,	
AtTop = 1,	
InsertAtCurrent = 2,	
AtCurrent = 2,	
InsertAtBottom = 3,	
AtBottom = 3,	
InsertAfterCurrent = 4,	
AfterCurrent = 4,	
InsertBeforeCurrent = 5,	
BeforeCurrent = 5
}
Policy	
;

class QComboBox : public QWidget
{
private:
public:
};

enum InsertPolicy	
{
NoInsert = 0,	
NoInsertion = 0,	
InsertAtTop = 1,	
AtTop = 1,	
InsertAtCurrent = 2,	
AtCurrent = 2,	
InsertAtBottom = 3,	
AtBottom = 3,	
InsertAfterCurrent = 4,	
AfterCurrent = 4,	
InsertBeforeCurrent = 5,	
BeforeCurrent = 5
}
;

enum SizeAdjustPolicy	
{
AdjustToContents = 0,	
AdjustToContentsOnFirstShow = 1,	
AdjustToMinimumContentsLength = 2
}
;


extern struct QMetaObject _ZN9QComboBox16staticMetaObjectE ;
extern struct QMetaObject _ZNK9QComboBox10metaObjectEv(void);
extern void _ZN9QComboBox11qt_metacastEPKc(void);
extern int _ZN9QComboBox11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QComboBox _ZN9QComboBoxC2EP7QWidget(void);
extern QComboBox _ZN9QComboBoxC1EP7QWidget(void);
extern  _ZN9QComboBoxD2Ev(void);
extern  _ZN9QComboBoxD1Ev(void);
extern  _ZN9QComboBoxD0Ev(void);
extern int _ZNK9QComboBox15maxVisibleItemsEv(void);
extern void _ZN9QComboBox18setMaxVisibleItemsEi(void);
extern int _ZNK9QComboBox5countEv(void);
extern void _ZN9QComboBox11setMaxCountEi(void);
extern int _ZNK9QComboBox8maxCountEv(void);
extern bool _ZNK9QComboBox14autoCompletionEv(void);
extern void _ZN9QComboBox17setAutoCompletionEb(void);
extern enum N2Qt15CaseSensitivityE _ZNK9QComboBox29autoCompletionCaseSensitivityEv(void);
extern void _ZN9QComboBox32setAutoCompletionCaseSensitivityEN2Qt15CaseSensitivityE(void);
extern bool _ZNK9QComboBox17duplicatesEnabledEv(void);
extern void _ZN9QComboBox20setDuplicatesEnabledEb(void);
extern void _ZN9QComboBox8setFrameEb(void);
extern bool _ZNK9QComboBox8hasFrameEv(void);
extern int _ZNK9QComboBox8findDataERK8QVarianti6QFlagsIN2Qt9MatchFlagEE(void);
extern enum N9QComboBox12InsertPolicyE _ZNK9QComboBox12insertPolicyEv(void);
extern void _ZN9QComboBox15setInsertPolicyENS_12InsertPolicyE(void);
extern enum N9QComboBox16SizeAdjustPolicyE _ZNK9QComboBox16sizeAdjustPolicyEv(void);
extern void _ZN9QComboBox19setSizeAdjustPolicyENS_16SizeAdjustPolicyE(void);
extern int _ZNK9QComboBox21minimumContentsLengthEv(void);
extern void _ZN9QComboBox24setMinimumContentsLengthEi(void);
extern QSize _ZNK9QComboBox8iconSizeEv(void);
extern void _ZN9QComboBox11setIconSizeERK5QSize(void);
extern bool _ZNK9QComboBox10isEditableEv(void);
extern void _ZN9QComboBox11setEditableEb(void);
extern void _ZN9QComboBox11setLineEditEP9QLineEdit(void);
extern QLineEdit _ZNK9QComboBox8lineEditEv(void);
extern void _ZN9QComboBox12setValidatorEPK10QValidator(void);
extern QValidator _ZNK9QComboBox9validatorEv(void);
extern QAbstractItemDelegate _ZNK9QComboBox12itemDelegateEv(void);
extern void _ZN9QComboBox15setItemDelegateEP21QAbstractItemDelegate(void);
extern QAbstractItemModel _ZNK9QComboBox5modelEv(void);
extern void _ZN9QComboBox8setModelEP18QAbstractItemModel(void);
extern QModelIndex _ZNK9QComboBox14rootModelIndexEv(void);
extern void _ZN9QComboBox17setRootModelIndexERK11QModelIndex(void);
extern int _ZNK9QComboBox11modelColumnEv(void);
extern void _ZN9QComboBox14setModelColumnEi(void);
extern int _ZNK9QComboBox12currentIndexEv(void);
extern QString _ZNK9QComboBox11currentTextEv(void);
extern QString _ZNK9QComboBox8itemTextEi(void);
extern QIcon _ZNK9QComboBox8itemIconEi(void);
extern QVariant _ZNK9QComboBox8itemDataEii(void);
extern void _ZN9QComboBox10insertItemEiRK5QIconRK7QStringRK8QVariant(void);
extern void _ZN9QComboBox11insertItemsEiRK11QStringList(void);
extern void _ZN9QComboBox10removeItemEi(void);
extern void _ZN9QComboBox11setItemTextEiRK7QString(void);
extern void _ZN9QComboBox11setItemIconEiRK5QIcon(void);
extern void _ZN9QComboBox11setItemDataEiRK8QVarianti(void);
extern QAbstractItemView _ZNK9QComboBox4viewEv(void);
extern void _ZN9QComboBox7setViewEP17QAbstractItemView(void);
extern QSize _ZNK9QComboBox8sizeHintEv(void);
extern QSize _ZNK9QComboBox15minimumSizeHintEv(void);
extern void _ZN9QComboBox9showPopupEv(void);
extern void _ZN9QComboBox9hidePopupEv(void);
extern bool _ZN9QComboBox5eventEP6QEvent(void);
extern void _ZN9QComboBox5clearEv(void);
extern void _ZN9QComboBox13clearEditTextEv(void);
extern void _ZN9QComboBox11setEditTextERK7QString(void);
extern void _ZN9QComboBox15setCurrentIndexEi(void);
extern void _ZN9QComboBox15editTextChangedERK7QString(void);
extern void _ZN9QComboBox9activatedEi(void);
extern void _ZN9QComboBox9activatedERK7QString(void);
extern void _ZN9QComboBox11highlightedEi(void);
extern void _ZN9QComboBox11highlightedERK7QString(void);
extern void _ZN9QComboBox19currentIndexChangedEi(void);
extern void _ZN9QComboBox19currentIndexChangedERK7QString(void);
extern void _ZN9QComboBox12focusInEventEP11QFocusEvent(void);
extern void _ZN9QComboBox13focusOutEventEP11QFocusEvent(void);
extern void _ZN9QComboBox11changeEventEP6QEvent(void);
extern void _ZN9QComboBox11resizeEventEP12QResizeEvent(void);
extern void _ZN9QComboBox10paintEventEP11QPaintEvent(void);
extern void _ZN9QComboBox9showEventEP10QShowEvent(void);
extern void _ZN9QComboBox9hideEventEP10QHideEvent(void);
extern void _ZN9QComboBox15mousePressEventEP11QMouseEvent(void);
extern void _ZN9QComboBox17mouseReleaseEventEP11QMouseEvent(void);
extern void _ZN9QComboBox13keyPressEventEP9QKeyEvent(void);
extern void _ZN9QComboBox15keyReleaseEventEP9QKeyEvent(void);
extern void _ZN9QComboBox10wheelEventEP11QWheelEvent(void);
extern void _ZN9QComboBox16contextMenuEventEP17QContextMenuEvent(void);
extern void _ZN9QComboBox16inputMethodEventEP17QInputMethodEvent(void);
extern QVariant _ZNK9QComboBox16inputMethodQueryEN2Qt16InputMethodQueryE(void);
extern QComboBox _ZN9QComboBoxC2EP7QWidgetPKc(void);
extern QComboBox _ZN9QComboBoxC1EP7QWidgetPKc(void);
extern QComboBox _ZN9QComboBoxC2EbP7QWidgetPKc(void);
extern QComboBox _ZN9QComboBoxC1EbP7QWidgetPKc(void);
extern void _ZN9QComboBox11textChangedERK7QString(void);
// *INDENT-ON*
#endif
