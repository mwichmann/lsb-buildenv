#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPIXMAPCACHE_H_
#define _QTGUI_QPIXMAPCACHE_H_

class QPixmapCache;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QPixmapCache
{
private:
public:
    int cacheLimit();
    void setCacheLimit(int);
    QPixmap * find(QString const&);
    bool find(QString const&, QPixmap&);
    bool insert(QString const&, QPixmap const&);
    void remove(QString const&);
    void clear();
};

#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
