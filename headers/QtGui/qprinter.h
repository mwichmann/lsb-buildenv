#ifndef _QTGUI_QPRINTER_H_
#define _QTGUI_QPRINTER_H_

#include <QtCore/qlist.h>
#include <QtCore/qstring.h>
#include <QtCore/qrect.h>
#include <QtGui/qpaintdevice.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N8QPrinter11PrinterModeE {
	ScreenResolution,
	PrinterResolution,
	HighResolution
    };

    enum N8QPrinter11OrientationE {
	Portrait,
	Landscape
    };

    enum N8QPrinter8PageSizeE {
	A4,
	B5,
	Letter,
	Legal,
	Executive,
	A0,
	A1,
	A2,
	A3,
	A5,
	A6,
	A7,
	A8,
	A9,
	B0,
	B1,
	B10,
	B2,
	B3,
	B4,
	B6,
	B7,
	B8,
	B9,
	C5E,
	Comm10E,
	DLE,
	Folio,
	Ledger,
	Tabloid,
	Custom,
	NPageSize
    };

    enum N8QPrinter9PageOrderE {
	FirstPageFirst,
	LastPageFirst
    };

    enum N8QPrinter9ColorModeE {
	GrayScale,
	Color
    };

    enum N8QPrinter11PaperSourceE {
	OnlyOne,
	Lower,
	Middle,
	Manual,
	Envelope,
	EnvelopeManual,
	Auto,
	Tractor,
	SmallFormat,
	LargeFormat,
	LargeCapacity,
	Cassette,
	FormSource
    };

    enum N8QPrinter12PrinterStateE {
	Idle,
	Active,
	Aborted,
	Error
    };

    enum N8QPrinter12OutputFormatE {
	NativeFormat,
	PdfFormat
    };

    enum N8QPrinter10PrintRangeE {
	AllPages,
	Selection,
	PageRange
    };

    enum N8QPrinter13PrinterOptionE {
	PrintToFile,
	PrintSelection,
	PrintPageRange
    };


    extern Class _ZN8QPrinterC2ENS_11PrinterModeE(void);
    extern Class _ZN8QPrinterC1ENS_11PrinterModeE(void);
    extern Class _ZN8QPrinterD2Ev(void);
    extern Class _ZN8QPrinterD1Ev(void);
    extern Class _ZN8QPrinterD0Ev(void);
    extern int _ZNK8QPrinter7devTypeEv(void);
    extern void _ZN8QPrinter15setOutputFormatENS_12OutputFormatE(void);
    extern enum N8QPrinter12OutputFormatE
	_ZNK8QPrinter12outputFormatEv(void);
    extern void _ZN8QPrinter14setPrinterNameERK7QString(void);
    extern Class _ZNK8QPrinter11printerNameEv(void);
    extern void _ZN8QPrinter17setOutputFileNameERK7QString(void);
    extern Class _ZNK8QPrinter14outputFileNameEv(void);
    extern void _ZN8QPrinter15setPrintProgramERK7QString(void);
    extern Class _ZNK8QPrinter12printProgramEv(void);
    extern void _ZN8QPrinter10setDocNameERK7QString(void);
    extern Class _ZNK8QPrinter7docNameEv(void);
    extern void _ZN8QPrinter10setCreatorERK7QString(void);
    extern Class _ZNK8QPrinter7creatorEv(void);
    extern void _ZN8QPrinter14setOrientationENS_11OrientationE(void);
    extern enum N8QPrinter11OrientationE
	_ZNK8QPrinter11orientationEv(void);
    extern void _ZN8QPrinter11setPageSizeENS_8PageSizeE(void);
    extern enum N8QPrinter8PageSizeE _ZNK8QPrinter8pageSizeEv(void);
    extern void _ZN8QPrinter12setPageOrderENS_9PageOrderE(void);
    extern enum N8QPrinter9PageOrderE _ZNK8QPrinter9pageOrderEv(void);
    extern void _ZN8QPrinter13setResolutionEi(void);
    extern int _ZNK8QPrinter10resolutionEv(void);
    extern void _ZN8QPrinter12setColorModeENS_9ColorModeE(void);
    extern enum N8QPrinter9ColorModeE _ZNK8QPrinter9colorModeEv(void);
    extern void _ZN8QPrinter16setCollateCopiesEb(void);
    extern bool _ZNK8QPrinter13collateCopiesEv(void);
    extern void _ZN8QPrinter11setFullPageEb(void);
    extern bool _ZNK8QPrinter8fullPageEv(void);
    extern void _ZN8QPrinter12setNumCopiesEi(void);
    extern int _ZNK8QPrinter9numCopiesEv(void);
    extern void _ZN8QPrinter14setPaperSourceENS_11PaperSourceE(void);
    extern enum N8QPrinter11PaperSourceE
	_ZNK8QPrinter11paperSourceEv(void);
    extern Class _ZNK8QPrinter20supportedResolutionsEv(void);
    extern void _ZN8QPrinter23setFontEmbeddingEnabledEb(void);
    extern bool _ZNK8QPrinter20fontEmbeddingEnabledEv(void);
    extern Class _ZNK8QPrinter9paperRectEv(void);
    extern Class _ZNK8QPrinter8pageRectEv(void);
    extern Class _ZNK8QPrinter22printerSelectionOptionEv(void);
    extern void _ZN8QPrinter25setPrinterSelectionOptionERK7QString(void);
    extern bool _ZN8QPrinter7newPageEv(void);
    extern bool _ZN8QPrinter5abortEv(void);
    extern enum N8QPrinter12PrinterStateE
	_ZNK8QPrinter12printerStateEv(void);
    extern _ZNK8QPrinter11paintEngineEv(void);
    extern _ZNK8QPrinter11printEngineEv(void);
    extern void _ZN8QPrinter9setFromToEii(void);
    extern int _ZNK8QPrinter8fromPageEv(void);
    extern int _ZNK8QPrinter6toPageEv(void);
    extern void _ZN8QPrinter13setPrintRangeENS_10PrintRangeE(void);
    extern enum N8QPrinter10PrintRangeE _ZNK8QPrinter10printRangeEv(void);
    extern bool _ZN8QPrinter5setupEP7QWidget(void);
    extern void _ZN8QPrinter9setMinMaxEii(void);
    extern int _ZNK8QPrinter7minPageEv(void);
    extern int _ZNK8QPrinter7maxPageEv(void);
    extern void _ZN8QPrinter23setCollateCopiesEnabledEb(void);
    extern bool _ZNK8QPrinter20collateCopiesEnabledEv(void);
    extern void _ZN8QPrinter16setOptionEnabledENS_13PrinterOptionEb(void);
    extern bool _ZNK8QPrinter15isOptionEnabledENS_13PrinterOptionE(void);
    extern void _ZN8QPrinter15setOutputToFileEb(void);
    extern int
	_ZNK8QPrinter6metricEN12QPaintDevice17PaintDeviceMetricE(void);
    extern void
	_ZN8QPrinter10setEnginesEP12QPrintEngineP12QPaintEngine(void);
#ifdef __cplusplus
}
#endif
#endif
