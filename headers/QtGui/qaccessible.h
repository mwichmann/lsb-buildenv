#ifndef _QTGUI_QACCESSIBLE_H_
#define _QTGUI_QACCESSIBLE_H_

class QAccessibleEvent;
// *INDENT-OFF*



typedef State	
;

typedef Relation	
;

typedef void	UpdateHandler	
;

typedef void	RootObjectHandler	
;

class QAccessible
{
private:
public:
};

enum Event	
{
SoundPlayed = 1,	
Alert = 2,	
ForegroundChanged = 3,	
MenuStart = 4,	
MenuEnd = 5,	
PopupMenuStart = 6,	
PopupMenuEnd = 7,	
ContextHelpStart = 12,	
ContextHelpEnd = 13,	
DragDropStart = 14,	
DragDropEnd = 15,	
DialogStart = 16,	
DialogEnd = 17,	
ScrollingStart = 18,	
ScrollingEnd = 19,	
MenuCommand = 24,	
ObjectCreated = 32768,	
ObjectDestroyed = 32769,	
ObjectShow = 32770,	
ObjectHide = 32771,	
ObjectReorder = 32772,	
Focus = 32773,	
Selection = 32774,	
SelectionAdd = 32775,	
SelectionRemove = 32776,	
SelectionWithin = 32777,	
StateChanged = 32778,	
LocationChanged = 32779,	
NameChanged = 32780,	
DescriptionChanged = 32781,	
ValueChanged = 32782,	
ParentChanged = 32783,	
HelpChanged = 32928,	
DefaultActionChanged = 32944,	
AcceleratorChanged = 32960
}
;

enum StateFlag	
{
Modal = -2147483648,	
Normal = 0,	
Unavailable = 1,	
Selected = 2,	
Focused = 4,	
Pressed = 8,	
Checked = 16,	
Mixed = 32,	
ReadOnly = 64,	
HotTracked = 128,	
DefaultButton = 256,	
Expanded = 512,	
Collapsed = 1024,	
Busy = 2048,	
Marqueed = 8192,	
Animated = 16384,	
Invisible = 32768,	
Offscreen = 65536,	
Sizeable = 131072,	
Movable = 262144,	
Moveable = 262144,	
SelfVoicing = 524288,	
Focusable = 1048576,	
Selectable = 2097152,	
Linked = 4194304,	
Traversed = 8388608,	
MultiSelectable = 16777216,	
ExtSelectable = 33554432,	
Protected = 536870912,	
HasPopup = 1073741824
}
;

class QFlags<QAccessible::StateFlag>
{
private:
public:
};

enum Role	
{
NoRole = 0,	
TitleBar = 1,	
MenuBar = 2,	
ScrollBar = 3,	
Grip = 4,	
Sound = 5,	
Cursor = 6,	
Caret = 7,	
AlertMessage = 8,	
Window = 9,	
Client = 10,	
PopupMenu = 11,	
MenuItem = 12,	
ToolTip = 13,	
Application = 14,	
Document = 15,	
Pane = 16,	
Chart = 17,	
Dialog = 18,	
Border = 19,	
Grouping = 20,	
Separator = 21,	
ToolBar = 22,	
StatusBar = 23,	
Table = 24,	
ColumnHeader = 25,	
RowHeader = 26,	
Column = 27,	
Row = 28,	
Cell = 29,	
Link = 30,	
HelpBalloon = 31,	
Assistant = 32,	
List = 33,	
ListItem = 34,	
Tree = 35,	
TreeItem = 36,	
PageTab = 37,	
PropertyPage = 38,	
Indicator = 39,	
Graphic = 40,	
StaticText = 41,	
EditableText = 42,	
PushButton = 43,	
CheckBox = 44,	
RadioButton = 45,	
ComboBox = 46,	
ProgressBar = 48,	
Dial = 49,	
HotkeyField = 50,	
Slider = 51,	
SpinBox = 52,	
Canvas = 53,	
Animation = 54,	
Equation = 55,	
ButtonDropDown = 56,	
ButtonMenu = 57,	
ButtonDropGrid = 58,	
Whitespace = 59,	
PageTabList = 60,	
Clock = 61,	
Splitter = 62,	
LayeredPane = 63,	
UserRole = 65535
}
;

enum Text	
{
Name = 0,	
Description = 1,	
Value = 2,	
Help = 3,	
Accelerator = 4,	
UserText = 65535
}
;

enum RelationFlag	
{
Unrelated = 0,	
Self = 1,	
Ancestor = 2,	
Child = 4,	
Descendent = 8,	
Sibling = 16,	
HierarchyMask = 255,	
Up = 256,	
Down = 512,	
Left = 1024,	
Right = 2048,	
Covers = 4096,	
Covered = 8192,	
GeometryMask = 65280,	
FocusChild = 65536,	
Label = 131072,	
Labelled = 262144,	
Controller = 524288,	
Controlled = 1048576,	
LogicalMask = 16711680
}
;

class QFlags<QAccessible::RelationFlag>
{
private:
public:
};

enum Action	
{
AddToSelection = -11,	
LastStandardAction = -11,	
ExtendSelection = -10,	
RemoveSelection = -9,	
ClearSelection = -8,	
Select = -7,	
Cancel = -6,	
Accept = -5,	
Decrease = -4,	
Increase = -3,	
SetFocus = -2,	
Press = -1,	
FirstStandardAction = -1,	
DefaultAction = 0
}
;

class QAccessibleInterface : public QAccessible
{
private:
public:
};

class QAccessibleEvent : public QEvent
{
private:
public:
};


extern void _ZN11QAccessible14installFactoryEPFP20QAccessibleInterfaceRK7QStringP7QObjectE(void);
extern void _ZN11QAccessible13removeFactoryEPFP20QAccessibleInterfaceRK7QStringP7QObjectE(void);
extern N11QAccessible13UpdateHandlerE _ZN11QAccessible20installUpdateHandlerEPFvP7QObjectiNS_5EventEE(void);
extern N11QAccessible17RootObjectHandlerE _ZN11QAccessible24installRootObjectHandlerEPFvP7QObjectE(void);
extern  _ZN11QAccessible24queryAccessibleInterfaceEP7QObject(void);
extern void _ZN11QAccessible19updateAccessibilityEP7QObjectiNS_5EventE(void);
extern bool _ZN11QAccessible8isActiveEv(void);
extern void _ZN11QAccessible13setRootObjectEP7QObject(void);
extern void _ZN11QAccessible10initializeEv(void);
extern void _ZN11QAccessible7cleanupEv(void);
extern  _ZN20QAccessibleInterfaceD0Ev(void);
extern  _ZN20QAccessibleInterfaceD1Ev(void);
// *INDENT-ON*
#endif