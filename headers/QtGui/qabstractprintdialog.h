#ifndef _QTGUI_QABSTRACTPRINTDIALOG_H_
#define _QTGUI_QABSTRACTPRINTDIALOG_H_

#include <QtCore/qobject.h>
#include <QtGui/qwidget.h>
#include <QtGui/qdialog.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".." N20QAbstractPrintDialog18PrintDialogOptionsE;

    Unknown Type:".Class.";

    enum N20QAbstractPrintDialog10PrintRangeE {
	AllPages,
	Selection,
	PageRange
    };

    enum N20QAbstractPrintDialog17PrintDialogOptionE {
	None,
	PrintToFile,
	PrintSelection,
	PrintPageRange,
	PrintCollateCopies
    };

    Unknown Type:".Class.";


    extern _ZN20QAbstractPrintDialogD0Ev(void);
    extern _ZN20QAbstractPrintDialogD1Ev(void);
    extern Class _ZN20QAbstractPrintDialogC2EP8QPrinterP7QWidget(void);
    extern Class _ZN20QAbstractPrintDialogC1EP8QPrinterP7QWidget(void);
    extern void
	_ZN20QAbstractPrintDialog16addEnabledOptionENS_17PrintDialogOptionE
	(void);
    extern void
	_ZN20QAbstractPrintDialog17setEnabledOptionsE6QFlagsINS_17PrintDialogOptionEE
	(void);
    extern N20QAbstractPrintDialog18PrintDialogOptionsE
	_ZNK20QAbstractPrintDialog14enabledOptionsEv(void);
    extern bool
	_ZNK20QAbstractPrintDialog15isOptionEnabledENS_17PrintDialogOptionE
	(void);
    extern void
	_ZN20QAbstractPrintDialog13setPrintRangeENS_10PrintRangeE(void);
    extern enum N20QAbstractPrintDialog10PrintRangeE
	_ZNK20QAbstractPrintDialog10printRangeEv(void);
    extern void _ZN20QAbstractPrintDialog9setMinMaxEii(void);
    extern int _ZNK20QAbstractPrintDialog7minPageEv(void);
    extern int _ZNK20QAbstractPrintDialog7maxPageEv(void);
    extern void _ZN20QAbstractPrintDialog9setFromToEii(void);
    extern int _ZNK20QAbstractPrintDialog8fromPageEv(void);
    extern int _ZNK20QAbstractPrintDialog6toPageEv(void);
    extern _ZNK20QAbstractPrintDialog7printerEv(void);
    extern Class
	_ZN20QAbstractPrintDialogC2ER27QAbstractPrintDialogPrivateP8QPrinterP7QWidget
	(void);
    extern Class
	_ZN20QAbstractPrintDialogC1ER27QAbstractPrintDialogPrivateP8QPrinterP7QWidget
	(void);
#ifdef __cplusplus
}
#endif
#endif
