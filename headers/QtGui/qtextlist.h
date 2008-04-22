#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QTEXTLIST_H_
#define _QTGUI_QTEXTLIST_H_

class QTextList;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QTextList : public QTextBlockGroup
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QTextList(QTextDocument*);
     ~QTextList();
    int count() const;
    QTextBlock item(int) const;
    int itemNumber(QTextBlock const&) const;
    QString itemText(QTextBlock const&) const;
    void removeItem(int);
    void remove(QTextBlock const&);
    void add(QTextBlock const&);
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN9QTextList16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
