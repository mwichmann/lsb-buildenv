#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QLABEL_H_
#define _QTGUI_QLABEL_H_

class QLabel;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QLabel : public QFrame
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QLabel(QWidget*, QFlags<Qt::WindowType>);
     QLabel(QString const&, QWidget*, QFlags<Qt::WindowType>);
     ~QLabel();
    QString text() const;
    const QPixmap * pixmap() const;
     picture() const;
    QMovie * movie() const;
    enum _ZN2Qt10TextFormatE textFormat() const;
    void setTextFormat(Qt::TextFormat);
     alignment() const;
    void setAlignment(QFlags<Qt::AlignmentFlag>);
    void setWordWrap(bool);
    bool wordWrap() const;
    int indent() const;
    void setIndent(int);
    int margin() const;
    void setMargin(int);
    bool hasScaledContents() const;
    void setScaledContents(bool);
    QSize sizeHint() const;
    QSize minimumSizeHint() const;
    void setBuddy(QWidget*);
    QWidget * buddy() const;
    int heightForWidth(int) const;
    void setText(QString const&);
    void setPixmap(QPixmap const&);
    void setPicture(QPicture const&);
    void setMovie(QMovie*);
    void setNum(int);
    void setNum(double);
    void clear();
     QLabel(QWidget*, char const*, QFlags<Qt::WindowType>);
     QLabel(QString const&, QWidget*, char const*, QFlags<Qt::WindowType>);
     QLabel(QWidget*, QString const&, QWidget*, char const*, QFlags<Qt::WindowType>);
    void setAlignment(int);
    void setOpenExternalLinks(bool);
    void setTextInteractionFlags(QFlags<Qt::TextInteractionFlag>);
    bool openExternalLinks() const;
     textInteractionFlags() const;
protected:
    bool event(QEvent*);
    void paintEvent(QPaintEvent*);
    void changeEvent(QEvent*);
    void linkHovered(QString const&);
    void focusInEvent(QFocusEvent*);
    void focusOutEvent(QFocusEvent*);
    void keyPressEvent(QKeyEvent*);
    void linkActivated(QString const&);
    void mouseMoveEvent(QMouseEvent*);
    void mousePressEvent(QMouseEvent*);
    void contextMenuEvent(QContextMenuEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    bool focusNextPrevChild(bool);
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN6QLabel16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
