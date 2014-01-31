#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPRINTER_H_
#define _QTGUI_QPRINTER_H_

class QPrinter;
// *INDENT-OFF*

class QPrinter;

enum QPrinter::PrinterMode	
{
ScreenResolution = 0,	
PrinterResolution = 1,	
HighResolution = 2
}
;

enum QPrinter::Orientation	
{
Portrait = 0,	
Landscape = 1
}
;

enum QPrinter::PageSize	
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

enum QPrinter::PageOrder	
{
FirstPageFirst = 0,	
LastPageFirst = 1
}
;

enum QPrinter::ColorMode	
{
GrayScale = 0,	
Color = 1
}
;

enum QPrinter::PaperSource	
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

enum QPrinter::PrinterState	
{
Idle = 0,	
Active = 1,	
Aborted = 2,	
Error = 3
}
;

enum QPrinter::OutputFormat	
{
NativeFormat = 0,	
PdfFormat = 1
}
;

enum QPrinter::PrintRange	
{
AllPages = 0,	
Selection = 1,	
PageRange = 2
}
;

enum QPrinter::PrinterOption	
{
PrintToFile = 0,	
PrintSelection = 1,	
PrintPageRange = 2
}
;

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
