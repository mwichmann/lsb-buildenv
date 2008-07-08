#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QLAYOUTITEM_H_
#define _QTGUI_QLAYOUTITEM_H_

class QLayoutItem;
// *INDENT-OFF*

class QLayoutItem
{
private:
public:
     ~QLayoutItem();
    bool hasHeightForWidth() const;
    int heightForWidth(int) const;
    int minimumHeightForWidth(int) const;
    void invalidate();
    QWidget * widget();
    QLayout * layout();
    QSpacerItem * spacerItem();
    void setAlignment(QFlags<Qt::AlignmentFlag>);
};

class QSpacerItem : public QLayoutItem
{
private:
public:
     ~QSpacerItem();
    void changeSize(int, int, QSizePolicy::Policy, QSizePolicy::Policy);
    QSize sizeHint() const;
    QSize minimumSize() const;
    QSize maximumSize() const;
     expandingDirections() const;
    bool isEmpty() const;
    void setGeometry(QRect const&);
    QRect geometry() const;
    QSpacerItem * spacerItem();
};

class QWidgetItem : public QLayoutItem
{
private:
public:
     ~QWidgetItem();
    QSize sizeHint() const;
    QSize minimumSize() const;
    QSize maximumSize() const;
     expandingDirections() const;
    bool isEmpty() const;
    void setGeometry(QRect const&);
    QRect geometry() const;
    QWidget * widget();
    bool hasHeightForWidth() const;
    int heightForWidth(int) const;
};

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
