#ifndef _QTGUI_QSTYLEOPTION_H_
#define _QTGUI_QSTYLEOPTION_H_

class QStyleOptionButton;
// *INDENT-OFF*



typedef FrameFeatures	
;

typedef ButtonFeatures	
;

typedef CornerWidgets	
;

typedef ToolBarFeatures	
;

typedef Q3ListViewItemFeatures	
;

typedef ToolButtonFeatures	
;

class QStyleOption
{
private:
public:
};

enum OptionType	
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

class QStyleOptionFocusRect :  
{
private:
public:
};

class QStyleOptionFrame :  
{
private:
public:
};

class QStyleOptionFrameV2 :  
{
private:
public:
};

enum FrameFeature	
{
None = 0,	
Flat = 1
}
;

class QFlags<QStyleOptionFrameV2::FrameFeature>
{
private:
public:
};

class QStyleOptionTabWidgetFrame :  
{
private:
public:
};

class QStyleOptionTabBarBase :  
{
private:
public:
};

class QStyleOptionHeader :  
{
private:
public:
};

enum SectionPosition	
{
Beginning = 0,	
Middle = 1,	
End = 2,	
OnlyOneSection = 3
}
;

enum SelectedPosition	
{
NotAdjacent = 0,	
NextIsSelected = 1,	
PreviousIsSelected = 2,	
NextAndPreviousAreSelected = 3
}
;

enum SortIndicator	
{
None = 0,	
SortUp = 1,	
SortDown = 2
}
;

class QStyleOptionButton :  
{
private:
public:
};

enum ButtonFeature	
{
None = 0,	
Flat = 1,	
HasMenu = 2,	
DefaultButton = 4,	
AutoDefaultButton = 8
}
;

class QFlags<QStyleOptionButton::ButtonFeature>
{
private:
public:
};

class QStyleOptionTab :  
{
private:
public:
};

enum TabPosition	
{
Beginning = 0,	
Middle = 1,	
End = 2,	
OnlyOneTab = 3
}
;

enum SelectedPosition	
{
NotAdjacent = 0,	
NextIsSelected = 1,	
PreviousIsSelected = 2
}
;

enum CornerWidget	
{
NoCornerWidgets = 0,	
LeftCornerWidget = 1,	
RightCornerWidget = 2
}
;

class QFlags<QStyleOptionTab::CornerWidget>
{
private:
public:
};

class QStyleOptionTabV2 :  
{
private:
public:
};

class QStyleOptionToolBar :  
{
private:
public:
};

enum ToolBarPosition	
{
Beginning = 0,	
Middle = 1,	
End = 2,	
OnlyOne = 3
}
;

enum ToolBarFeature	
{
None = 0,	
Movable = 1
}
;

class QFlags<QStyleOptionToolBar::ToolBarFeature>
{
private:
public:
};

class QStyleOptionProgressBar :  
{
private:
public:
};

class QStyleOptionProgressBarV2 :  
{
private:
public:
};

class QStyleOptionMenuItem :  
{
private:
public:
};

enum MenuItemType	
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

enum CheckType	
{
NotCheckable = 0,	
Exclusive = 1,	
NonExclusive = 2
}
;

class QStyleOptionQ3ListViewItem :  
{
private:
public:
};

enum Q3ListViewItemFeature	
{
None = 0,	
Expandable = 1,	
MultiLine = 2,	
Visible = 4,	
ParentControl = 8
}
;

class QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>
{
private:
public:
};

class QStyleOptionQ3DockWindow :  
{
private:
public:
};

class QStyleOptionDockWidget :  
{
private:
public:
};

class QStyleOptionViewItem :  
{
private:
public:
};

enum Position	
{
Left = 0,	
Right = 1,	
Top = 2,	
Bottom = 3
}
;

class QStyleOptionToolBox :  
{
private:
public:
};

class QStyleOptionRubberBand :  
{
private:
public:
};

class QStyleOptionComplex :  
{
private:
public:
};

class QStyleOptionSlider :  
{
private:
public:
};

class QStyleOptionSpinBox :  
{
private:
public:
};

class QStyleOptionQ3ListView :  
{
private:
public:
};

class QStyleOptionToolButton :  
{
private:
public:
};

enum ToolButtonFeature	
{
None = 0,	
Arrow = 1,	
Menu = 4,	
PopupDelay = 8
}
;

class QFlags<QStyleOptionToolButton::ToolButtonFeature>
{
private:
public:
};

class QStyleOptionComboBox :  
{
private:
public:
};

class QStyleOptionTitleBar :  
{
private:
public:
};

