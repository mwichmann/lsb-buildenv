#ifndef _QTGUI_QACCESSIBLE_H_
#define _QTGUI_QACCESSIBLE_H_

#include <QtCore/qcoreevent.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".." N11QAccessible5StateE;

    typedef Unknown Type:".." N11QAccessible8RelationE;

    typedef void N11QAccessible13UpdateHandlerE;

    typedef void N11QAccessible17RootObjectHandlerE;

    Unknown Type:".Class.";

    enum N11QAccessible5EventE {
	SoundPlayed,
	Alert,
	ForegroundChanged,
	MenuStart,
	MenuEnd,
	PopupMenuStart,
	PopupMenuEnd,
	ContextHelpStart,
	ContextHelpEnd,
	DragDropStart,
	DragDropEnd,
	DialogStart,
	DialogEnd,
	ScrollingStart,
	ScrollingEnd,
	MenuCommand,
	ObjectCreated,
	ObjectDestroyed,
	ObjectShow,
	ObjectHide,
	ObjectReorder,
	Focus,
	Selection,
	SelectionAdd,
	SelectionRemove,
	SelectionWithin,
	StateChanged,
	LocationChanged,
	NameChanged,
	DescriptionChanged,
	ValueChanged,
	ParentChanged,
	HelpChanged,
	DefaultActionChanged,
	AcceleratorChanged
    };

    enum N11QAccessible9StateFlagE {
	Modal,
	Normal,
	Unavailable,
	Selected,
	Focused,
	Pressed,
	Checked,
	Mixed,
	ReadOnly,
	HotTracked,
	DefaultButton,
	Expanded,
	Collapsed,
	Busy,
	Marqueed,
	Animated,
	Invisible,
	Offscreen,
	Sizeable,
	Movable,
	Moveable,
	SelfVoicing,
	Focusable,
	Selectable,
	Linked,
	Traversed,
	MultiSelectable,
	ExtSelectable,
	Protected,
	HasPopup
    };

    Unknown Type:".Class.";

    enum N11QAccessible4RoleE {
	NoRole,
	TitleBar,
	MenuBar,
	ScrollBar,
	Grip,
	Sound,
	Cursor,
	Caret,
	AlertMessage,
	Window,
	Client,
	PopupMenu,
	MenuItem,
	ToolTip,
	Application,
	Document,
	Pane,
	Chart,
	Dialog,
	Border,
	Grouping,
	Separator,
	ToolBar,
	StatusBar,
	Table,
	ColumnHeader,
	RowHeader,
	Column,
	Row,
	Cell,
	Link,
	HelpBalloon,
	Assistant,
	List,
	ListItem,
	Tree,
	TreeItem,
	PageTab,
	PropertyPage,
	Indicator,
	Graphic,
	StaticText,
	EditableText,
	PushButton,
	CheckBox,
	RadioButton,
	ComboBox,
	ProgressBar,
	Dial,
	HotkeyField,
	Slider,
	SpinBox,
	Canvas,
	Animation,
	Equation,
	ButtonDropDown,
	ButtonMenu,
	ButtonDropGrid,
	Whitespace,
	PageTabList,
	Clock,
	Splitter,
	LayeredPane,
	UserRole
    };

    enum N11QAccessible4TextE {
	Name,
	Description,
	Value,
	Help,
	Accelerator,
	UserText
    };

    enum N11QAccessible12RelationFlagE {
	Unrelated,
	Self,
	Ancestor,
	Child,
	Descendent,
	Sibling,
	HierarchyMask,
	Up,
	Down,
	Left,
	Right,
	Covers,
	Covered,
	GeometryMask,
	FocusChild,
	Label,
	Labelled,
	Controller,
	Controlled,
	LogicalMask
    };

    Unknown Type:".Class.";

    enum N11QAccessible6ActionE {
	AddToSelection,
	LastStandardAction,
	ExtendSelection,
	RemoveSelection,
	ClearSelection,
	Select,
	Cancel,
	Accept,
	Decrease,
	Increase,
	SetFocus,
	Press,
	FirstStandardAction,
	DefaultAction
    };

    Unknown Type:".Class.";

    Unknown Type:".Class.";


    extern void
	_ZN11QAccessible14installFactoryEPFP20QAccessibleInterfaceRK7QStringP7QObjectE
	(void);
    extern void
	_ZN11QAccessible13removeFactoryEPFP20QAccessibleInterfaceRK7QStringP7QObjectE
	(void);
    extern N11QAccessible13UpdateHandlerE
	_ZN11QAccessible20installUpdateHandlerEPFvP7QObjectiNS_5EventEE
	(void);
    extern N11QAccessible17RootObjectHandlerE
	_ZN11QAccessible24installRootObjectHandlerEPFvP7QObjectE(void);
    extern _ZN11QAccessible24queryAccessibleInterfaceEP7QObject(void);
    extern void
	_ZN11QAccessible19updateAccessibilityEP7QObjectiNS_5EventE(void);
    extern bool _ZN11QAccessible8isActiveEv(void);
    extern void _ZN11QAccessible13setRootObjectEP7QObject(void);
    extern void _ZN11QAccessible10initializeEv(void);
    extern void _ZN11QAccessible7cleanupEv(void);
    extern _ZN20QAccessibleInterfaceD0Ev(void);
    extern _ZN20QAccessibleInterfaceD1Ev(void);
#ifdef __cplusplus
}
#endif
#endif
