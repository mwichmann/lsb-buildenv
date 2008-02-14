#ifndef _QTGUI_QACCESSIBLEOBJECT_H_
#define _QTGUI_QACCESSIBLEOBJECT_H_

class QAccessibleApplication;
// *INDENT-OFF*

class QAccessibleObject : public QAccessibleInterface
{
private:
public:
     QAccessibleObject(QObject*);
    bool isValid() const;
    QObject * object() const;
    QRect rect(int) const;
    void setText(QAccessible::Text, int, QString const&);
    int userActionCount(int) const;
    bool doAction(int, int, QList<QVariant> const&);
    QString actionText(int, QAccessible::Text, int) const;
     ~QAccessibleObject();
};

class QAccessibleApplication : public QAccessibleObject
{
private:
public:
     ~QAccessibleApplication();
     QAccessibleApplication();
    int childCount() const;
    int indexOfChild(QAccessibleInterface const*) const;
    QFlags<QAccessible::RelationFlag> relationTo(int, QAccessibleInterface const*, int) const;
    int childAt(int, int) const;
    int navigate(QAccessible::RelationFlag, int, QAccessibleInterface**) const;
    QString text(QAccessible::Text, int) const;
    enum _ZN11QAccessible4RoleE role(int) const;
    QFlags<QAccessible::StateFlag> state(int) const;
    int userActionCount(int) const;
    bool doAction(int, int, QList<QVariant> const&);
    QString actionText(int, QAccessible::Text, int) const;
};

// *INDENT-ON*
#endif
