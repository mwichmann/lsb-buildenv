#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QFONTDIALOG_H_
#define _QTGUI_QFONTDIALOG_H_

class QFontDialog;
// *INDENT-OFF*

class QFontDialog : public QDialog
{
private:
public:
    QFont getFont(bool*, QFont const&, QWidget*);
    QFont getFont(bool*, QWidget*);
    QFont getFont(bool*, QFont const&, QWidget*, QString const&);
private:
     ~QFontDialog();
    bool eventFilter(QObject*, QEvent*);
};


/* Function prototypes */

extern struct QMetaObject _ZN11QFontDialog16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
