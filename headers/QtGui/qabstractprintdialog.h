#ifndef _QTGUI_QABSTRACTPRINTDIALOG_H_
#define _QTGUI_QABSTRACTPRINTDIALOG_H_

class QFlags < QAbstractPrintDialog::PrintDialogOption >;
// *INDENT-OFF*

typedef class QFlags<QAbstractPrintDialog::PrintDialogOption>
{
private:
public:
}PrintDialogOptions	
;

class QAbstractPrintDialog : public QDialog
{
private:
public:
     ~QAbstractPrintDialog();
     QAbstractPrintDialog(QPrinter*, QWidget*);
    void addEnabledOption(QAbstractPrintDialog::PrintDialogOption);
    void setEnabledOptions(QFlags<QAbstractPrintDialog::PrintDialogOption>);
    QFlags<QAbstractPrintDialog::PrintDialogOption> enabledOptions() const;
    bool isOptionEnabled(QAbstractPrintDialog::PrintDialogOption) const;
    void setPrintRange(QAbstractPrintDialog::PrintRange);
    enum _ZN20QAbstractPrintDialog10PrintRangeE printRange() const;
    void setMinMax(int, int);
    int minPage() const;
    int maxPage() const;
    void setFromTo(int, int);
    int fromPage() const;
    int toPage() const;
    QPrinter * printer() const;
     QAbstractPrintDialog(QAbstractPrintDialogPrivate&, QPrinter*, QWidget*);
    int qt_metacall(QMetaObject::Call, int, void**);
    void * qt_metacast(char const*);
    struct QMetaObject * metaObject() const;
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

// *INDENT-ON*
#endif
