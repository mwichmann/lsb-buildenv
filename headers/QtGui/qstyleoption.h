#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QSTYLEOPTION_H_
#define _QTGUI_QSTYLEOPTION_H_

class QStyleOptionButton;
// *INDENT-OFF*

typedef class QFlags<QStyleOptionFrameV2::FrameFeature>QStyleOptionFrameV2::FrameFeatures	
;

typedef class QFlags<QStyleOptionButton::ButtonFeature>QStyleOptionButton::ButtonFeatures	
;

typedef class QFlags<QStyleOptionTab::CornerWidget>QStyleOptionTab::CornerWidgets	
;

typedef class QFlags<QStyleOptionToolBar::ToolBarFeature>QStyleOptionToolBar::ToolBarFeatures	
;

typedef class QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>QStyleOptionQ3ListViewItem::Q3ListViewItemFeatures	
;

typedef class QFlags<QStyleOptionToolButton::ToolButtonFeature>QStyleOptionToolButton::ToolButtonFeatures	
;

class QStyleOption;

enum QStyleOption::OptionType	
{
SO_Default = 0,	
SO_FocusRect = 1,	
SO_Button = 2,	
SO_Tab = 3,	
SO_MenuItem = 4,	
SO_Frame = 5,	
SO_ProgressBar = 6,	
SO_ToolBox = 7,	
SO_Header = 8,	
SO_Q3DockWindow = 9,	
SO_DockWidget = 10,	
SO_Q3ListViewItem = 11,	
SO_ViewItem = 12,	
SO_TabWidgetFrame = 13,	
SO_TabBarBase = 14,	
SO_RubberBand = 15,	
SO_ToolBar = 16,	
SO_CustomBase = 3840,	
SO_Complex = 983040,	
SO_Slider = 983041,	
SO_SpinBox = 983042,	
SO_ToolButton = 983043,	
SO_ComboBox = 983044,	
SO_Q3ListView = 983045,	
SO_TitleBar = 983046,	
SO_GroupBox = 983047,	
SO_ComplexCustomBase = 251658240
}
;

class QStyleOptionFocusRect;

class QStyleOptionFrame;

class QStyleOptionFrameV2;

enum QStyleOptionFrameV2::FrameFeature	
{
None = 0,	
Flat = 1
}
;

class QFlags<QStyleOptionFrameV2::FrameFeature>;

class QStyleOptionTabWidgetFrame;

class QStyleOptionTabBarBase;

class QStyleOptionHeader;

enum QStyleOptionHeader::SectionPosition	
{
Beginning = 0,	
Middle = 1,	
End = 2,	
OnlyOneSection = 3
}
;

enum QStyleOptionHeader::SelectedPosition	
{
NotAdjacent = 0,	
NextIsSelected = 1,	
PreviousIsSelected = 2,	
NextAndPreviousAreSelected = 3
}
;

enum QStyleOptionHeader::SortIndicator	
{
None = 0,	
SortUp = 1,	
SortDown = 2
}
;

class QStyleOptionButton;

enum QStyleOptionButton::ButtonFeature	
{
None = 0,	
Flat = 1,	
HasMenu = 2,	
DefaultButton = 4,	
AutoDefaultButton = 8
}
;

class QFlags<QStyleOptionButton::ButtonFeature>;

class QStyleOptionTab;

enum QStyleOptionTab::TabPosition	
{
Beginning = 0,	
Middle = 1,	
End = 2,	
OnlyOneTab = 3
}
;

enum QStyleOptionTab::SelectedPosition	
{
NotAdjacent = 0,	
NextIsSelected = 1,	
PreviousIsSelected = 2
}
;

enum QStyleOptionTab::CornerWidget	
{
NoCornerWidgets = 0,	
LeftCornerWidget = 1,	
RightCornerWidget = 2
}
;

class QFlags<QStyleOptionTab::CornerWidget>;

class QStyleOptionTabV2;

class QStyleOptionToolBar;

enum QStyleOptionToolBar::ToolBarPosition	
{
Beginning = 0,	
Middle = 1,	
End = 2,	
OnlyOne = 3
}
;

enum QStyleOptionToolBar::ToolBarFeature	
{
None = 0,	
Movable = 1
}
;

class QFlags<QStyleOptionToolBar::ToolBarFeature>;

class QStyleOptionProgressBar;

class QStyleOptionProgressBarV2;

class QStyleOptionMenuItem;

enum QStyleOptionMenuItem::MenuItemType	
{
Normal = 0,	
DefaultItem = 1,	
Separator = 2,	
SubMenu = 3,	
Scroller = 4,	
TearOff = 5,	
Margin = 6,	
EmptyArea = 7
}
;

enum QStyleOptionMenuItem::CheckType	
{
NotCheckable = 0,	
Exclusive = 1,	
NonExclusive = 2
}
;

class QStyleOptionQ3ListViewItem;

enum QStyleOptionQ3ListViewItem::Q3ListViewItemFeature	
{
None = 0,	
Expandable = 1,	
MultiLine = 2,	
Visible = 4,	
ParentControl = 8
}
;

class QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>;

class QStyleOptionQ3DockWindow;

class QStyleOptionDockWidget;

class QStyleOptionViewItem;

enum QStyleOptionViewItem::Position	
{
Left = 0,	
Right = 1,	
Top = 2,	
Bottom = 3
}
;

class QStyleOptionToolBox;

class QStyleOptionRubberBand;

class QStyleOptionComplex;

class QStyleOptionSlider;

class QStyleOptionSpinBox;

class QStyleOptionQ3ListView;

class QStyleOptionToolButton;

enum QStyleOptionToolButton::ToolButtonFeature	
{
None = 0,	
Arrow = 1,	
Menu = 4,	
PopupDelay = 8
}
;

class QFlags<QStyleOptionToolButton::ToolButtonFeature>;

class QStyleOptionComboBox;

class QStyleOptionTitleBar;

class QStyleOptionGroupBox;

class QStyleHintReturn;

enum QStyleHintReturn::HintReturnType	
{
SH_Default = 61440,	
SH_Mask = 61441
}
;

class QStyleHintReturnMask;

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
