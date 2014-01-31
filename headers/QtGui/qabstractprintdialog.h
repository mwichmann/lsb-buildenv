#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QABSTRACTPRINTDIALOG_H_
#define _QTGUI_QABSTRACTPRINTDIALOG_H_

class QFlags < QAbstractPrintDialog::PrintDialogOption >;
// *INDENT-OFF*

typedef class QFlags<QAbstractPrintDialog::PrintDialogOption>QAbstractPrintDialog::PrintDialogOptions	
;

class QAbstractPrintDialog;

enum QAbstractPrintDialog::PrintRange	
{
AllPages = 0,	
Selection = 1,	
PageRange = 2
}
;

enum QAbstractPrintDialog::PrintDialogOption	
{
None = 0,	
PrintToFile = 1,	
PrintSelection = 2,	
PrintPageRange = 4,	
PrintCollateCopies = 16
}
;

class QFlags<QAbstractPrintDialog::PrintDialogOption>;

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
