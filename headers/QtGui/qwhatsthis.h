#ifndef _QTGUI_QWHATSTHIS_H_
#define _QTGUI_QWHATSTHIS_H_

class QWhatsThis;
// *INDENT-OFF*

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

// *INDENT-ON*
#endif
