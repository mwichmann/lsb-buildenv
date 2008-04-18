#if (__LSB_VERSION__ >= 31 )
#ifndef _QTNETWORK_QTCPSOCKET_H_
#define _QTNETWORK_QTCPSOCKET_H_

class QTcpSocket;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef enum QtValidLicenseForNetworkModule	QtNetworkModule	
;

#endif // __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31
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

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN10QTcpSocket16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
