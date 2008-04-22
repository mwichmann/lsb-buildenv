#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QTOOLTIP_H_
#define _QTGUI_QTOOLTIP_H_

class QToolTip;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
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

#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
