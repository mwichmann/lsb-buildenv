#if (__LSB_VERSION__ >= 31 )
#ifndef _QTNETWORK_QTCPSOCKET_H_
#define _QTNETWORK_QTCPSOCKET_H_

class QTcpSocket;
// *INDENT-OFF*

typedef enum QtValidLicenseForNetworkModule	QtNetworkModule	
;

class QTcpSocket : public QAbstractSocket
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QTcpSocket(QObject*);
     ~QTcpSocket();
};


/* Function prototypes */

extern struct QMetaObject _ZN10QTcpSocket16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
