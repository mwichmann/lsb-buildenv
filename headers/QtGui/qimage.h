#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QIMAGE_H_
#define _QTGUI_QIMAGE_H_

class QImageTextKeyLang;
// *INDENT-OFF*

class QImageTextKeyLang;

class QImage;

enum _ZN6QImage10InvertModeE	
{
InvertRgb = 0,	
InvertRgba = 1
}
;

enum _ZN6QImage6FormatE	
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

enum _ZN6QImage6EndianE	
{
BigEndian = 0,	
LittleEndian = 1,	
IgnoreEndian = 2
}
;


/* Function prototypes */

extern void _Z6bitBltP6QImageiiPKS_iiii6QFlagsIN2Qt19ImageConversionFlagEE(QImage *, const QImage *);
extern QDataStream _ZlsR11QDataStreamRK6QImage(QDataStream &, const QImage &);
extern QDataStream _ZrsR11QDataStreamR6QImage(QDataStream &, QImage &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
