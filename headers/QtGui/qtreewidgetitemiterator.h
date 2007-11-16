#ifndef _QTGUI_QTREEWIDGETITEMITERATOR_H_
#define _QTGUI_QTREEWIDGETITEMITERATOR_H_

class QFlags < QTreeWidgetItemIterator::IteratorFlag >;
// *INDENT-OFF*




typedef IteratorFlags	
;

class QTreeWidgetItemIterator
{
private:
public:
};

enum IteratorFlag	
{
All = 0,	
Hidden = 1,	
NotHidden = 2,	
Selected = 4,	
Unselected = 8,	
Selectable = 16,	
NotSelectable = 32,	
DragEnabled = 64,	
DragDisabled = 128,	
DropEnabled = 256,	
DropDisabled = 512,	
HasChildren = 1024,	
NoChildren = 2048,	
Checked = 4096,	
NotChecked = 8192,	
Enabled = 16384,	
Disabled = 32768,	
Editable = 65536,	
NotEditable = 131072,	
UserFlag = 16777216
}
;

class QFlags<QTreeWidgetItemIterator::IteratorFlag>
{
private:
public:
};


extern QTreeWidgetItemIterator _ZN23QTreeWidgetItemIteratorC2ERKS_(void);
extern QTreeWidgetItemIterator _ZN23QTreeWidgetItemIteratorC1ERKS_(void);
extern QTreeWidgetItemIterator _ZN23QTreeWidgetItemIteratorC2EP11QTreeWidget6QFlagsINS_12IteratorFlagEE(void);
extern QTreeWidgetItemIterator _ZN23QTreeWidgetItemIteratorC1EP11QTreeWidget6QFlagsINS_12IteratorFlagEE(void);
extern QTreeWidgetItemIterator _ZN23QTreeWidgetItemIteratorC2EP15QTreeWidgetItem6QFlagsINS_12IteratorFlagEE(void);
extern QTreeWidgetItemIterator _ZN23QTreeWidgetItemIteratorC1EP15QTreeWidgetItem6QFlagsINS_12IteratorFlagEE(void);
extern QTreeWidgetItemIterator _ZN23QTreeWidgetItemIteratorD2Ev(void);
extern QTreeWidgetItemIterator _ZN23QTreeWidgetItemIteratorD1Ev(void);
extern QTreeWidgetItemIterator _ZN23QTreeWidgetItemIteratoraSERKS_(void);
extern QTreeWidgetItemIterator _ZN23QTreeWidgetItemIteratorppEv(void);
extern QTreeWidgetItemIterator _ZN23QTreeWidgetItemIteratormmEv(void);
// *INDENT-ON*
#endif
