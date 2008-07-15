#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QSTYLE_H_
#define _QTGUI_QSTYLE_H_

class QFlags < QStyle::SubControl >;
// *INDENT-OFF*

typedef class QFlags<QStyle::StateFlag>
{
private:
public:
}State	
;

typedef State	SFlags	
;

typedef class QFlags<QStyle::SubControl>
{
private:
public:
}SubControls	
;

typedef SubControls	SCFlags	
;

class QStyle : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QStyle();
     ~QStyle();
    void polish(QWidget*);
    void unpolish(QWidget*);
    void polish(QApplication*);
    void unpolish(QApplication*);
    void polish(QPalette&);
    QRect itemTextRect(QFontMetrics const&, QRect const&, int, bool, QString const&) const;
    QRect itemPixmapRect(QRect const&, int, QPixmap const&) const;
    void drawItemText(QPainter*, QRect const&, int, QPalette const&, bool, QString const&, QPalette::ColorRole) const;
    void drawItemPixmap(QPainter*, QRect const&, int, QPixmap const&) const;
    QPalette standardPalette() const;
    QIcon standardIcon(QStyle::StandardPixmap, QStyleOption const*, QWidget const*) const;
    QRect visualRect(Qt::LayoutDirection, QRect const&, QRect const&);
    QPoint visualPos(Qt::LayoutDirection, QRect const&, QPoint const&);
    int sliderPositionFromValue(int, int, int, int, bool);
    int sliderValueFromPosition(int, int, int, int, bool);
     visualAlignment(Qt::LayoutDirection, QFlags<Qt::AlignmentFlag>);
    QRect alignedRect(Qt::LayoutDirection, QFlags<Qt::AlignmentFlag>, QSize const&, QRect const&);
protected:
    QIcon standardIconImplementation(QStyle::StandardPixmap, QStyleOption const*, QWidget const*) const;
};

enum StateFlag	
{
State_None = 0,	
State_Default = 0,	
State_Enabled = 1,	
State_Raised = 2,	
State_Sunken = 4,	
State_Off = 8,	
State_NoChange = 16,	
State_On = 32,	
State_DownArrow = 64,	
State_Horizontal = 128,	
State_HasFocus = 256,	
State_Top = 512,	
State_Bottom = 1024,	
State_FocusAtBorder = 2048,	
State_AutoRaise = 4096,	
State_MouseOver = 8192,	
State_UpArrow = 16384,	
State_Selected = 32768,	
State_Active = 65536,	
State_Open = 262144,	
State_Children = 524288,	
State_Item = 1048576,	
State_Sibling = 2097152,	
State_Editing = 4194304,	
State_KeyboardFocusChange = 8388608,	
State_ReadOnly = 33554432
}
;

class QFlags<QStyle::StateFlag>
{
private:
public:
};

enum PrimitiveElement	
{
PE_Q3CheckListController = 0,	
PE_Q3CheckListExclusiveIndicator = 1,	
PE_Q3CheckListIndicator = 2,	
PE_Q3DockWindowSeparator = 3,	
PE_Q3Separator = 4,	
PE_Frame = 5,	
PE_FrameDefaultButton = 6,	
PE_FrameDockWidget = 7,	
PE_FrameFocusRect = 8,	
PE_FrameGroupBox = 9,	
PE_FrameLineEdit = 10,	
PE_FrameMenu = 11,	
PE_FrameStatusBar = 12,	
PE_FrameTabWidget = 13,	
PE_FrameWindow = 14,	
PE_FrameButtonBevel = 15,	
PE_FrameButtonTool = 16,	
PE_FrameTabBarBase = 17,	
PE_PanelButtonCommand = 18,	
PE_PanelButtonBevel = 19,	
PE_PanelButtonTool = 20,	
PE_PanelMenuBar = 21,	
PE_PanelToolBar = 22,	
PE_PanelLineEdit = 23,	
PE_IndicatorArrowDown = 24,	
PE_IndicatorArrowLeft = 25,	
PE_IndicatorArrowRight = 26,	
PE_IndicatorArrowUp = 27,	
PE_IndicatorBranch = 28,	
PE_IndicatorButtonDropDown = 29,	
PE_IndicatorViewItemCheck = 30,	
PE_IndicatorCheckBox = 31,	
PE_IndicatorDockWidgetResizeHandle = 32,	
PE_IndicatorHeaderArrow = 33,	
PE_IndicatorMenuCheckMark = 34,	
PE_IndicatorProgressChunk = 35,	
PE_IndicatorRadioButton = 36,	
PE_IndicatorSpinDown = 37,	
PE_IndicatorSpinMinus = 38,	
PE_IndicatorSpinPlus = 39,	
PE_IndicatorSpinUp = 40,	
PE_IndicatorToolBarHandle = 41,	
PE_IndicatorToolBarSeparator = 42,	
PE_PanelTipLabel = 43,	
PE_IndicatorTabTear = 44,	
PE_CustomBase = 251658240
}
;

