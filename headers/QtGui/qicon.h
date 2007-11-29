#ifndef _QTGUI_QICON_H_
#define _QTGUI_QICON_H_

class QIcon;
// *INDENT-OFF*




typedef class QIcon
{
private:
public:
}QIconSet	
;

class QIcon
{
private:
public:
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


extern QIcon _ZN5QIconC2Ev(void);
extern QIcon _ZN5QIconC1Ev(void);
extern QIcon _ZN5QIconC2ERK7QPixmap(void);
extern QIcon _ZN5QIconC1ERK7QPixmap(void);
extern QIcon _ZN5QIconC2ERKS_(void);
extern QIcon _ZN5QIconC1ERKS_(void);
extern QIcon _ZN5QIconC2ERK7QString(void);
extern QIcon _ZN5QIconC1ERK7QString(void);
extern QIcon _ZN5QIconC2EP11QIconEngine(void);
extern QIcon _ZN5QIconC1EP11QIconEngine(void);
extern  _ZN5QIconD2Ev(void);
extern  _ZN5QIconD1Ev(void);
extern QIcon _ZN5QIconaSERKS_(void);
extern QIcon _ZNK5QIconcv8QVariantEv(void);
extern QPixmap _ZNK5QIcon6pixmapERK5QSizeNS_4ModeENS_5StateE(void);
extern QSize _ZNK5QIcon10actualSizeERK5QSizeNS_4ModeENS_5StateE(void);
extern void _ZNK5QIcon5paintEP8QPainterRK5QRect6QFlagsIN2Qt13AlignmentFlagEENS_4ModeENS_5StateE(void);
extern bool _ZNK5QIcon6isNullEv(void);
extern bool _ZNK5QIcon10isDetachedEv(void);
extern int _ZNK5QIcon12serialNumberEv(void);
extern void _ZN5QIcon9addPixmapERK7QPixmapNS_4ModeENS_5StateE(void);
extern void _ZN5QIcon7addFileERK7QStringRK5QSizeNS_4ModeENS_5StateE(void);
extern void _ZN5QIcon13setPixmapSizeENS_4SizeERK5QSize(void);
extern QSize _ZN5QIcon10pixmapSizeENS_4SizeE(void);
extern QPixmap _ZNK5QIcon6pixmapENS_4SizeENS_4ModeENS_5StateE(void);
extern QPixmap _ZNK5QIcon6pixmapENS_4SizeEbNS_5StateE(void);
extern QPixmap _ZNK5QIcon6pixmapEv(void);
// *INDENT-ON*
#endif
