#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QIMAGE_H_
#define _QTGUI_QIMAGE_H_

class QImageTextKeyLang;
// *INDENT-OFF*

class QImageTextKeyLang;

class QImage;

enum QImage::InvertMode	
{
InvertRgb = 0,	
InvertRgba = 1
}
;

enum QImage::Format	
{
Format_Invalid = 0,	
Format_Mono = 1,	
Format_MonoLSB = 2,	
Format_Indexed8 = 3,	
Format_RGB32 = 4,	
Format_ARGB32 = 5,	
Format_ARGB32_Premultiplied = 6
}
;

enum QImage::Endian	
{
BigEndian = 0,	
LittleEndian = 1,	
IgnoreEndian = 2
}
;


/* Function prototypes */

extern void bitBlt(QImage*, int, int, QImage const*, int, int, int, int, QFlags<Qt::ImageConversionFlag>)(QImage *, const QImage *);
extern QDataStream operator<<(QDataStream&, QImage const&)(QDataStream &, const QImage &);
extern QDataStream operator>>(QDataStream&, QImage&)(QDataStream &, QImage &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