enum ControlElement	
{
CE_CustomBase = -268435456,	
CE_PushButton = 0,	
CE_PushButtonBevel = 1,	
CE_PushButtonLabel = 2,	
CE_CheckBox = 3,	
CE_CheckBoxLabel = 4,	
CE_RadioButton = 5,	
CE_RadioButtonLabel = 6,	
CE_TabBarTab = 7,	
CE_TabBarTabShape = 8,	
CE_TabBarTabLabel = 9,	
CE_ProgressBar = 10,	
CE_ProgressBarGroove = 11,	
CE_ProgressBarContents = 12,	
CE_ProgressBarLabel = 13,	
CE_MenuItem = 14,	
CE_MenuScroller = 15,	
CE_MenuVMargin = 16,	
CE_MenuHMargin = 17,	
CE_MenuTearoff = 18,	
CE_MenuEmptyArea = 19,	
CE_MenuBarItem = 20,	
CE_MenuBarEmptyArea = 21,	
CE_ToolButtonLabel = 22,	
CE_Header = 23,	
CE_HeaderSection = 24,	
CE_HeaderLabel = 25,	
CE_Q3DockWindowEmptyArea = 26,	
CE_ToolBoxTab = 27,	
CE_SizeGrip = 28,	
CE_Splitter = 29,	
CE_RubberBand = 30,	
CE_DockWidgetTitle = 31,	
CE_ScrollBarAddLine = 32,	
CE_ScrollBarSubLine = 33,	
CE_ScrollBarAddPage = 34,	
CE_ScrollBarSubPage = 35,	
CE_ScrollBarSlider = 36,	
CE_ScrollBarFirst = 37,	
CE_ScrollBarLast = 38,	
CE_FocusFrame = 39,	
CE_ComboBoxLabel = 40,	
CE_ToolBar = 41
}
;

enum SubElement	
{
SE_CustomBase = -268435456,	
SE_PushButtonContents = 0,	
SE_PushButtonFocusRect = 1,	
SE_CheckBoxIndicator = 2,	
SE_CheckBoxContents = 3,	
SE_CheckBoxFocusRect = 4,	
SE_CheckBoxClickRect = 5,	
SE_RadioButtonIndicator = 6,	
SE_RadioButtonContents = 7,	
SE_RadioButtonFocusRect = 8,	
SE_RadioButtonClickRect = 9,	
SE_ComboBoxFocusRect = 10,	
SE_SliderFocusRect = 11,	
SE_Q3DockWindowHandleRect = 12,	
SE_ProgressBarGroove = 13,	
SE_ProgressBarContents = 14,	
SE_ProgressBarLabel = 15,	
SE_DialogButtonAccept = 16,	
SE_DialogButtonReject = 17,	
SE_DialogButtonApply = 18,	
SE_DialogButtonHelp = 19,	
SE_DialogButtonAll = 20,	
SE_DialogButtonAbort = 21,	
SE_DialogButtonIgnore = 22,	
SE_DialogButtonRetry = 23,	
SE_DialogButtonCustom = 24,	
SE_ToolBoxTabContents = 25,	
SE_HeaderLabel = 26,	
SE_HeaderArrow = 27,	
SE_TabWidgetTabBar = 28,	
SE_TabWidgetTabPane = 29,	
SE_TabWidgetTabContents = 30,	
SE_TabWidgetLeftCorner = 31,	
SE_TabWidgetRightCorner = 32,	
SE_ViewItemCheckIndicator = 33,	
SE_TabBarTearIndicator = 34,	
SE_TreeViewDisclosureItem = 35
}
;

