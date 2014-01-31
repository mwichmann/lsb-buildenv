#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPIXMAP_H_
#define _QTGUI_QPIXMAP_H_

class QPixmap;
// *INDENT-OFF*

class QPixmap;

enum QPixmap::ColorMode	
{
Auto = 0,	
Color = 1,	
Mono = 2
}
;

enum QPixmap::Type	
{
PixmapType = 0,	
BitmapType = 1
}
;


/* Function prototypes */

extern void copyBlt(QPixmap*, int, int, QPixmap const*, int, int, int, int)(QPixmap *, const QPixmap *);
extern QDataStream operator<<(QDataStream&, QPixmap const&)(QDataStream &, const QPixmap &);
extern QDataStream operator>>(QDataStream&, QPixmap&)(QDataStream &, QPixmap &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
