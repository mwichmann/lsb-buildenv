#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QFILEDIALOG_H_
#define _QTGUI_QFILEDIALOG_H_

class QFileDialog;
// *INDENT-OFF*

typedef class QFlags<QFileDialog::Option>QFileDialog::Options	
;

typedef enum QFileDialog::FileMode	
{
AnyFile = 0,	
ExistingFile = 1,	
Directory = 2,	
ExistingFiles = 3,	
DirectoryOnly = 4
}
QFileDialog::Mode	
;

class QFileDialog;

enum QFileDialog::ViewMode	
{
Detail = 0,	
List = 1
}
;

enum QFileDialog::FileMode	
{
AnyFile = 0,	
ExistingFile = 1,	
Directory = 2,	
ExistingFiles = 3,	
DirectoryOnly = 4
}
;

enum QFileDialog::AcceptMode	
{
AcceptOpen = 0,	
AcceptSave = 1
}
;

enum QFileDialog::DialogLabel	
{
LookIn = 0,	
FileName = 1,	
FileType = 2,	
Accept = 3,	
Reject = 4
}
;

enum QFileDialog::Option	
{
ShowDirsOnly = 1,	
DontResolveSymlinks = 2,	
DontConfirmOverwrite = 4,	
DontUseSheet = 8,	
DontUseNativeDialog = 16
}
;

class QFlags<QFileDialog::Option>;


/* Function prototypes */

extern struct QMetaObject _ZN11QFileDialog16staticMetaObjectE;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
