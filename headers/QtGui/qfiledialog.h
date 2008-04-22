#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QFILEDIALOG_H_
#define _QTGUI_QFILEDIALOG_H_

class QFileDialog;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef class QFlags<QFileDialog::Option>
{
private:
public:
}Options	
;

typedef enum FileMode	
{
AnyFile = 0,	
ExistingFile = 1,	
Directory = 2,	
ExistingFiles = 3,	
DirectoryOnly = 4
}
Mode	
;

#endif /* __LSB_VERSION__ >= 3.1 */

#if __LSB_VERSION__ >= 31
class QFileDialog : public QDialog
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QFileDialog(QWidget*, QFlags<Qt::WindowType>);
     QFileDialog(QWidget*, QString const&, QString const&, QString const&);
     ~QFileDialog();
    void setDirectory(QString const&);
    QDir directory() const;
    void selectFile(QString const&);
    QStringList selectedFiles() const;
    void setFilter(QString const&);
    void setFilters(QStringList const&);
    QStringList filters() const;
    void selectFilter(QString const&);
    QString selectedFilter() const;
    void setViewMode(QFileDialog::ViewMode);
    enum _ZN11QFileDialog8ViewModeE viewMode() const;
    void setFileMode(QFileDialog::FileMode);
    enum _ZN11QFileDialog8FileModeE fileMode() const;
    void setAcceptMode(QFileDialog::AcceptMode);
    enum _ZN11QFileDialog10AcceptModeE acceptMode() const;
    void setReadOnly(bool);
    bool isReadOnly() const;
    void setResolveSymlinks(bool);
    bool resolveSymlinks() const;
    void setConfirmOverwrite(bool);
    bool confirmOverwrite() const;
    void setDefaultSuffix(QString const&);
    QString defaultSuffix() const;
    void setHistory(QStringList const&);
    QStringList history() const;
    void setItemDelegate(QAbstractItemDelegate*);
    QAbstractItemDelegate * itemDelegate() const;
    void setIconProvider(QFileIconProvider*);
    QFileIconProvider * iconProvider() const;
    void setLabelText(QFileDialog::DialogLabel, QString const&);
    QString labelText(QFileDialog::DialogLabel) const;
    QString selectedFile() const;
    QString getOpenFileName(QWidget*, QString const&, QString const&, QString const&, QString*, QFlags<QFileDialog::Option>);
    QString getSaveFileName(QWidget*, QString const&, QString const&, QString const&, QString*, QFlags<QFileDialog::Option>);
    QString getExistingDirectory(QWidget*, QString const&, QString const&, QFlags<QFileDialog::Option>);
    QStringList getOpenFileNames(QWidget*, QString const&, QString const&, QString const&, QString*, QFlags<QFileDialog::Option>);
     QFileDialog(QFileDialogArgs const&);
protected:
    void filesSelected(QStringList const&);
    void currentChanged(QString const&);
    void done(int);
    void accept();
};

enum ViewMode	
{
Detail = 0,	
List = 1
}
;

enum FileMode	
{
AnyFile = 0,	
ExistingFile = 1,	
Directory = 2,	
ExistingFiles = 3,	
DirectoryOnly = 4
}
;

enum AcceptMode	
{
AcceptOpen = 0,	
AcceptSave = 1
}
;

enum DialogLabel	
{
LookIn = 0,	
FileName = 1,	
FileType = 2,	
Accept = 3,	
Reject = 4
}
;

enum Option	
{
ShowDirsOnly = 1,	
DontResolveSymlinks = 2,	
DontConfirmOverwrite = 4,	
DontUseSheet = 8,	
DontUseNativeDialog = 16
}
;

class QFlags<QFileDialog::Option>
{
private:
public:
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN11QFileDialog16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