class QStyleOptionGroupBox :  
{
private:
public:
};

class QStyleHintReturn
{
private:
public:
};

enum HintReturnType	
{
SH_Default = 61440,	
SH_Mask = 61441
}
;

class QStyleHintReturnMask :  
{
private:
public:
};


extern QStyleOption _ZN12QStyleOptionC2Eii(void);
extern QStyleOption _ZN12QStyleOptionC1Eii(void);
extern QStyleOption _ZN12QStyleOptionC2ERKS_(void);
extern QStyleOption _ZN12QStyleOptionC1ERKS_(void);
extern QStyleOption _ZN12QStyleOptionD2Ev(void);
extern QStyleOption _ZN12QStyleOptionD1Ev(void);
extern void _ZN12QStyleOption4initEPK7QWidget(void);
extern QStyleOption _ZN12QStyleOptionaSERKS_(void);
extern QStyleOptionFocusRect _ZN21QStyleOptionFocusRectC2Ev(void);
extern QStyleOptionFocusRect _ZN21QStyleOptionFocusRectC1Ev(void);
extern QStyleOptionFocusRect _ZN21QStyleOptionFocusRectC2Ei(void);
extern QStyleOptionFocusRect _ZN21QStyleOptionFocusRectC1Ei(void);
extern QStyleOptionFrame _ZN17QStyleOptionFrameC2Ev(void);
extern QStyleOptionFrame _ZN17QStyleOptionFrameC1Ev(void);
extern QStyleOptionFrame _ZN17QStyleOptionFrameC2Ei(void);
extern QStyleOptionFrame _ZN17QStyleOptionFrameC1Ei(void);
extern QStyleOptionFrameV2 _ZN19QStyleOptionFrameV2C2Ev(void);
extern QStyleOptionFrameV2 _ZN19QStyleOptionFrameV2C1Ev(void);
extern QStyleOptionFrameV2 _ZN19QStyleOptionFrameV2C2ERK17QStyleOptionFrame(void);
extern QStyleOptionFrameV2 _ZN19QStyleOptionFrameV2C1ERK17QStyleOptionFrame(void);
extern QStyleOptionFrameV2 _ZN19QStyleOptionFrameV2aSERK17QStyleOptionFrame(void);
extern QStyleOptionFrameV2 _ZN19QStyleOptionFrameV2C2Ei(void);
extern QStyleOptionFrameV2 _ZN19QStyleOptionFrameV2C1Ei(void);
extern QStyleOptionTabWidgetFrame _ZN26QStyleOptionTabWidgetFrameC2Ev(void);
extern QStyleOptionTabWidgetFrame _ZN26QStyleOptionTabWidgetFrameC1Ev(void);
extern QStyleOptionTabWidgetFrame _ZN26QStyleOptionTabWidgetFrameC2Ei(void);
extern QStyleOptionTabWidgetFrame _ZN26QStyleOptionTabWidgetFrameC1Ei(void);
extern QStyleOptionTabBarBase _ZN22QStyleOptionTabBarBaseC2Ev(void);
extern QStyleOptionTabBarBase _ZN22QStyleOptionTabBarBaseC1Ev(void);
extern QStyleOptionTabBarBase _ZN22QStyleOptionTabBarBaseC2Ei(void);
extern QStyleOptionTabBarBase _ZN22QStyleOptionTabBarBaseC1Ei(void);
extern QStyleOptionHeader _ZN18QStyleOptionHeaderC2Ev(void);
extern QStyleOptionHeader _ZN18QStyleOptionHeaderC1Ev(void);
extern QStyleOptionHeader _ZN18QStyleOptionHeaderC2Ei(void);
extern QStyleOptionHeader _ZN18QStyleOptionHeaderC1Ei(void);
extern QStyleOptionButton _ZN18QStyleOptionButtonC2Ev(void);
extern QStyleOptionButton _ZN18QStyleOptionButtonC1Ev(void);
extern QStyleOptionButton _ZN18QStyleOptionButtonC2Ei(void);
extern QStyleOptionButton _ZN18QStyleOptionButtonC1Ei(void);
extern QStyleOptionTab _ZN15QStyleOptionTabC2Ev(void);
extern QStyleOptionTab _ZN15QStyleOptionTabC1Ev(void);
extern QStyleOptionTab _ZN15QStyleOptionTabC2Ei(void);
extern QStyleOptionTab _ZN15QStyleOptionTabC1Ei(void);
extern QStyleOptionTabV2 _ZN17QStyleOptionTabV2C2Ev(void);
extern QStyleOptionTabV2 _ZN17QStyleOptionTabV2C1Ev(void);
extern QStyleOptionTabV2 _ZN17QStyleOptionTabV2C2ERK15QStyleOptionTab(void);
extern QStyleOptionTabV2 _ZN17QStyleOptionTabV2C1ERK15QStyleOptionTab(void);
extern QStyleOptionTabV2 _ZN17QStyleOptionTabV2aSERK15QStyleOptionTab(void);
extern QStyleOptionTabV2 _ZN17QStyleOptionTabV2C2Ei(void);
extern QStyleOptionTabV2 _ZN17QStyleOptionTabV2C1Ei(void);
extern QStyleOptionToolBar _ZN19QStyleOptionToolBarC2Ev(void);
extern QStyleOptionToolBar _ZN19QStyleOptionToolBarC1Ev(void);
extern QStyleOptionToolBar _ZN19QStyleOptionToolBarC2Ei(void);
extern QStyleOptionToolBar _ZN19QStyleOptionToolBarC1Ei(void);
extern QStyleOptionProgressBar _ZN23QStyleOptionProgressBarC2Ev(void);
extern QStyleOptionProgressBar _ZN23QStyleOptionProgressBarC1Ev(void);
extern QStyleOptionProgressBar _ZN23QStyleOptionProgressBarC2Ei(void);
extern QStyleOptionProgressBar _ZN23QStyleOptionProgressBarC1Ei(void);
extern QStyleOptionProgressBarV2 _ZN25QStyleOptionProgressBarV2C2Ev(void);
extern QStyleOptionProgressBarV2 _ZN25QStyleOptionProgressBarV2C1Ev(void);
extern QStyleOptionProgressBarV2 _ZN25QStyleOptionProgressBarV2C2ERK23QStyleOptionProgressBar(void);
extern QStyleOptionProgressBarV2 _ZN25QStyleOptionProgressBarV2C1ERK23QStyleOptionProgressBar(void);
extern QStyleOptionProgressBarV2 _ZN25QStyleOptionProgressBarV2C2ERKS_(void);
extern QStyleOptionProgressBarV2 _ZN25QStyleOptionProgressBarV2C1ERKS_(void);
extern QStyleOptionProgressBarV2 _ZN25QStyleOptionProgressBarV2aSERK23QStyleOptionProgressBar(void);
extern QStyleOptionProgressBarV2 _ZN25QStyleOptionProgressBarV2C2Ei(void);
extern QStyleOptionProgressBarV2 _ZN25QStyleOptionProgressBarV2C1Ei(void);
extern QStyleOptionMenuItem _ZN20QStyleOptionMenuItemC2Ev(void);
extern QStyleOptionMenuItem _ZN20QStyleOptionMenuItemC1Ev(void);
extern QStyleOptionMenuItem _ZN20QStyleOptionMenuItemC2Ei(void);
extern QStyleOptionMenuItem _ZN20QStyleOptionMenuItemC1Ei(void);
extern QStyleOptionQ3ListViewItem _ZN26QStyleOptionQ3ListViewItemC2Ev(void);
extern QStyleOptionQ3ListViewItem _ZN26QStyleOptionQ3ListViewItemC1Ev(void);
extern QStyleOptionQ3ListViewItem _ZN26QStyleOptionQ3ListViewItemC2Ei(void);
extern QStyleOptionQ3ListViewItem _ZN26QStyleOptionQ3ListViewItemC1Ei(void);
extern QStyleOptionQ3DockWindow _ZN24QStyleOptionQ3DockWindowC2Ev(void);
extern QStyleOptionQ3DockWindow _ZN24QStyleOptionQ3DockWindowC1Ev(void);
extern QStyleOptionQ3DockWindow _ZN24QStyleOptionQ3DockWindowC2Ei(void);
extern QStyleOptionQ3DockWindow _ZN24QStyleOptionQ3DockWindowC1Ei(void);
extern QStyleOptionDockWidget _ZN22QStyleOptionDockWidgetC2Ev(void);
extern QStyleOptionDockWidget _ZN22QStyleOptionDockWidgetC1Ev(void);
extern QStyleOptionDockWidget _ZN22QStyleOptionDockWidgetC2Ei(void);
extern QStyleOptionDockWidget _ZN22QStyleOptionDockWidgetC1Ei(void);
extern QStyleOptionViewItem _ZN20QStyleOptionViewItemC2Ev(void);
extern QStyleOptionViewItem _ZN20QStyleOptionViewItemC1Ev(void);
extern QStyleOptionViewItem _ZN20QStyleOptionViewItemC2Ei(void);
extern QStyleOptionViewItem _ZN20QStyleOptionViewItemC1Ei(void);
extern QStyleOptionToolBox _ZN19QStyleOptionToolBoxC2Ev(void);
extern QStyleOptionToolBox _ZN19QStyleOptionToolBoxC1Ev(void);
extern QStyleOptionToolBox _ZN19QStyleOptionToolBoxC2Ei(void);
extern QStyleOptionToolBox _ZN19QStyleOptionToolBoxC1Ei(void);
extern QStyleOptionRubberBand _ZN22QStyleOptionRubberBandC2Ev(void);
extern QStyleOptionRubberBand _ZN22QStyleOptionRubberBandC1Ev(void);
extern QStyleOptionRubberBand _ZN22QStyleOptionRubberBandC2Ei(void);
extern QStyleOptionRubberBand _ZN22QStyleOptionRubberBandC1Ei(void);
extern QStyleOptionComplex _ZN19QStyleOptionComplexC2Eii(void);
extern QStyleOptionComplex _ZN19QStyleOptionComplexC1Eii(void);
extern QStyleOptionSlider _ZN18QStyleOptionSliderC2Ev(void);
extern QStyleOptionSlider _ZN18QStyleOptionSliderC1Ev(void);
extern QStyleOptionSlider _ZN18QStyleOptionSliderC2Ei(void);
extern QStyleOptionSlider _ZN18QStyleOptionSliderC1Ei(void);
extern QStyleOptionSpinBox _ZN19QStyleOptionSpinBoxC2Ev(void);
extern QStyleOptionSpinBox _ZN19QStyleOptionSpinBoxC1Ev(void);
extern QStyleOptionSpinBox _ZN19QStyleOptionSpinBoxC2Ei(void);
extern QStyleOptionSpinBox _ZN19QStyleOptionSpinBoxC1Ei(void);
extern QStyleOptionQ3ListView _ZN22QStyleOptionQ3ListViewC2Ev(void);
extern QStyleOptionQ3ListView _ZN22QStyleOptionQ3ListViewC1Ev(void);
extern QStyleOptionQ3ListView _ZN22QStyleOptionQ3ListViewC2Ei(void);
extern QStyleOptionQ3ListView _ZN22QStyleOptionQ3ListViewC1Ei(void);
extern QStyleOptionToolButton _ZN22QStyleOptionToolButtonC2Ev(void);
extern QStyleOptionToolButton _ZN22QStyleOptionToolButtonC1Ev(void);
extern QStyleOptionToolButton _ZN22QStyleOptionToolButtonC2Ei(void);
extern QStyleOptionToolButton _ZN22QStyleOptionToolButtonC1Ei(void);
extern QStyleOptionComboBox _ZN20QStyleOptionComboBoxC2Ev(void);
extern QStyleOptionComboBox _ZN20QStyleOptionComboBoxC1Ev(void);
extern QStyleOptionComboBox _ZN20QStyleOptionComboBoxC2Ei(void);
extern QStyleOptionComboBox _ZN20QStyleOptionComboBoxC1Ei(void);
extern QStyleOptionTitleBar _ZN20QStyleOptionTitleBarC2Ev(void);
extern QStyleOptionTitleBar _ZN20QStyleOptionTitleBarC1Ev(void);
extern QStyleOptionTitleBar _ZN20QStyleOptionTitleBarC2Ei(void);
extern QStyleOptionTitleBar _ZN20QStyleOptionTitleBarC1Ei(void);
extern QStyleOptionGroupBox _ZN20QStyleOptionGroupBoxC2Ev(void);
extern QStyleOptionGroupBox _ZN20QStyleOptionGroupBoxC1Ev(void);
extern QStyleOptionGroupBox _ZN20QStyleOptionGroupBoxC2Ei(void);
extern QStyleOptionGroupBox _ZN20QStyleOptionGroupBoxC1Ei(void);
extern QStyleHintReturn _ZN16QStyleHintReturnC2Eii(void);
extern QStyleHintReturn _ZN16QStyleHintReturnC1Eii(void);
extern QStyleHintReturn _ZN16QStyleHintReturnD2Ev(void);
extern QStyleHintReturn _ZN16QStyleHintReturnD1Ev(void);
extern QStyleHintReturnMask _ZN20QStyleHintReturnMaskC2Ev(void);
extern QStyleHintReturnMask _ZN20QStyleHintReturnMaskC1Ev(void);
// *INDENT-ON*
#endif
