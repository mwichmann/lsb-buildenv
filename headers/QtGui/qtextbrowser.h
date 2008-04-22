#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QTEXTBROWSER_H_
#define _QTGUI_QTEXTBROWSER_H_

class QTextBrowser;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QTextBrowser : public QTextEdit
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QTextBrowser(QWidget*);
     ~QTextBrowser();
    QUrl source() const;
    QStringList searchPaths() const;
    void setSearchPaths(QStringList const&);
    QVariant loadResource(int, QUrl const&);
    void setSource(QUrl const&);
    void backward();
    void forward();
    void home();
    void reload();
     QTextBrowser(QWidget*, char const*);
    void clearHistory();
    void setOpenExternalLinks(bool);
    bool openExternalLinks() const;
    bool isForwardAvailable() const;
    bool isBackwardAvailable() const;
protected:
    void backwardAvailable(bool);
    void forwardAvailable(bool);
    void sourceChanged(QUrl const&);
    void highlighted(QUrl const&);
    void highlighted(QString const&);
    void anchorClicked(QUrl const&);
    bool event(QEvent*);
    void keyPressEvent(QKeyEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void focusOutEvent(QFocusEvent*);
    bool focusNextPrevChild(bool);
    void paintEvent(QPaintEvent*);
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN12QTextBrowser16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
