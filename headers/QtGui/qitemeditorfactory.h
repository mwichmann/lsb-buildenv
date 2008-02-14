#ifndef _QTGUI_QITEMEDITORFACTORY_H_
#define _QTGUI_QITEMEDITORFACTORY_H_

class QItemEditorCreatorBase;
// *INDENT-OFF*

class QItemEditorCreatorBase
{
private:
public:
};

class QItemEditorFactory
{
private:
public:
     ~QItemEditorFactory();
    QWidget * createEditor(QVariant::Type, QWidget*) const;
    QByteArray valuePropertyName(QVariant::Type) const;
    void registerEditor(QVariant::Type, QItemEditorCreatorBase*);
     defaultFactory();
    void setDefaultFactory(QItemEditorFactory*);
};

// *INDENT-ON*
#endif