enum ComplexControl	
{
CC_CustomBase = -268435456,	
CC_SpinBox = 0,	
CC_ComboBox = 1,	
CC_ScrollBar = 2,	
CC_Slider = 3,	
CC_ToolButton = 4,	
CC_TitleBar = 5,	
CC_Q3ListView = 6,	
CC_Dial = 7,	
CC_GroupBox = 8
}
;

enum SubControl	
{
SC_All = -1,	
SC_None = 0,	
SC_SliderGroove = 1,	
SC_ToolButton = 1,	
SC_ComboBoxFrame = 1,	
SC_TitleBarSysMenu = 1,	
SC_SpinBoxUp = 1,	
SC_ScrollBarAddLine = 1,	
SC_DialGroove = 1,	
SC_Q3ListView = 1,	
SC_GroupBoxCheckBox = 1,	
SC_Q3ListViewBranch = 2,	
SC_TitleBarMinButton = 2,	
SC_SpinBoxDown = 2,	
SC_DialHandle = 2,	
SC_SliderHandle = 2,	
SC_GroupBoxLabel = 2,	
SC_ToolButtonMenu = 2,	
SC_ScrollBarSubLine = 2,	
SC_ComboBoxEditField = 2,	
SC_GroupBoxContents = 4,	
SC_ScrollBarAddPage = 4,	
SC_Q3ListViewExpand = 4,	
SC_DialTickmarks = 4,	
SC_TitleBarMaxButton = 4,	
SC_SpinBoxFrame = 4,	
SC_ComboBoxArrow = 4,	
SC_SliderTickmarks = 4,	
SC_GroupBoxFrame = 8,	
SC_SpinBoxEditField = 8,	
SC_ComboBoxListBoxPopup = 8,	
SC_ScrollBarSubPage = 8,	
SC_TitleBarCloseButton = 8,	
SC_ScrollBarFirst = 16,	
SC_TitleBarNormalButton = 16,	
SC_ScrollBarLast = 32,	
SC_TitleBarShadeButton = 32,	
SC_ScrollBarSlider = 64,	
SC_TitleBarUnshadeButton = 64,	
SC_ScrollBarGroove = 128,	
SC_TitleBarContextHelpButton = 128,	
SC_TitleBarLabel = 256
}
;

class QFlags<QStyle::SubControl>
{
private:
public:
};

enum PixelMetric	
{
PM_CustomBase = -268435456,	
PM_ButtonMargin = 0,	
PM_ButtonDefaultIndicator = 1,	
PM_MenuButtonIndicator = 2,	
PM_ButtonShiftHorizontal = 3,	
PM_ButtonShiftVertical = 4,	
PM_DefaultFrameWidth = 5,	
PM_SpinBoxFrameWidth = 6,	
PM_ComboBoxFrameWidth = 7,	
PM_MaximumDragDistance = 8,	
PM_ScrollBarExtent = 9,	
PM_ScrollBarSliderMin = 10,	
PM_SliderThickness = 11,	
PM_SliderControlThickness = 12,	
PM_SliderLength = 13,	
PM_SliderTickmarkOffset = 14,	
PM_SliderSpaceAvailable = 15,	
PM_DockWidgetSeparatorExtent = 16,	
PM_DockWidgetHandleExtent = 17,	
PM_DockWidgetFrameWidth = 18,	
PM_TabBarTabOverlap = 19,	
PM_TabBarTabHSpace = 20,	
PM_TabBarTabVSpace = 21,	
PM_TabBarBaseHeight = 22,	
PM_TabBarBaseOverlap = 23,	
PM_ProgressBarChunkWidth = 24,	
PM_SplitterWidth = 25,	
PM_TitleBarHeight = 26,	
PM_MenuScrollerHeight = 27,	
PM_MenuHMargin = 28,	
PM_MenuVMargin = 29,	
PM_MenuPanelWidth = 30,	
PM_MenuTearoffHeight = 31,	
PM_MenuDesktopFrameWidth = 32,	
PM_MenuBarPanelWidth = 33,	
PM_MenuBarItemSpacing = 34,	
PM_MenuBarVMargin = 35,	
PM_MenuBarHMargin = 36,	
PM_IndicatorWidth = 37,	
PM_IndicatorHeight = 38,	
PM_ExclusiveIndicatorWidth = 39,	
PM_ExclusiveIndicatorHeight = 40,	
PM_CheckListButtonSize = 41,	
PM_CheckListControllerSize = 42,	
PM_DialogButtonsSeparator = 43,	
PM_DialogButtonsButtonWidth = 44,	
PM_DialogButtonsButtonHeight = 45,	
PM_MDIFrameWidth = 46,	
PM_MDIMinimizedWidth = 47,	
PM_HeaderMargin = 48,	
PM_HeaderMarkSize = 49,	
PM_HeaderGripMargin = 50,	
PM_TabBarTabShiftHorizontal = 51,	
PM_TabBarTabShiftVertical = 52,	
PM_TabBarScrollButtonWidth = 53,	
PM_ToolBarFrameWidth = 54,	
PM_ToolBarHandleExtent = 55,	
PM_ToolBarItemSpacing = 56,	
PM_ToolBarItemMargin = 57,	
PM_ToolBarSeparatorExtent = 58,	
PM_ToolBarExtensionExtent = 59,	
PM_SpinBoxSliderHeight = 60,	
PM_DefaultTopLevelMargin = 61,	
PM_DefaultChildMargin = 62,	
PM_DefaultLayoutSpacing = 63,	
PM_ToolBarIconSize = 64,	
PM_ListViewIconSize = 65,	
PM_IconViewIconSize = 66,	
PM_SmallIconSize = 67,	
PM_LargeIconSize = 68,	
PM_FocusFrameVMargin = 69,	
PM_FocusFrameHMargin = 70,	
PM_ToolTipLabelFrameWidth = 71,	
PM_CheckBoxLabelSpacing = 72,	
PM_TabBarIconSize = 73,	
PM_SizeGripSize = 74,	
PM_DockWidgetTitleMargin = 75
}
;

