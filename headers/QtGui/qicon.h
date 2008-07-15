#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QICON_H_
#define _QTGUI_QICON_H_

class QIcon;
// *INDENT-OFF*

typedef class QIcon
{
private:
public:
     QIcon();
     QIcon(QPixmap const&);
     QIcon(QIcon const&);
     QIcon(QString const&);
     QIcon(QIconEngine*);
     ~QIcon();
     operator=(QIcon const&);
    QVariant operator QVariant() const;
    QPixmap pixmap(QSize const&, QIcon::Mode, QIcon::State) const;
    QSize actualSize(QSize const&, QIcon::Mode, QIcon::State) const;
    void paint(QPainter*, QRect const&, QFlags<Qt::AlignmentFlag>, QIcon::Mode, QIcon::State) const;
    bool isNull() const;
    bool isDetached() const;
    int serialNumber() const;
    void addPixmap(QPixmap const&, QIcon::Mode, QIcon::State);
    void addFile(QString const&, QSize const&, QIcon::Mode, QIcon::State);
    void setPixmapSize(QIcon::Size, QSize const&);
    QSize pixmapSize(QIcon::Size);
    QPixmap pixmap(QIcon::Size, QIcon::Mode, QIcon::State) const;
    QPixmap pixmap(QIcon::Size, bool, QIcon::State) const;
    QPixmap pixmap() const;
}QIconSet	
;

class QIcon
{
private:
public:
     QIcon();
     QIcon(QPixmap const&);
     QIcon(QIcon const&);
     QIcon(QString const&);
     QIcon(QIconEngine*);
     ~QIcon();
     operator=(QIcon const&);
    QVariant operator QVariant() const;
    QPixmap pixmap(QSize const&, QIcon::Mode, QIcon::State) const;
    QSize actualSize(QSize const&, QIcon::Mode, QIcon::State) const;
    void paint(QPainter*, QRect const&, QFlags<Qt::AlignmentFlag>, QIcon::Mode, QIcon::State) const;
    bool isNull() const;
    bool isDetached() const;
    int serialNumber() const;
    void addPixmap(QPixmap const&, QIcon::Mode, QIcon::State);
    void addFile(QString const&, QSize const&, QIcon::Mode, QIcon::State);
    void setPixmapSize(QIcon::Size, QSize const&);
    QSize pixmapSize(QIcon::Size);
    QPixmap pixmap(QIcon::Size, QIcon::Mode, QIcon::State) const;
    QPixmap pixmap(QIcon::Size, bool, QIcon::State) const;
    QPixmap pixmap() const;
};

enum Mode	
{
Normal = 0,	
Disabled = 1,	
Active = 2
}
;

enum State	
{
On = 0,	
Off = 1
}
;

enum Size	
{
Small = 0,	
Automatic = 0,	
Large = 1
}
;

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
