#ifndef _QTGUI_QFILEDIALOG_H_
#define _QTGUI_QFILEDIALOG_H_

#include <QtCore/qstringlist.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qstring.h>
#include <QtCore/qobject.h>
#include <QtCore/qdir.h>
#include <QtGui/qwidget.h>
#include <QtGui/qdialog.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".." N11QFileDialog7OptionsE;

    typedef enum N11QFileDialog8FileModeE {
	AnyFile,
	ExistingFile,
	Directory,
	ExistingFiles,
	DirectoryOnly
    } N11QFileDialog4ModeE;

    Unknown Type:".Class.";

    enum N11QFileDialog8ViewModeE {
	Detail,
	List
    };

    enum N11QFileDialog8FileModeE {
	AnyFile,
	ExistingFile,
	Directory,
	ExistingFiles,
	DirectoryOnly
    };

    enum N11QFileDialog10AcceptModeE {
	AcceptOpen,
	AcceptSave
    };

    enum N11QFileDialog11DialogLabelE {
	LookIn,
	FileName,
	FileType,
	Accept,
	Reject
    };

    enum N11QFileDialog6OptionE {
	ShowDirsOnly,
	DontResolveSymlinks,
	DontConfirmOverwrite,
	DontUseSheet,
	DontUseNativeDialog
    };

    Unknown Type:".Class.";


    extern struct QMetaObject _ZN11QFileDialog16staticMetaObjectE;
    extern struct QMetaObject _ZNK11QFileDialog10metaObjectEv(void);
    extern void _ZN11QFileDialog11qt_metacastEPKc(void);
    extern int
	_ZN11QFileDialog11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class
	_ZN11QFileDialogC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(void);
    extern Class
	_ZN11QFileDialogC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(void);
    extern Class _ZN11QFileDialogC2EP7QWidgetRK7QStringS4_S4_(void);
    extern Class _ZN11QFileDialogC1EP7QWidgetRK7QStringS4_S4_(void);
    extern Class _ZN11QFileDialogD2Ev(void);
    extern Class _ZN11QFileDialogD1Ev(void);
    extern Class _ZN11QFileDialogD0Ev(void);
    extern void _ZN11QFileDialog12setDirectoryERK7QString(void);
    extern Class _ZNK11QFileDialog9directoryEv(void);
    extern void _ZN11QFileDialog10selectFileERK7QString(void);
    extern Class _ZNK11QFileDialog13selectedFilesEv(void);
    extern void _ZN11QFileDialog9setFilterERK7QString(void);
    extern void _ZN11QFileDialog10setFiltersERK11QStringList(void);
    extern Class _ZNK11QFileDialog7filtersEv(void);
    extern void _ZN11QFileDialog12selectFilterERK7QString(void);
    extern Class _ZNK11QFileDialog14selectedFilterEv(void);
    extern void _ZN11QFileDialog11setViewModeENS_8ViewModeE(void);
    extern enum N11QFileDialog8ViewModeE
	_ZNK11QFileDialog8viewModeEv(void);
    extern void _ZN11QFileDialog11setFileModeENS_8FileModeE(void);
    extern enum N11QFileDialog8FileModeE
	_ZNK11QFileDialog8fileModeEv(void);
    extern void _ZN11QFileDialog13setAcceptModeENS_10AcceptModeE(void);
    extern enum N11QFileDialog10AcceptModeE
	_ZNK11QFileDialog10acceptModeEv(void);
    extern void _ZN11QFileDialog11setReadOnlyEb(void);
    extern bool _ZNK11QFileDialog10isReadOnlyEv(void);
    extern void _ZN11QFileDialog18setResolveSymlinksEb(void);
    extern bool _ZNK11QFileDialog15resolveSymlinksEv(void);
    extern void _ZN11QFileDialog19setConfirmOverwriteEb(void);
    extern bool _ZNK11QFileDialog16confirmOverwriteEv(void);
    extern void _ZN11QFileDialog16setDefaultSuffixERK7QString(void);
    extern Class _ZNK11QFileDialog13defaultSuffixEv(void);
    extern void _ZN11QFileDialog10setHistoryERK11QStringList(void);
    extern Class _ZNK11QFileDialog7historyEv(void);
    extern void
	_ZN11QFileDialog15setItemDelegateEP21QAbstractItemDelegate(void);
    extern _ZNK11QFileDialog12itemDelegateEv(void);
    extern void
	_ZN11QFileDialog15setIconProviderEP17QFileIconProvider(void);
    extern _ZNK11QFileDialog12iconProviderEv(void);
    extern void
	_ZN11QFileDialog12setLabelTextENS_11DialogLabelERK7QString(void);
    extern Class _ZNK11QFileDialog9labelTextENS_11DialogLabelE(void);
    extern void _ZN11QFileDialog13filesSelectedERK11QStringList(void);
    extern void _ZN11QFileDialog14currentChangedERK7QString(void);
    extern Class _ZNK11QFileDialog12selectedFileEv(void);
    extern Class
	_ZN11QFileDialog15getOpenFileNameEP7QWidgetRK7QStringS4_S4_PS2_6QFlagsINS_6OptionEE
	(void);
    extern Class
	_ZN11QFileDialog15getSaveFileNameEP7QWidgetRK7QStringS4_S4_PS2_6QFlagsINS_6OptionEE
	(void);
    extern Class
	_ZN11QFileDialog20getExistingDirectoryEP7QWidgetRK7QStringS4_6QFlagsINS_6OptionEE
	(void);
    extern Class
	_ZN11QFileDialog16getOpenFileNamesEP7QWidgetRK7QStringS4_S4_PS2_6QFlagsINS_6OptionEE
	(void);
    extern Class _ZN11QFileDialogC2ERK15QFileDialogArgs(void);
    extern Class _ZN11QFileDialogC1ERK15QFileDialogArgs(void);
    extern void _ZN11QFileDialog4doneEi(void);
    extern void _ZN11QFileDialog6acceptEv(void);
#ifdef __cplusplus
}
#endif
#endif