enum ContentsType	
{
CT_CustomBase = -268435456,	
CT_PushButton = 0,	
CT_CheckBox = 1,	
CT_RadioButton = 2,	
CT_ToolButton = 3,	
CT_ComboBox = 4,	
CT_Splitter = 5,	
CT_Q3DockWindow = 6,	
CT_ProgressBar = 7,	
CT_MenuItem = 8,	
CT_MenuBarItem = 9,	
CT_MenuBar = 10,	
CT_Menu = 11,	
CT_TabBarTab = 12,	
CT_Slider = 13,	
CT_ScrollBar = 14,	
CT_Q3Header = 15,	
CT_LineEdit = 16,	
CT_SpinBox = 17,	
CT_SizeGrip = 18,	
CT_TabWidget = 19,	
CT_DialogButtons = 20,	
CT_HeaderSection = 21,	
CT_GroupBox = 22
}
;

enum StyleHint	
{
SH_CustomBase = -268435456,	
SH_EtchDisabledText = 0,	
SH_DitherDisabledText = 1,	
SH_ScrollBar_MiddleClickAbsolutePosition = 2,	
SH_ScrollBar_ScrollWhenPointerLeavesControl = 3,	
SH_TabBar_SelectMouseType = 4,	
SH_TabBar_Alignment = 5,	
SH_Header_ArrowAlignment = 6,	
SH_Slider_SnapToValue = 7,	
SH_Slider_SloppyKeyEvents = 8,	
SH_ProgressDialog_CenterCancelButton = 9,	
SH_ProgressDialog_TextLabelAlignment = 10,	
SH_PrintDialog_RightAlignButtons = 11,	
SH_MainWindow_SpaceBelowMenuBar = 12,	
SH_FontDialog_SelectAssociatedText = 13,	
SH_Menu_AllowActiveAndDisabled = 14,	
SH_Menu_SpaceActivatesItem = 15,	
SH_Menu_SubMenuPopupDelay = 16,	
SH_ScrollView_FrameOnlyAroundContents = 17,	
SH_MenuBar_AltKeyNavigation = 18,	
SH_ComboBox_ListMouseTracking = 19,	
SH_Menu_MouseTracking = 20,	
SH_MenuBar_MouseTracking = 21,	
SH_ItemView_ChangeHighlightOnFocus = 22,	
SH_Widget_ShareActivation = 23,	
SH_Workspace_FillSpaceOnMaximize = 24,	
SH_ComboBox_Popup = 25,	
SH_TitleBar_NoBorder = 26,	
SH_ScrollBar_StopMouseOverSlider = 27,	
SH_BlinkCursorWhenTextSelected = 28,	
SH_RichText_FullWidthSelection = 29,	
SH_Menu_Scrollable = 30,	
SH_GroupBox_TextLabelVerticalAlignment = 31,	
SH_GroupBox_TextLabelColor = 32,	
SH_Menu_SloppySubMenus = 33,	
SH_Table_GridLineColor = 34,	
SH_LineEdit_PasswordCharacter = 35,	
SH_DialogButtons_DefaultButton = 36,	
SH_ToolBox_SelectedPageTitleBold = 37,	
SH_TabBar_PreferNoArrows = 38,	
SH_ScrollBar_LeftClickAbsolutePosition = 39,	
SH_Q3ListViewExpand_SelectMouseType = 40,	
SH_UnderlineShortcut = 41,	
SH_UnderlineAccelerator = 41,	
SH_SpinBox_AnimateButton = 42,	
SH_SpinBox_KeyPressAutoRepeatRate = 43,	
SH_SpinBox_ClickAutoRepeatRate = 44,	
SH_Menu_FillScreenWithScroll = 45,	
SH_ToolTipLabel_Opacity = 46,	
SH_DrawMenuBarSeparator = 47,	
SH_TitleBar_ModifyNotification = 48,	
SH_Button_FocusPolicy = 49,	
SH_MenuBar_DismissOnSecondClick = 50,	
SH_MessageBox_UseBorderForButtonSpacing = 51,	
SH_TitleBar_AutoRaise = 52,	
SH_ToolButton_PopupDelay = 53,	
SH_FocusFrame_Mask = 54,	
SH_RubberBand_Mask = 55,	
SH_WindowFrame_Mask = 56,	
SH_SpinControls_DisableOnBounds = 57,	
SH_Dial_BackgroundRole = 58,	
SH_ComboBox_LayoutDirection = 59,	
SH_ItemView_EllipsisLocation = 60,	
SH_ItemView_ShowDecorationSelected = 61,	
SH_ItemView_ActivateItemOnSingleClick = 62,	
SH_ScrollBar_ContextMenu = 63,	
SH_ScrollBar_RollBetweenButtons = 64,	
SH_GUIStyle = 256,	
SH_ScrollBar_BackgroundMode = 257
}
;

