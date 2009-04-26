#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPIXMAP_H_
#define _QTGUI_QPIXMAP_H_

class QPixmap;
// *INDENT-OFF*

class QPixmap;

enum _ZN7QPixmap9ColorModeE	
{
Auto = 0,	
Color = 1,	
Mono = 2
}
;

enum _ZN7QPixmap4TypeE	
{
PixmapType = 0,	
BitmapType = 1
}
;


/* Function prototypes */

extern void _Z7copyBltP7QPixmapiiPKS_iiii(QPixmap *, const QPixmap *);
extern QDataStream _ZlsR11QDataStreamRK7QPixmap(QDataStream &, const QPixmap &);
extern QDataStream _ZrsR11QDataStreamR7QPixmap(QDataStream &, QPixmap &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
