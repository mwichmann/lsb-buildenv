#ifndef _QTGUI_QWIDGET_H_
#define _QTGUI_QWIDGET_H_

#include <QtCore/qnamespace.h>
#include <QtCore/qglobal.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qstring.h>
#include <QtCore/qobject.h>
#include <QtCore/qvariant.h>
#include <QtCore/qpoint.h>
#include <QtCore/qsize.h>
#include <QtCore/qrect.h>
#include <QtGui/qregion.h>
#include <QtGui/qpalette.h>
#include <QtGui/qsizepolicy.h>
#include <QtGui/qcursor.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    Unknown Type:".Class.";

    enum N7QWidget16BackgroundOriginE {
	WidgetOrigin,
	ParentOrigin,
	WindowOrigin,
	AncestorOrigin
    };


    extern struct QMetaObject _ZN7QWidget16staticMetaObjectE;
    extern struct QMetaObject _ZNK7QWidget10metaObjectEv(void);
    extern void _ZN7QWidget11qt_metacastEPKc(void);
    extern int _ZN7QWidget11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN7QWidgetC2EPS_6QFlagsIN2Qt10WindowTypeEE(void);
    extern Class _ZN7QWidgetC1EPS_6QFlagsIN2Qt10WindowTypeEE(void);
    extern Class _ZN7QWidgetC2EPS_PKc6QFlagsIN2Qt10WindowTypeEE(void);
    extern Class _ZN7QWidgetC1EPS_PKc6QFlagsIN2Qt10WindowTypeEE(void);
    extern Class _ZN7QWidgetD2Ev(void);
    extern Class _ZN7QWidgetD1Ev(void);
    extern Class _ZN7QWidgetD0Ev(void);
    extern int _ZNK7QWidget7devTypeEv(void);
    extern _ZNK7QWidget5styleEv(void);
    extern void _ZN7QWidget8setStyleEP6QStyle(void);
    extern enum N2Qt14WindowModalityE _ZNK7QWidget14windowModalityEv(void);
    extern void _ZN7QWidget17setWindowModalityEN2Qt14WindowModalityE(void);
    extern bool _ZNK7QWidget11isEnabledToEPS_(void);
    extern void _ZN7QWidget10setEnabledEb(void);
    extern void _ZN7QWidget11setDisabledEb(void);
    extern void _ZN7QWidget17setWindowModifiedEb(void);
    extern Class _ZNK7QWidget13frameGeometryEv(void);
    extern Class _ZNK7QWidget14normalGeometryEv(void);
    extern int _ZNK7QWidget1xEv(void);
    extern int _ZNK7QWidget1yEv(void);
    extern Class _ZNK7QWidget3posEv(void);
    extern Class _ZNK7QWidget9frameSizeEv(void);
    extern Class _ZNK7QWidget12childrenRectEv(void);
    extern Class _ZNK7QWidget14childrenRegionEv(void);
    extern Class _ZNK7QWidget11minimumSizeEv(void);
    extern Class _ZNK7QWidget11maximumSizeEv(void);
    extern void _ZN7QWidget14setMinimumSizeEii(void);
    extern void _ZN7QWidget14setMaximumSizeEii(void);
    extern void _ZN7QWidget15setMinimumWidthEi(void);
    extern void _ZN7QWidget16setMinimumHeightEi(void);
    extern void _ZN7QWidget15setMaximumWidthEi(void);
    extern void _ZN7QWidget16setMaximumHeightEi(void);
    extern Class _ZNK7QWidget13sizeIncrementEv(void);
    extern void _ZN7QWidget16setSizeIncrementEii(void);
    extern Class _ZNK7QWidget8baseSizeEv(void);
    extern void _ZN7QWidget11setBaseSizeEii(void);
    extern void _ZN7QWidget12setFixedSizeERK5QSize(void);
    extern void _ZN7QWidget12setFixedSizeEii(void);
    extern void _ZN7QWidget13setFixedWidthEi(void);
    extern void _ZN7QWidget14setFixedHeightEi(void);
    extern Class _ZNK7QWidget11mapToGlobalERK6QPoint(void);
    extern Class _ZNK7QWidget13mapFromGlobalERK6QPoint(void);
    extern Class _ZNK7QWidget11mapToParentERK6QPoint(void);
    extern Class _ZNK7QWidget13mapFromParentERK6QPoint(void);
    extern Class _ZNK7QWidget5mapToEPS_RK6QPoint(void);
    extern Class _ZNK7QWidget7mapFromEPS_RK6QPoint(void);
    extern Class _ZNK7QWidget6windowEv(void);
    extern Class _ZNK7QWidget7paletteEv(void);
    extern void _ZN7QWidget10setPaletteERK8QPalette(void);
    extern void _ZN7QWidget17setBackgroundRoleEN8QPalette9ColorRoleE(void);
    extern enum N8QPalette9ColorRoleE _ZNK7QWidget14backgroundRoleEv(void);
    extern void _ZN7QWidget17setForegroundRoleEN8QPalette9ColorRoleE(void);
    extern enum N8QPalette9ColorRoleE _ZNK7QWidget14foregroundRoleEv(void);
    extern void _ZN7QWidget7setFontERK5QFont(void);
    extern Class _ZNK7QWidget6cursorEv(void);
    extern void _ZN7QWidget9setCursorERK7QCursor(void);
    extern void _ZN7QWidget11unsetCursorEv(void);
    extern void _ZN7QWidget7setMaskERK7QBitmap(void);
    extern void _ZN7QWidget7setMaskERK7QRegion(void);
    extern Class _ZNK7QWidget4maskEv(void);
    extern void _ZN7QWidget9clearMaskEv(void);
    extern void _ZN7QWidget14setWindowTitleERK7QString(void);
    extern Class _ZNK7QWidget11windowTitleEv(void);
    extern void _ZN7QWidget13setWindowIconERK5QIcon(void);
    extern _ZNK7QWidget10windowIconEv(void);
    extern void _ZN7QWidget17setWindowIconTextERK7QString(void);
    extern Class _ZNK7QWidget14windowIconTextEv(void);
    extern void _ZN7QWidget13setWindowRoleERK7QString(void);
    extern Class _ZNK7QWidget10windowRoleEv(void);
    extern void _ZN7QWidget16setWindowOpacityEd(void);
    extern qreal _ZNK7QWidget13windowOpacityEv(void);
    extern bool _ZNK7QWidget16isWindowModifiedEv(void);
    extern void _ZN7QWidget10setToolTipERK7QString(void);
    extern Class _ZNK7QWidget7toolTipEv(void);
    extern void _ZN7QWidget12setStatusTipERK7QString(void);
    extern Class _ZNK7QWidget9statusTipEv(void);
    extern void _ZN7QWidget12setWhatsThisERK7QString(void);
    extern Class _ZNK7QWidget9whatsThisEv(void);
    extern Class _ZNK7QWidget14accessibleNameEv(void);
    extern void _ZN7QWidget17setAccessibleNameERK7QString(void);
    extern Class _ZNK7QWidget21accessibleDescriptionEv(void);
    extern void _ZN7QWidget24setAccessibleDescriptionERK7QString(void);
    extern void
	_ZN7QWidget18setLayoutDirectionEN2Qt15LayoutDirectionE(void);
    extern enum N2Qt15LayoutDirectionE
	_ZNK7QWidget15layoutDirectionEv(void);
    extern void _ZN7QWidget20unsetLayoutDirectionEv(void);
    extern bool _ZNK7QWidget14isActiveWindowEv(void);
    extern void _ZN7QWidget14activateWindowEv(void);
    extern void _ZN7QWidget10clearFocusEv(void);
    extern void _ZN7QWidget8setFocusEN2Qt11FocusReasonE(void);
    extern enum N2Qt11FocusPolicyE _ZNK7QWidget11focusPolicyEv(void);
    extern void _ZN7QWidget14setFocusPolicyEN2Qt11FocusPolicyE(void);
    extern bool _ZNK7QWidget8hasFocusEv(void);
    extern void _ZN7QWidget11setTabOrderEPS_S0_(void);
    extern void _ZN7QWidget13setFocusProxyEPS_(void);
    extern Class _ZNK7QWidget10focusProxyEv(void);
    extern enum N2Qt17ContextMenuPolicyE
	_ZNK7QWidget17contextMenuPolicyEv(void);
    extern void
	_ZN7QWidget20setContextMenuPolicyEN2Qt17ContextMenuPolicyE(void);
    extern void _ZN7QWidget9grabMouseEv(void);
    extern void _ZN7QWidget9grabMouseERK7QCursor(void);
    extern void _ZN7QWidget12releaseMouseEv(void);
    extern void _ZN7QWidget12grabKeyboardEv(void);
    extern void _ZN7QWidget15releaseKeyboardEv(void);
    extern int
	_ZN7QWidget12grabShortcutERK12QKeySequenceN2Qt15ShortcutContextE
	(void);
    extern void _ZN7QWidget15releaseShortcutEi(void);
    extern void _ZN7QWidget18setShortcutEnabledEib(void);
    extern Class _ZN7QWidget12mouseGrabberEv(void);
    extern Class _ZN7QWidget15keyboardGrabberEv(void);
    extern void _ZN7QWidget17setUpdatesEnabledEb(void);
    extern void _ZN7QWidget6updateEv(void);
    extern void _ZN7QWidget7repaintEv(void);
    extern void _ZN7QWidget6updateERK5QRect(void);
    extern void _ZN7QWidget6updateERK7QRegion(void);
    extern void _ZN7QWidget7repaintEiiii(void);
    extern void _ZN7QWidget7repaintERK5QRect(void);
    extern void _ZN7QWidget7repaintERK7QRegion(void);
    extern void _ZN7QWidget10setVisibleEb(void);
    extern void _ZN7QWidget13showMinimizedEv(void);
    extern void _ZN7QWidget13showMaximizedEv(void);
    extern void _ZN7QWidget14showFullScreenEv(void);
    extern void _ZN7QWidget10showNormalEv(void);
    extern bool _ZN7QWidget5closeEv(void);
    extern void _ZN7QWidget5raiseEv(void);
    extern void _ZN7QWidget5lowerEv(void);
    extern void _ZN7QWidget10stackUnderEPS_(void);
    extern void _ZN7QWidget4moveERK6QPoint(void);
    extern void _ZN7QWidget6resizeERK5QSize(void);
    extern void _ZN7QWidget11setGeometryERK5QRect(void);
    extern void _ZN7QWidget10adjustSizeEv(void);
    extern bool _ZNK7QWidget11isVisibleToEPS_(void);
    extern bool _ZNK7QWidget11isMinimizedEv(void);
    extern bool _ZNK7QWidget11isMaximizedEv(void);
    extern bool _ZNK7QWidget12isFullScreenEv(void);
    extern N2Qt12WindowStatesE _ZNK7QWidget11windowStateEv(void);
    extern void
	_ZN7QWidget14setWindowStateE6QFlagsIN2Qt11WindowStateEE(void);
    extern void
	_ZN7QWidget19overrideWindowStateE6QFlagsIN2Qt11WindowStateEE(void);
    extern Class _ZNK7QWidget8sizeHintEv(void);
    extern Class _ZNK7QWidget15minimumSizeHintEv(void);
    extern Class _ZNK7QWidget10sizePolicyEv(void);
    extern void _ZN7QWidget13setSizePolicyE11QSizePolicy(void);
    extern int _ZNK7QWidget14heightForWidthEi(void);
    extern Class _ZNK7QWidget13visibleRegionEv(void);
    extern void _ZN7QWidget18setContentsMarginsEiiii(void);
    extern void _ZNK7QWidget18getContentsMarginsEPiS0_S0_S0_(void);
    extern Class _ZNK7QWidget12contentsRectEv(void);
    extern _ZNK7QWidget6layoutEv(void);
    extern void _ZN7QWidget9setLayoutEP7QLayout(void);
    extern void _ZN7QWidget14updateGeometryEv(void);
    extern void _ZN7QWidget9setParentEPS_(void);
    extern void _ZN7QWidget9setParentEPS_6QFlagsIN2Qt10WindowTypeEE(void);
    extern void _ZN7QWidget6scrollEii(void);
    extern void _ZN7QWidget6scrollEiiRK5QRect(void);
    extern Class _ZNK7QWidget11focusWidgetEv(void);
    extern Class _ZNK7QWidget16nextInFocusChainEv(void);
    extern bool _ZNK7QWidget11acceptDropsEv(void);
    extern void _ZN7QWidget14setAcceptDropsEb(void);
    extern void _ZN7QWidget9addActionEP7QAction(void);
    extern void _ZN7QWidget10addActionsE5QListIP7QActionE(void);
    extern void _ZN7QWidget12insertActionEP7QActionS1_(void);
    extern void _ZN7QWidget13insertActionsEP7QAction5QListIS1_E(void);
    extern void _ZN7QWidget12removeActionEP7QAction(void);
    extern _ZNK7QWidget7actionsEv(void);
    extern void
	_ZN7QWidget14setWindowFlagsE6QFlagsIN2Qt10WindowTypeEE(void);
    extern void
	_ZN7QWidget19overrideWindowFlagsE6QFlagsIN2Qt10WindowTypeEE(void);
    extern Class _ZN7QWidget4findEm(void);
    extern _ZN7QWidget7wmapperEv(void);
    extern Class _ZNK7QWidget7childAtERK6QPoint(void);
    extern _ZNK7QWidget7x11InfoEv(void);
    extern N2Qt6HANDLEE _ZNK7QWidget16x11PictureHandleEv(void);
    extern N2Qt6HANDLEE _ZNK7QWidget6handleEv(void);
    extern void _ZN7QWidget12setAttributeEN2Qt15WidgetAttributeEb(void);
    extern _ZNK7QWidget11paintEngineEv(void);
    extern void _ZNK7QWidget14ensurePolishedEv(void);
    extern _ZN7QWidget12inputContextEv(void);
    extern void _ZN7QWidget15setInputContextEP13QInputContext(void);
    extern bool _ZNK7QWidget12isAncestorOfEPKS_(void);
    extern bool _ZNK7QWidget18autoFillBackgroundEv(void);
    extern void _ZN7QWidget21setAutoFillBackgroundEb(void);
    extern void _ZN7QWidget26customContextMenuRequestedERK6QPoint(void);
    extern bool _ZN7QWidget5eventEP6QEvent(void);
    extern void _ZN7QWidget15mousePressEventEP11QMouseEvent(void);
    extern void _ZN7QWidget17mouseReleaseEventEP11QMouseEvent(void);
    extern void _ZN7QWidget21mouseDoubleClickEventEP11QMouseEvent(void);
    extern void _ZN7QWidget14mouseMoveEventEP11QMouseEvent(void);
    extern void _ZN7QWidget10wheelEventEP11QWheelEvent(void);
    extern void _ZN7QWidget13keyPressEventEP9QKeyEvent(void);
    extern void _ZN7QWidget15keyReleaseEventEP9QKeyEvent(void);
    extern void _ZN7QWidget12focusInEventEP11QFocusEvent(void);
    extern void _ZN7QWidget13focusOutEventEP11QFocusEvent(void);
    extern void _ZN7QWidget10enterEventEP6QEvent(void);
    extern void _ZN7QWidget10leaveEventEP6QEvent(void);
    extern void _ZN7QWidget10paintEventEP11QPaintEvent(void);
    extern void _ZN7QWidget9moveEventEP10QMoveEvent(void);
    extern void _ZN7QWidget11resizeEventEP12QResizeEvent(void);
    extern void _ZN7QWidget10closeEventEP11QCloseEvent(void);
    extern void _ZN7QWidget16contextMenuEventEP17QContextMenuEvent(void);
    extern void _ZN7QWidget11tabletEventEP12QTabletEvent(void);
    extern void _ZN7QWidget11actionEventEP12QActionEvent(void);
    extern void _ZN7QWidget14dragEnterEventEP15QDragEnterEvent(void);
    extern void _ZN7QWidget13dragMoveEventEP14QDragMoveEvent(void);
    extern void _ZN7QWidget14dragLeaveEventEP15QDragLeaveEvent(void);
    extern void _ZN7QWidget9dropEventEP10QDropEvent(void);
    extern void _ZN7QWidget9showEventEP10QShowEvent(void);
    extern void _ZN7QWidget9hideEventEP10QHideEvent(void);
    extern bool _ZN7QWidget8x11EventEP7_XEvent(void);
    extern void _ZN7QWidget11changeEventEP6QEvent(void);
    extern int
	_ZNK7QWidget6metricEN12QPaintDevice17PaintDeviceMetricE(void);
    extern void _ZN7QWidget16inputMethodEventEP17QInputMethodEvent(void);
    extern Class
	_ZNK7QWidget16inputMethodQueryEN2Qt16InputMethodQueryE(void);
    extern void _ZN7QWidget17resetInputContextEv(void);
    extern void _ZN7QWidget16updateMicroFocusEv(void);
    extern void _ZN7QWidget6createEmbb(void);
    extern void _ZN7QWidget7destroyEbb(void);
    extern bool _ZN7QWidget18focusNextPrevChildEb(void);
    extern Class
	_ZN7QWidgetC2ER14QWidgetPrivatePS_6QFlagsIN2Qt10WindowTypeEE(void);
    extern Class
	_ZN7QWidgetC1ER14QWidgetPrivatePS_6QFlagsIN2Qt10WindowTypeEE(void);
    extern _ZN7QWidget8setStyleERK7QString(void);
    extern Class _ZNK7QWidget11visibleRectEv(void);
    extern enum N2Qt14BackgroundModeE _ZNK7QWidget14backgroundModeEv(void);
    extern void
	_ZN7QWidget17setBackgroundModeEN2Qt14BackgroundModeES1_(void);
    extern void _ZN7QWidget5eraseERK7QRegion(void);
    extern bool _ZN7QWidget5closeEb(void);
    extern void _ZN7QWidget7setIconERK7QPixmap(void);
    extern _ZNK7QWidget4iconEv(void);
    extern void _ZN7QWidget11styleChangeER6QStyle(void);
    extern void _ZN7QWidget13enabledChangeEb(void);
    extern void _ZN7QWidget13paletteChangeERK8QPalette(void);
    extern void _ZN7QWidget10fontChangeERK5QFont(void);
    extern void _ZN7QWidget22windowActivationChangeEb(void);
    extern void _ZN7QWidget14languageChangeEv(void);
    extern bool
	_ZNK7QWidget20testAttribute_helperEN2Qt15WidgetAttributeE(void);
#ifdef __cplusplus
}
#endif
#endif
