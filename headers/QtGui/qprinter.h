#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPRINTER_H_
#define _QTGUI_QPRINTER_H_

class QPrinter;
// *INDENT-OFF*

class QPrinter : public QPaintDevice
{
private:
public:
     QPrinter(QPrinter::PrinterMode);
     ~QPrinter();
    int devType() const;
    void setOutputFormat(QPrinter::OutputFormat);
    enum _ZN8QPrinter12OutputFormatE outputFormat() const;
    void setPrinterName(QString const&);
    QString printerName() const;
    void setOutputFileName(QString const&);
    QString outputFileName() const;
    void setPrintProgram(QString const&);
    QString printProgram() const;
    void setDocName(QString const&);
    QString docName() const;
    void setCreator(QString const&);
    QString creator() const;
    void setOrientation(QPrinter::Orientation);
    enum _ZN8QPrinter11OrientationE orientation() const;
    void setPageSize(QPrinter::PageSize);
    enum _ZN8QPrinter8PageSizeE pageSize() const;
    void setPageOrder(QPrinter::PageOrder);
    enum _ZN8QPrinter9PageOrderE pageOrder() const;
    void setResolution(int);
    int resolution() const;
    void setColorMode(QPrinter::ColorMode);
    enum _ZN8QPrinter9ColorModeE colorMode() const;
    void setCollateCopies(bool);
    bool collateCopies() const;
    void setFullPage(bool);
    bool fullPage() const;
    void setNumCopies(int);
    int numCopies() const;
    void setPaperSource(QPrinter::PaperSource);
    enum _ZN8QPrinter11PaperSourceE paperSource() const;
    QList<int> supportedResolutions() const;
    void setFontEmbeddingEnabled(bool);
    bool fontEmbeddingEnabled() const;
    QRect paperRect() const;
    QRect pageRect() const;
    QString printerSelectionOption() const;
    void setPrinterSelectionOption(QString const&);
    bool newPage();
    bool abort();
    enum _ZN8QPrinter12PrinterStateE printerState() const;
    QPaintEngine * paintEngine() const;
    QPrintEngine * printEngine() const;
    void setFromTo(int, int);
    int fromPage() const;
    int toPage() const;
    void setPrintRange(QPrinter::PrintRange);
    enum _ZN8QPrinter10PrintRangeE printRange() const;
    bool setup(QWidget*);
    void setMinMax(int, int);
    int minPage() const;
    int maxPage() const;
    void setCollateCopiesEnabled(bool);
    bool collateCopiesEnabled() const;
    void setOptionEnabled(QPrinter::PrinterOption, bool);
    bool isOptionEnabled(QPrinter::PrinterOption) const;
    void setOutputToFile(bool);
    void setDoubleSidedPrinting(bool);
    bool doubleSidedPrinting() const;
protected:
    int metric(QPaintDevice::PaintDeviceMetric) const;
    void setEngines(QPrintEngine*, QPaintEngine*);
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

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
