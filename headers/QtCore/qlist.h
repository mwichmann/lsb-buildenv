#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QLIST_H_
#define _QTCORE_QLIST_H_

class QList < QModelIndex >;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QList<QByteArray>
{
private:
public:
};

class QList<QFileInfo>
{
private:
public:
};

class QList<QVariant>
{
private:
public:
};

class QList<QUrl>
{
private:
public:
};

class QList<QModelIndex>
{
private:
public:
};

class QList<QHostAddress>
{
private:
public:
};

class QList<int>
{
private:
public:
};

class QList<QObject*>
{
private:
public:
};

class QList<QWidget*>
{
private:
public:
};

class QList<QPair<QString, QString> >
{
private:
public:
};

struct QListData	;

struct Data	;

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct Data _ZN9QListData11shared_nullE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
