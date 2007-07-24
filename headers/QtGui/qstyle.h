#ifndef _QTGUI_QSTYLE_H_
#define _QTGUI_QSTYLE_H_

#include <QtCore/qnamespace.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>
#include <QtCore/qpoint.h>
#include <QtCore/qrect.h>
#include <QtGui/qpalette.h>
#include <QtGui/qicon.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".." N6QStyle5StateE;

    typedef N6QStyle5StateE N6QStyle6SFlagsE;

    typedef Unknown Type:".." N6QStyle11SubControlsE;

    typedef N6QStyle11SubControlsE N6QStyle7SCFlagsE;

    Unknown Type:".Class.";

    enum N6QStyle9StateFlagE {
	State_None,
	State_Default,
	State_Enabled,
	State_Raised,
	State_Sunken,
	State_Off,
	State_NoChange,
	State_On,
	State_DownArrow,
	State_Horizontal,
	State_HasFocus,
	State_Top,
	State_Bottom,
	State_FocusAtBorder,
	State_AutoRaise,
	State_MouseOver,
	State_UpArrow,
	State_Selected,
	State_Active,
	State_Open,
	State_Children,
	State_Item,
	State_Sibling,
	State_Editing,
	State_KeyboardFocusChange,
	State_ReadOnly
    };

    Unknown Type:".Class.";

    enum N6QStyle16PrimitiveElementE {
	PE_Q3CheckListController,
	PE_Q3CheckListExclusiveIndicator,
	PE_Q3CheckListIndicator,
	PE_Q3DockWindowSeparator,
	PE_Q3Separator,
	PE_Frame,
	PE_FrameDefaultButton,
	PE_FrameDockWidget,
	PE_FrameFocusRect,
	PE_FrameGroupBox,
	PE_FrameLineEdit,
	PE_FrameMenu,
	PE_FrameStatusBar,
	PE_FrameTabWidget,
	PE_FrameWindow,
	PE_FrameButtonBevel,
	PE_FrameButtonTool,
	PE_FrameTabBarBase,
	PE_PanelButtonCommand,
	PE_PanelButtonBevel,
	PE_PanelButtonTool,
	PE_PanelMenuBar,
	PE_PanelToolBar,
	PE_PanelLineEdit,
	PE_IndicatorArrowDown,
	PE_IndicatorArrowLeft,
	PE_IndicatorArrowRight,
	PE_IndicatorArrowUp,
	PE_IndicatorBranch,
	PE_IndicatorButtonDropDown,
	PE_IndicatorViewItemCheck,
	PE_IndicatorCheckBox,
	PE_IndicatorDockWidgetResizeHandle,
	PE_IndicatorHeaderArrow,
	PE_IndicatorMenuCheckMark,
	PE_IndicatorProgressChunk,
	PE_IndicatorRadioButton,
	PE_IndicatorSpinDown,
	PE_IndicatorSpinMinus,
	PE_IndicatorSpinPlus,
	PE_IndicatorSpinUp,
	PE_IndicatorToolBarHandle,
	PE_IndicatorToolBarSeparator,
	PE_PanelTipLabel,
	PE_IndicatorTabTear,
	PE_CustomBase
    };

    enum N6QStyle14ControlElementE {
	CE_CustomBase,
	CE_PushButton,
	CE_PushButtonBevel,
	CE_PushButtonLabel,
	CE_CheckBox,
	CE_CheckBoxLabel,
	CE_RadioButton,
	CE_RadioButtonLabel,
	CE_TabBarTab,
	CE_TabBarTabShape,
	CE_TabBarTabLabel,
	CE_ProgressBar,
	CE_ProgressBarGroove,
	CE_ProgressBarContents,
	CE_ProgressBarLabel,
	CE_MenuItem,
	CE_MenuScroller,
	CE_MenuVMargin,
	CE_MenuHMargin,
	CE_MenuTearoff,
	CE_MenuEmptyArea,
	CE_MenuBarItem,
	CE_MenuBarEmptyArea,
	CE_ToolButtonLabel,
	CE_Header,
	CE_HeaderSection,
	CE_HeaderLabel,
	CE_Q3DockWindowEmptyArea,
	CE_ToolBoxTab,
	CE_SizeGrip,
	CE_Splitter,
	CE_RubberBand,
	CE_DockWidgetTitle,
	CE_ScrollBarAddLine,
	CE_ScrollBarSubLine,
	CE_ScrollBarAddPage,
	CE_ScrollBarSubPage,
	CE_ScrollBarSlider,
	CE_ScrollBarFirst,
	CE_ScrollBarLast,
	CE_FocusFrame,
	CE_ComboBoxLabel,
	CE_ToolBar
    };

    enum N6QStyle10SubElementE {
	SE_CustomBase,
	SE_PushButtonContents,
	SE_PushButtonFocusRect,
	SE_CheckBoxIndicator,
	SE_CheckBoxContents,
	SE_CheckBoxFocusRect,
	SE_CheckBoxClickRect,
	SE_RadioButtonIndicator,
	SE_RadioButtonContents,
	SE_RadioButtonFocusRect,
	SE_RadioButtonClickRect,
	SE_ComboBoxFocusRect,
	SE_SliderFocusRect,
	SE_Q3DockWindowHandleRect,
	SE_ProgressBarGroove,
	SE_ProgressBarContents,
	SE_ProgressBarLabel,
	SE_DialogButtonAccept,
	SE_DialogButtonReject,
	SE_DialogButtonApply,
	SE_DialogButtonHelp,
	SE_DialogButtonAll,
	SE_DialogButtonAbort,
	SE_DialogButtonIgnore,
	SE_DialogButtonRetry,
	SE_DialogButtonCustom,
	SE_ToolBoxTabContents,
	SE_HeaderLabel,
	SE_HeaderArrow,
	SE_TabWidgetTabBar,
	SE_TabWidgetTabPane,
	SE_TabWidgetTabContents,
	SE_TabWidgetLeftCorner,
	SE_TabWidgetRightCorner,
	SE_ViewItemCheckIndicator,
	SE_TabBarTearIndicator,
	SE_TreeViewDisclosureItem
    };

    enum N6QStyle14ComplexControlE {
	CC_CustomBase,
	CC_SpinBox,
	CC_ComboBox,
	CC_ScrollBar,
	CC_Slider,
	CC_ToolButton,
	CC_TitleBar,
	CC_Q3ListView,
	CC_Dial,
	CC_GroupBox
    };

    enum N6QStyle10SubControlE {
	SC_All,
	SC_None,
	SC_ScrollBarAddLine,
	SC_SpinBoxUp,
	SC_ComboBoxFrame,
	SC_SliderGroove,
	SC_ToolButton,
	SC_TitleBarSysMenu,
	SC_Q3ListView,
	SC_DialGroove,
	SC_GroupBoxCheckBox,
	SC_ScrollBarSubLine,
	SC_SpinBoxDown,
	SC_ComboBoxEditField,
	SC_SliderHandle,
	SC_ToolButtonMenu,
	SC_TitleBarMinButton,
	SC_Q3ListViewBranch,
	SC_DialHandle,
	SC_GroupBoxLabel,
	SC_ScrollBarAddPage,
	SC_SpinBoxFrame,
	SC_ComboBoxArrow,
	SC_SliderTickmarks,
	SC_TitleBarMaxButton,
	SC_Q3ListViewExpand,
	SC_DialTickmarks,
	SC_GroupBoxContents,
	SC_ScrollBarSubPage,
	SC_SpinBoxEditField,
	SC_ComboBoxListBoxPopup,
	SC_TitleBarCloseButton,
	SC_GroupBoxFrame,
	SC_ScrollBarFirst,
	SC_TitleBarNormalButton,
	SC_ScrollBarLast,
	SC_TitleBarShadeButton,
	SC_ScrollBarSlider,
	SC_TitleBarUnshadeButton,
	SC_ScrollBarGroove,
	SC_TitleBarContextHelpButton,
	SC_TitleBarLabel
    };

    Unknown Type:".Class.";

    enum N6QStyle11PixelMetricE {
	PM_CustomBase,
	PM_ButtonMargin,
	PM_ButtonDefaultIndicator,
	PM_MenuButtonIndicator,
	PM_ButtonShiftHorizontal,
	PM_ButtonShiftVertical,
	PM_DefaultFrameWidth,
	PM_SpinBoxFrameWidth,
	PM_ComboBoxFrameWidth,
	PM_MaximumDragDistance,
	PM_ScrollBarExtent,
	PM_ScrollBarSliderMin,
	PM_SliderThickness,
	PM_SliderControlThickness,
	PM_SliderLength,
	PM_SliderTickmarkOffset,
	PM_SliderSpaceAvailable,
	PM_DockWidgetSeparatorExtent,
	PM_DockWidgetHandleExtent,
	PM_DockWidgetFrameWidth,
	PM_TabBarTabOverlap,
	PM_TabBarTabHSpace,
	PM_TabBarTabVSpace,
	PM_TabBarBaseHeight,
	PM_TabBarBaseOverlap,
	PM_ProgressBarChunkWidth,
	PM_SplitterWidth,
	PM_TitleBarHeight,
	PM_MenuScrollerHeight,
	PM_MenuHMargin,
	PM_MenuVMargin,
	PM_MenuPanelWidth,
	PM_MenuTearoffHeight,
	PM_MenuDesktopFrameWidth,
	PM_MenuBarPanelWidth,
	PM_MenuBarItemSpacing,
	PM_MenuBarVMargin,
	PM_MenuBarHMargin,
	PM_IndicatorWidth,
	PM_IndicatorHeight,
	PM_ExclusiveIndicatorWidth,
	PM_ExclusiveIndicatorHeight,
	PM_CheckListButtonSize,
	PM_CheckListControllerSize,
	PM_DialogButtonsSeparator,
	PM_DialogButtonsButtonWidth,
	PM_DialogButtonsButtonHeight,
	PM_MDIFrameWidth,
	PM_MDIMinimizedWidth,
	PM_HeaderMargin,
	PM_HeaderMarkSize,
	PM_HeaderGripMargin,
	PM_TabBarTabShiftHorizontal,
	PM_TabBarTabShiftVertical,
	PM_TabBarScrollButtonWidth,
	PM_ToolBarFrameWidth,
	PM_ToolBarHandleExtent,
	PM_ToolBarItemSpacing,
	PM_ToolBarItemMargin,
	PM_ToolBarSeparatorExtent,
	PM_ToolBarExtensionExtent,
	PM_SpinBoxSliderHeight,
	PM_DefaultTopLevelMargin,
	PM_DefaultChildMargin,
	PM_DefaultLayoutSpacing,
	PM_ToolBarIconSize,
	PM_ListViewIconSize,
	PM_IconViewIconSize,
	PM_SmallIconSize,
	PM_LargeIconSize,
	PM_FocusFrameVMargin,
	PM_FocusFrameHMargin,
	PM_ToolTipLabelFrameWidth,
	PM_CheckBoxLabelSpacing,
	PM_TabBarIconSize,
	PM_SizeGripSize,
	PM_DockWidgetTitleMargin
    };

    enum N6QStyle12ContentsTypeE {
	CT_CustomBase,
	CT_PushButton,
	CT_CheckBox,
	CT_RadioButton,
	CT_ToolButton,
	CT_ComboBox,
	CT_Splitter,
	CT_Q3DockWindow,
	CT_ProgressBar,
	CT_MenuItem,
	CT_MenuBarItem,
	CT_MenuBar,
	CT_Menu,
	CT_TabBarTab,
	CT_Slider,
	CT_ScrollBar,
	CT_Q3Header,
	CT_LineEdit,
	CT_SpinBox,
	CT_SizeGrip,
	CT_TabWidget,
	CT_DialogButtons,
	CT_HeaderSection,
	CT_GroupBox
    };

    enum N6QStyle9StyleHintE {
	SH_CustomBase,
	SH_EtchDisabledText,
	SH_DitherDisabledText,
	SH_ScrollBar_MiddleClickAbsolutePosition,
	SH_ScrollBar_ScrollWhenPointerLeavesControl,
	SH_TabBar_SelectMouseType,
	SH_TabBar_Alignment,
	SH_Header_ArrowAlignment,
	SH_Slider_SnapToValue,
	SH_Slider_SloppyKeyEvents,
	SH_ProgressDialog_CenterCancelButton,
	SH_ProgressDialog_TextLabelAlignment,
	SH_PrintDialog_RightAlignButtons,
	SH_MainWindow_SpaceBelowMenuBar,
	SH_FontDialog_SelectAssociatedText,
	SH_Menu_AllowActiveAndDisabled,
	SH_Menu_SpaceActivatesItem,
	SH_Menu_SubMenuPopupDelay,
	SH_ScrollView_FrameOnlyAroundContents,
	SH_MenuBar_AltKeyNavigation,
	SH_ComboBox_ListMouseTracking,
	SH_Menu_MouseTracking,
	SH_MenuBar_MouseTracking,
	SH_ItemView_ChangeHighlightOnFocus,
	SH_Widget_ShareActivation,
	SH_Workspace_FillSpaceOnMaximize,
	SH_ComboBox_Popup,
	SH_TitleBar_NoBorder,
	SH_ScrollBar_StopMouseOverSlider,
	SH_BlinkCursorWhenTextSelected,
	SH_RichText_FullWidthSelection,
	SH_Menu_Scrollable,
	SH_GroupBox_TextLabelVerticalAlignment,
	SH_GroupBox_TextLabelColor,
	SH_Menu_SloppySubMenus,
	SH_Table_GridLineColor,
	SH_LineEdit_PasswordCharacter,
	SH_DialogButtons_DefaultButton,
	SH_ToolBox_SelectedPageTitleBold,
	SH_TabBar_PreferNoArrows,
	SH_ScrollBar_LeftClickAbsolutePosition,
	SH_Q3ListViewExpand_SelectMouseType,
	SH_UnderlineShortcut,
	SH_UnderlineAccelerator,
	SH_SpinBox_AnimateButton,
	SH_SpinBox_KeyPressAutoRepeatRate,
	SH_SpinBox_ClickAutoRepeatRate,
	SH_Menu_FillScreenWithScroll,
	SH_ToolTipLabel_Opacity,
	SH_DrawMenuBarSeparator,
	SH_TitleBar_ModifyNotification,
	SH_Button_FocusPolicy,
	SH_MenuBar_DismissOnSecondClick,
	SH_MessageBox_UseBorderForButtonSpacing,
	SH_TitleBar_AutoRaise,
	SH_ToolButton_PopupDelay,
	SH_FocusFrame_Mask,
	SH_RubberBand_Mask,
	SH_WindowFrame_Mask,
	SH_SpinControls_DisableOnBounds,
	SH_Dial_BackgroundRole,
	SH_ComboBox_LayoutDirection,
	SH_ItemView_EllipsisLocation,
	SH_ItemView_ShowDecorationSelected,
	SH_ItemView_ActivateItemOnSingleClick,
	SH_ScrollBar_ContextMenu,
	SH_ScrollBar_RollBetweenButtons,
	SH_GUIStyle,
	SH_ScrollBar_BackgroundMode
    };

    enum N6QStyle14StandardPixmapE {
	SP_CustomBase,
	SP_TitleBarMenuButton,
	SP_TitleBarMinButton,
	SP_TitleBarMaxButton,
	SP_TitleBarCloseButton,
	SP_TitleBarNormalButton,
	SP_TitleBarShadeButton,
	SP_TitleBarUnshadeButton,
	SP_TitleBarContextHelpButton,
	SP_DockWidgetCloseButton,
	SP_MessageBoxInformation,
	SP_MessageBoxWarning,
	SP_MessageBoxCritical,
	SP_MessageBoxQuestion,
	SP_DesktopIcon,
	SP_TrashIcon,
	SP_ComputerIcon,
	SP_DriveFDIcon,
	SP_DriveHDIcon,
	SP_DriveCDIcon,
	SP_DriveDVDIcon,
	SP_DriveNetIcon,
	SP_DirOpenIcon,
	SP_DirClosedIcon,
	SP_DirLinkIcon,
	SP_FileIcon,
	SP_FileLinkIcon,
	SP_ToolBarHorizontalExtensionButton,
	SP_ToolBarVerticalExtensionButton,
	SP_FileDialogStart,
	SP_FileDialogEnd,
	SP_FileDialogToParent,
	SP_FileDialogNewFolder,
	SP_FileDialogDetailedView,
	SP_FileDialogInfoView,
	SP_FileDialogContentsView,
	SP_FileDialogListView,
	SP_FileDialogBack
    };


    extern struct QMetaObject _ZN6QStyle16staticMetaObjectE;
    extern struct QMetaObject _ZNK6QStyle10metaObjectEv(void);
    extern void _ZN6QStyle11qt_metacastEPKc(void);
    extern int _ZN6QStyle11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN6QStyleC2ER13QStylePrivate(void);
    extern Class _ZN6QStyleC1ER13QStylePrivate(void);
    extern Class _ZN6QStyleC2Ev(void);
    extern Class _ZN6QStyleC1Ev(void);
    extern Class _ZN6QStyleD2Ev(void);
    extern Class _ZN6QStyleD1Ev(void);
    extern Class _ZN6QStyleD0Ev(void);
    extern void _ZN6QStyle6polishEP7QWidget(void);
    extern void _ZN6QStyle8unpolishEP7QWidget(void);
    extern void _ZN6QStyle6polishEP12QApplication(void);
    extern void _ZN6QStyle8unpolishEP12QApplication(void);
    extern void _ZN6QStyle6polishER8QPalette(void);
    extern Class
	_ZNK6QStyle12itemTextRectERK12QFontMetricsRK5QRectibRK7QString
	(void);
    extern Class _ZNK6QStyle14itemPixmapRectERK5QRectiRK7QPixmap(void);
    extern void
	_ZNK6QStyle12drawItemTextEP8QPainterRK5QRectiRK8QPalettebRK7QStringNS5_9ColorRoleE
	(void);
    extern void
	_ZNK6QStyle14drawItemPixmapEP8QPainterRK5QRectiRK7QPixmap(void);
    extern Class _ZNK6QStyle15standardPaletteEv(void);
    extern Class
	_ZNK6QStyle12standardIconENS_14StandardPixmapEPK12QStyleOptionPK7QWidget
	(void);
    extern Class
	_ZN6QStyle10visualRectEN2Qt15LayoutDirectionERK5QRectS4_(void);
    extern Class
	_ZN6QStyle9visualPosEN2Qt15LayoutDirectionERK5QRectRK6QPoint(void);
    extern int _ZN6QStyle23sliderPositionFromValueEiiiib(void);
    extern int _ZN6QStyle23sliderValueFromPositionEiiiib(void);
    extern N2Qt9AlignmentE
	_ZN6QStyle15visualAlignmentEN2Qt15LayoutDirectionE6QFlagsINS0_13AlignmentFlagEE
	(void);
    extern Class
	_ZN6QStyle11alignedRectEN2Qt15LayoutDirectionE6QFlagsINS0_13AlignmentFlagEERK5QSizeRK5QRect
	(void);
    extern Class
	_ZNK6QStyle26standardIconImplementationENS_14StandardPixmapEPK12QStyleOptionPK7QWidget
	(void);
#ifdef __cplusplus
}
#endif
#endif
