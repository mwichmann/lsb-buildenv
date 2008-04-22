#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QCOLORDIALOG_H_
#define _QTGUI_QCOLORDIALOG_H_

class QColorDialog;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QColorDialog : public QDialog
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
    QColor getColor(QColor const&, QWidget*);
    QRgb getRgba(unsigned int, bool*, QWidget*);
    int customCount();
    QRgb customColor(int);
    void setCustomColor(int, unsigned int);
    void setStandardColor(int, unsigned int);
     ~QColorDialog();
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN12QColorDialog16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
