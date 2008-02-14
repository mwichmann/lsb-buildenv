#ifndef _QTGUI_QTOOLTIP_H_
#define _QTGUI_QTOOLTIP_H_

class QToolTip;
// *INDENT-OFF*

class QToolTip
{
private:
public:
    void showText(QPoint const&, QString const&, QWidget*);
    QPalette palette();
    void setPalette(QPalette const&);
    QFont font();
    void setFont(QFont const&);
    void showText(QPoint const&, QString const&, QWidget*, QRect const&);
};

// *INDENT-ON*
#endif
