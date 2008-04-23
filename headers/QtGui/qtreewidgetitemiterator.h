#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QTREEWIDGETITEMITERATOR_H_
#define _QTGUI_QTREEWIDGETITEMITERATOR_H_

class QFlags < QTreeWidgetItemIterator::IteratorFlag >;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef class QFlags<QTreeWidgetItemIterator::IteratorFlag>
{
private:
public:
}IteratorFlags	
;

#endif /* __LSB_VERSION__ >= 3.1 */

#if __LSB_VERSION__ >= 31
class QTreeWidgetItemIterator
{
private:
public:
     QTreeWidgetItemIterator(QTreeWidgetItemIterator const&);
     QTreeWidgetItemIterator(QTreeWidget*, QFlags<QTreeWidgetItemIterator::IteratorFlag>);
     QTreeWidgetItemIterator(QTreeWidgetItem*, QFlags<QTreeWidgetItemIterator::IteratorFlag>);
     ~QTreeWidgetItemIterator();
     operator=(QTreeWidgetItemIterator const&);
     operator++();
     operator--();
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

#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
