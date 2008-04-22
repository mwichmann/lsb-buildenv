#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QBITMAP_H_
#define _QTGUI_QBITMAP_H_

class QBitmap;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QBitmap : public QPixmap
{
private:
public:
     QBitmap();
     QBitmap(QPixmap const&);
     QBitmap(int, int);
     QBitmap(QSize const&);
     QBitmap(QString const&, char const*);
     ~QBitmap();
    QBitmap & operator=(QPixmap const&);
    QVariant operator QVariant() const;
    QBitmap fromImage(QImage const&, QFlags<Qt::ImageConversionFlag>);
    QBitmap fromData(QSize const&, unsigned char const*, QImage::Format);
    QBitmap transformed(QMatrix const&) const;
     QBitmap(int, int, unsigned char const*, bool);
     QBitmap(QSize const&, unsigned char const*, bool);
};

#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
