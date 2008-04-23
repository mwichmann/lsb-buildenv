#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QMIMEDATA_H_
#define _QTCORE_QMIMEDATA_H_

class QMimeData;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QMimeData : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QMimeData();
     ~QMimeData();
    QList<QUrl> urls() const;
    void setUrls(QList<QUrl> const&);
    bool hasUrls() const;
    QString text() const;
    void setText(QString const&);
    bool hasText() const;
    QString html() const;
    void setHtml(QString const&);
    bool hasHtml() const;
    QVariant imageData() const;
    void setImageData(QVariant const&);
    bool hasImage() const;
    QVariant colorData() const;
    void setColorData(QVariant const&);
    bool hasColor() const;
    QByteArray data(QString const&) const;
    void setData(QString const&, QByteArray const&);
    bool hasFormat(QString const&) const;
    QStringList formats() const;
    void clear();
protected:
    QVariant retrieveData(QString const&, QVariant::Type) const;
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN9QMimeData16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
