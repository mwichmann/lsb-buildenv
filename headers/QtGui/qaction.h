#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QACTION_H_
#define _QTGUI_QACTION_H_

class QAction;
// *INDENT-OFF*

class QAction : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QAction(QObject*);
     QAction(QString const&, QObject*);
     QAction(QIcon const&, QString const&, QObject*);
     QAction(QObject*, char const*);
     QAction(QString const&, QKeySequence const&, QObject*, char const*);
     QAction(QIcon const&, QString const&, QKeySequence const&, QObject*, char const*);
     ~QAction();
    void setActionGroup(QActionGroup*);
    QActionGroup * actionGroup() const;
    void setIcon(QIcon const&);
    QIcon icon() const;
    void setText(QString const&);
    QString text() const;
    void setIconText(QString const&);
    QString iconText() const;
    void setToolTip(QString const&);
    QString toolTip() const;
    void setStatusTip(QString const&);
    QString statusTip() const;
    void setWhatsThis(QString const&);
    QString whatsThis() const;
    QMenu * menu() const;
    void setMenu(QMenu*);
    void setSeparator(bool);
    bool isSeparator() const;
    void setShortcut(QKeySequence const&);
    QKeySequence shortcut() const;
    void setShortcutContext(Qt::ShortcutContext);
    enum _ZN2Qt15ShortcutContextE shortcutContext() const;
    void setFont(QFont const&);
    QFont font() const;
    void setCheckable(bool);
    bool isCheckable() const;
    QVariant data() const;
    void setData(QVariant const&);
    bool isChecked() const;
    bool isEnabled() const;
    bool isVisible() const;
    void activate(QAction::ActionEvent);
    bool showStatusText(QWidget*);
    QWidget * parentWidget() const;
    void setChecked(bool);
    void toggle();
    void setEnabled(bool);
    void setVisible(bool);
    void setMenuRole(QAction::MenuRole);
    void setShortcuts(QKeySequence::StandardKey);
    void setShortcuts(QList<QKeySequence> const&);
    void setAutoRepeat(bool);
    bool autoRepeat() const;
     associatedWidgets() const;
    enum _ZN7QAction8MenuRoleE menuRole() const;
    QList<QKeySequence> shortcuts() const;
protected:
    bool event(QEvent*);
    void changed();
    void triggered(bool);
    void hovered();
    void toggled(bool);
    void activated(int);
};

enum ActionEvent	
{
Trigger = 0,	
Hover = 1
}
;


/* Function prototypes */

extern struct QMetaObject _ZN7QAction16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
