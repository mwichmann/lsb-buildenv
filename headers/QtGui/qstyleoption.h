#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QSTYLEOPTION_H_
#define _QTGUI_QSTYLEOPTION_H_

class QStyleOptionButton;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef class QFlags<QStyleOptionFrameV2::FrameFeature>
{
private:
public:
}FrameFeatures	
;

typedef class QFlags<QStyleOptionButton::ButtonFeature>
{
private:
public:
}ButtonFeatures	
;

typedef class QFlags<QStyleOptionTab::CornerWidget>
{
private:
public:
}CornerWidgets	
;

typedef class QFlags<QStyleOptionToolBar::ToolBarFeature>
{
private:
public:
}ToolBarFeatures	
;

typedef class QFlags<QStyleOptionQ3ListViewItem::Q3ListViewItemFeature>
{
private:
public:
}Q3ListViewItemFeatures	
;

typedef class QFlags<QStyleOptionToolButton::ToolButtonFeature>
{
private:
public:
}ToolButtonFeatures	
;

#endif // __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31
class QStyleOption
{
private:
public:
     QStyleOption(int, int);
     QStyleOption(QStyleOption const&);
     ~QStyleOption();
    void init(QWidget const*);
     operator=(QStyleOption const&);
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
     QStyleOptionFocusRect();
     QStyleOptionFocusRect(int);
};

class QStyleOptionFrame :  
{
private:
public:
     QStyleOptionFrame();
     QStyleOptionFrame(int);
};

class QStyleOptionFrameV2 :  
{
private:
public:
     QStyleOptionFrameV2();
     QStyleOptionFrameV2(QStyleOptionFrame const&);
     operator=(QStyleOptionFrame const&);
     QStyleOptionFrameV2(int);
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
     QStyleOptionTabWidgetFrame();
     QStyleOptionTabWidgetFrame(int);
};

class QStyleOptionTabBarBase :  
{
private:
public:
     QStyleOptionTabBarBase();
     QStyleOptionTabBarBase(int);
};

class QStyleOptionHeader :  
{
private:
public:
     QStyleOptionHeader();
     QStyleOptionHeader(int);
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
     QStyleOptionButton();
     QStyleOptionButton(int);
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
     QStyleOptionTab();
     QStyleOptionTab(int);
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
     QStyleOptionTabV2();
     QStyleOptionTabV2(QStyleOptionTab const&);
     operator=(QStyleOptionTab const&);
     QStyleOptionTabV2(int);
};

class QStyleOptionToolBar :  
{
private:
public:
     QStyleOptionToolBar();
     QStyleOptionToolBar(int);
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
     QStyleOptionProgressBar();
     QStyleOptionProgressBar(int);
};

class QStyleOptionProgressBarV2 :  
{
private:
public:
     QStyleOptionProgressBarV2();
     QStyleOptionProgressBarV2(QStyleOptionProgressBar const&);
     QStyleOptionProgressBarV2(QStyleOptionProgressBarV2 const&);
     operator=(QStyleOptionProgressBar const&);
     QStyleOptionProgressBarV2(int);
};

class QStyleOptionMenuItem :  
{
private:
public:
     QStyleOptionMenuItem();
     QStyleOptionMenuItem(int);
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
     QStyleOptionQ3ListViewItem();
     QStyleOptionQ3ListViewItem(int);
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
     QStyleOptionQ3DockWindow();
     QStyleOptionQ3DockWindow(int);
};

class QStyleOptionDockWidget :  
{
private:
public:
     QStyleOptionDockWidget();
     QStyleOptionDockWidget(int);
};

class QStyleOptionViewItem :  
{
private:
public:
     QStyleOptionViewItem();
     QStyleOptionViewItem(int);
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
     QStyleOptionToolBox();
     QStyleOptionToolBox(int);
};

class QStyleOptionRubberBand :  
{
private:
public:
     QStyleOptionRubberBand();
     QStyleOptionRubberBand(int);
};

class QStyleOptionComplex :  
{
private:
public:
     QStyleOptionComplex(int, int);
};

class QStyleOptionSlider :  
{
private:
public:
     QStyleOptionSlider();
     QStyleOptionSlider(int);
};

class QStyleOptionSpinBox :  
{
private:
public:
     QStyleOptionSpinBox();
     QStyleOptionSpinBox(int);
};

class QStyleOptionQ3ListView :  
{
private:
public:
     QStyleOptionQ3ListView();
     QStyleOptionQ3ListView(int);
};

class QStyleOptionToolButton :  
{
private:
public:
     QStyleOptionToolButton();
     QStyleOptionToolButton(int);
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
     QStyleOptionComboBox();
     QStyleOptionComboBox(int);
};

class QStyleOptionTitleBar :  
{
private:
public:
     QStyleOptionTitleBar();
     QStyleOptionTitleBar(int);
};

class QStyleOptionGroupBox :  
{
private:
public:
     QStyleOptionGroupBox();
     QStyleOptionGroupBox(int);
};

class QStyleHintReturn
{
private:
public:
     QStyleHintReturn(int, int);
     ~QStyleHintReturn();
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
     QStyleHintReturnMask();
};

#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
