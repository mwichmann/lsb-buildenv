#ifndef _QTGUI_QACCESSIBLEWIDGET_H_
#define _QTGUI_QACCESSIBLEWIDGET_H_

class QAccessibleWidget;
// *INDENT-OFF*

class QAccessibleWidget : public QAccessibleObject
{
private:
public:
     QAccessibleWidget(QWidget*, QAccessible::Role, QString const&);
    int childCount() const;
    int indexOfChild(QAccessibleInterface const*) const;
    QFlags<QAccessible::RelationFlag> relationTo(int, QAccessibleInterface const*, int) const;
    int childAt(int, int) const;
    QRect rect(int) const;
    int navigate(QAccessible::RelationFlag, int, QAccessibleInterface**) const;
    QString text(QAccessible::Text, int) const;
    enum _ZN11QAccessible4RoleE role(int) const;
    QFlags<QAccessible::StateFlag> state(int) const;
    QString actionText(int, QAccessible::Text, int) const;
    bool doAction(int, int, QList<QVariant> const&);
     ~QAccessibleWidget();
protected:
    QWidget * widget() const;
    QObject * parentObject() const;
    void addControllingSignal(QString const&);
    void setValue(QString const&);
    void setDescription(QString const&);
    void setHelp(QString const&);
    void setAccelerator(QString const&);
};

// *INDENT-ON*
#endif
