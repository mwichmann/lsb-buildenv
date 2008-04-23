#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QITEMEDITORFACTORY_H_
#define _QTGUI_QITEMEDITORFACTORY_H_

class QItemEditorCreatorBase;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
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

#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
