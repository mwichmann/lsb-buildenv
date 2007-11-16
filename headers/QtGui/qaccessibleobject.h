#ifndef _QTGUI_QACCESSIBLEOBJECT_H_
#define _QTGUI_QACCESSIBLEOBJECT_H_

class QAccessibleApplication;
// *INDENT-OFF*




class QAccessibleObject : public QAccessibleInterface
{
private:
public:
};

class QAccessibleApplication : public QAccessibleObject
{
private:
public:
};


extern QAccessibleObject _ZN17QAccessibleObjectC2EP7QObject(void);
extern QAccessibleObject _ZN17QAccessibleObjectC1EP7QObject(void);
extern bool _ZNK17QAccessibleObject7isValidEv(void);
extern QObject _ZNK17QAccessibleObject6objectEv(void);
extern QRect _ZNK17QAccessibleObject4rectEi(void);
extern void _ZN17QAccessibleObject7setTextEN11QAccessible4TextEiRK7QString(void);
extern int _ZNK17QAccessibleObject15userActionCountEi(void);
extern bool _ZN17QAccessibleObject8doActionEiiRK5QListI8QVariantE(void);
extern QString _ZNK17QAccessibleObject10actionTextEiN11QAccessible4TextEi(void);
extern QAccessibleObject _ZN17QAccessibleObjectD2Ev(void);
extern QAccessibleObject _ZN17QAccessibleObjectD1Ev(void);
extern QAccessibleObject _ZN17QAccessibleObjectD0Ev(void);
extern  _ZN22QAccessibleApplicationD0Ev(void);
extern  _ZN22QAccessibleApplicationD1Ev(void);
extern QAccessibleApplication _ZN22QAccessibleApplicationC2Ev(void);
extern QAccessibleApplication _ZN22QAccessibleApplicationC1Ev(void);
extern int _ZNK22QAccessibleApplication10childCountEv(void);
extern int _ZNK22QAccessibleApplication12indexOfChildEPK20QAccessibleInterface(void);
extern N11QAccessible8RelationE _ZNK22QAccessibleApplication10relationToEiPK20QAccessibleInterfacei(void);
extern int _ZNK22QAccessibleApplication7childAtEii(void);
extern int _ZNK22QAccessibleApplication8navigateEN11QAccessible12RelationFlagEiPP20QAccessibleInterface(void);
extern QString _ZNK22QAccessibleApplication4textEN11QAccessible4TextEi(void);
extern enum N11QAccessible4RoleE _ZNK22QAccessibleApplication4roleEi(void);
extern N11QAccessible5StateE _ZNK22QAccessibleApplication5stateEi(void);
extern int _ZNK22QAccessibleApplication15userActionCountEi(void);
extern bool _ZN22QAccessibleApplication8doActionEiiRK5QListI8QVariantE(void);
extern QString _ZNK22QAccessibleApplication10actionTextEiN11QAccessible4TextEi(void);
// *INDENT-ON*
#endif
