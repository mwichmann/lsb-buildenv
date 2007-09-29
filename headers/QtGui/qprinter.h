#ifndef _QTGUI_QPRINTER_H_
#define _QTGUI_QPRINTER_H_

class QPrinter;
// *INDENT-OFF*



class QPrinter : public QPaintDevice
{
private:
public:
};

enum PrinterMode	
{
ScreenResolution = 0,	
PrinterResolution = 1,	
HighResolution = 2
}
;

enum Orientation	
{
Portrait = 0,	
Landscape = 1
}
;

enum PageSize	
{
A4 = 0,	
B5 = 1,	
Letter = 2,	
Legal = 3,	
Executive = 4,	
A0 = 5,	
A1 = 6,	
A2 = 7,	
A3 = 8,	
A5 = 9,	
A6 = 10,	
A7 = 11,	
A8 = 12,	
A9 = 13,	
B0 = 14,	
B1 = 15,	
B10 = 16,	
B2 = 17,	
B3 = 18,	
B4 = 19,	
B6 = 20,	
B7 = 21,	
B8 = 22,	
B9 = 23,	
C5E = 24,	
Comm10E = 25,	
DLE = 26,	
Folio = 27,	
Ledger = 28,	
Tabloid = 29,	
Custom = 30,	
NPageSize = 30
}
;

enum PageOrder	
{
FirstPageFirst = 0,	
LastPageFirst = 1
}
;

enum ColorMode	
{
GrayScale = 0,	
Color = 1
}
;

enum PaperSource	
{
OnlyOne = 0,	
Lower = 1,	
Middle = 2,	
Manual = 3,	
Envelope = 4,	
EnvelopeManual = 5,	
Auto = 6,	
Tractor = 7,	
SmallFormat = 8,	
LargeFormat = 9,	
LargeCapacity = 10,	
Cassette = 11,	
FormSource = 12
}
;

enum PrinterState	
{
Idle = 0,	
Active = 1,	
Aborted = 2,	
Error = 3
}
;

enum OutputFormat	
{
NativeFormat = 0,	
PdfFormat = 1
}
;

enum PrintRange	
{
AllPages = 0,	
Selection = 1,	
PageRange = 2
}
;

enum PrinterOption	
{
PrintToFile = 0,	
PrintSelection = 1,	
PrintPageRange = 2
}
;


extern QPrinter _ZN8QPrinterC2ENS_11PrinterModeE(void);
extern QPrinter _ZN8QPrinterC1ENS_11PrinterModeE(void);
extern QPrinter _ZN8QPrinterD2Ev(void);
extern QPrinter _ZN8QPrinterD1Ev(void);
extern QPrinter _ZN8QPrinterD0Ev(void);
extern int _ZNK8QPrinter7devTypeEv(void);
extern void _ZN8QPrinter15setOutputFormatENS_12OutputFormatE(void);
extern enum N8QPrinter12OutputFormatE _ZNK8QPrinter12outputFormatEv(void);
extern void _ZN8QPrinter14setPrinterNameERK7QString(void);
extern QString _ZNK8QPrinter11printerNameEv(void);
extern void _ZN8QPrinter17setOutputFileNameERK7QString(void);
extern QString _ZNK8QPrinter14outputFileNameEv(void);
extern void _ZN8QPrinter15setPrintProgramERK7QString(void);
extern QString _ZNK8QPrinter12printProgramEv(void);
extern void _ZN8QPrinter10setDocNameERK7QString(void);
extern QString _ZNK8QPrinter7docNameEv(void);
extern void _ZN8QPrinter10setCreatorERK7QString(void);
extern QString _ZNK8QPrinter7creatorEv(void);
extern void _ZN8QPrinter14setOrientationENS_11OrientationE(void);
extern enum N8QPrinter11OrientationE _ZNK8QPrinter11orientationEv(void);
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
extern enum N8QPrinter11PaperSourceE _ZNK8QPrinter11paperSourceEv(void);
extern QList<int> _ZNK8QPrinter20supportedResolutionsEv(void);
extern void _ZN8QPrinter23setFontEmbeddingEnabledEb(void);
extern bool _ZNK8QPrinter20fontEmbeddingEnabledEv(void);
extern QRect _ZNK8QPrinter9paperRectEv(void);
extern QRect _ZNK8QPrinter8pageRectEv(void);
extern QString _ZNK8QPrinter22printerSelectionOptionEv(void);
extern void _ZN8QPrinter25setPrinterSelectionOptionERK7QString(void);
extern bool _ZN8QPrinter7newPageEv(void);
extern bool _ZN8QPrinter5abortEv(void);
extern enum N8QPrinter12PrinterStateE _ZNK8QPrinter12printerStateEv(void);
extern  _ZNK8QPrinter11paintEngineEv(void);
extern  _ZNK8QPrinter11printEngineEv(void);
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
extern int _ZNK8QPrinter6metricEN12QPaintDevice17PaintDeviceMetricE(void);
extern void _ZN8QPrinter10setEnginesEP12QPrintEngineP12QPaintEngine(void);
// *INDENT-ON*
#endif
