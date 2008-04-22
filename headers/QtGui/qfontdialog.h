#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QFONTDIALOG_H_
#define _QTGUI_QFONTDIALOG_H_

class QFontDialog;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QFontDialog : public QDialog
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
    QFont getFont(bool*, QFont const&, QWidget*);
    QFont getFont(bool*, QWidget*);
     ~QFontDialog();
    QFont getFont(bool*, QFont const&, QWidget*, QString const&);
private:
    bool eventFilter(QObject*, QEvent*);
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN11QFontDialog16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