enum StandardPixmap	
{
SP_CustomBase = -268435456,	
SP_TitleBarMenuButton = 0,	
SP_TitleBarMinButton = 1,	
SP_TitleBarMaxButton = 2,	
SP_TitleBarCloseButton = 3,	
SP_TitleBarNormalButton = 4,	
SP_TitleBarShadeButton = 5,	
SP_TitleBarUnshadeButton = 6,	
SP_TitleBarContextHelpButton = 7,	
SP_DockWidgetCloseButton = 8,	
SP_MessageBoxInformation = 9,	
SP_MessageBoxWarning = 10,	
SP_MessageBoxCritical = 11,	
SP_MessageBoxQuestion = 12,	
SP_DesktopIcon = 13,	
SP_TrashIcon = 14,	
SP_ComputerIcon = 15,	
SP_DriveFDIcon = 16,	
SP_DriveHDIcon = 17,	
SP_DriveCDIcon = 18,	
SP_DriveDVDIcon = 19,	
SP_DriveNetIcon = 20,	
SP_DirOpenIcon = 21,	
SP_DirClosedIcon = 22,	
SP_DirLinkIcon = 23,	
SP_FileIcon = 24,	
SP_FileLinkIcon = 25,	
SP_ToolBarHorizontalExtensionButton = 26,	
SP_ToolBarVerticalExtensionButton = 27,	
SP_FileDialogStart = 28,	
SP_FileDialogEnd = 29,	
SP_FileDialogToParent = 30,	
SP_FileDialogNewFolder = 31,	
SP_FileDialogDetailedView = 32,	
SP_FileDialogInfoView = 33,	
SP_FileDialogContentsView = 34,	
SP_FileDialogListView = 35,	
SP_FileDialogBack = 36
}
;


/* Function prototypes */

extern struct QMetaObject _ZN6QStyle16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
