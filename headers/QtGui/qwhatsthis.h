#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QWHATSTHIS_H_
#define _QTGUI_QWHATSTHIS_H_

class QWhatsThis;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QWhatsThis
{
private:
public:
    void enterWhatsThisMode();
    bool inWhatsThisMode();
    void leaveWhatsThisMode();
    void showText(QPoint const&, QString const&, QWidget*);
    void hideText();
    QAction * createAction(QObject*);
    void add(QWidget*, QString const&);
    void remove(QWidget*);
    QToolButton * whatsThisButton(QWidget*);
};

#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
