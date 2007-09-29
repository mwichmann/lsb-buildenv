#ifndef _QTGUI_QABSTRACTPRINTDIALOG_H_
#define _QTGUI_QABSTRACTPRINTDIALOG_H_

class QFlags < QAbstractPrintDialog::PrintDialogOption >;
// *INDENT-OFF*



typedef PrintDialogOptions	
;

class QAbstractPrintDialog : public QDialog
{
private:
public:
};

enum PrintRange	
{
AllPages = 0,	
Selection = 1,	
PageRange = 2
}
;

enum PrintDialogOption	
{
None = 0,	
PrintToFile = 1,	
PrintSelection = 2,	
PrintPageRange = 4,	
PrintCollateCopies = 16
}
;

class QFlags<QAbstractPrintDialog::PrintDialogOption>
{
private:
public:
};


extern  _ZN20QAbstractPrintDialogD0Ev(void);
extern  _ZN20QAbstractPrintDialogD1Ev(void);
extern QAbstractPrintDialog _ZN20QAbstractPrintDialogC2EP8QPrinterP7QWidget(void);
extern QAbstractPrintDialog _ZN20QAbstractPrintDialogC1EP8QPrinterP7QWidget(void);
extern void _ZN20QAbstractPrintDialog16addEnabledOptionENS_17PrintDialogOptionE(void);
extern void _ZN20QAbstractPrintDialog17setEnabledOptionsE6QFlagsINS_17PrintDialogOptionEE(void);
extern N20QAbstractPrintDialog18PrintDialogOptionsE _ZNK20QAbstractPrintDialog14enabledOptionsEv(void);
extern bool _ZNK20QAbstractPrintDialog15isOptionEnabledENS_17PrintDialogOptionE(void);
extern void _ZN20QAbstractPrintDialog13setPrintRangeENS_10PrintRangeE(void);
extern enum N20QAbstractPrintDialog10PrintRangeE _ZNK20QAbstractPrintDialog10printRangeEv(void);
extern void _ZN20QAbstractPrintDialog9setMinMaxEii(void);
extern int _ZNK20QAbstractPrintDialog7minPageEv(void);
extern int _ZNK20QAbstractPrintDialog7maxPageEv(void);
extern void _ZN20QAbstractPrintDialog9setFromToEii(void);
extern int _ZNK20QAbstractPrintDialog8fromPageEv(void);
extern int _ZNK20QAbstractPrintDialog6toPageEv(void);
extern  _ZNK20QAbstractPrintDialog7printerEv(void);
extern QAbstractPrintDialog _ZN20QAbstractPrintDialogC2ER27QAbstractPrintDialogPrivateP8QPrinterP7QWidget(void);
extern QAbstractPrintDialog _ZN20QAbstractPrintDialogC1ER27QAbstractPrintDialogPrivateP8QPrinterP7QWidget(void);
// *INDENT-ON*
#endif
