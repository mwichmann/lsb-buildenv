#ifndef _QTGUI_QPALETTE_H_
#define _QTGUI_QPALETTE_H_

#include <QtCore/qobjectdefs.h>
#include <QtCore/qdatastream.h>
#include <QtGui/qbrush.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N8QPalette10ColorGroupE {
	Active,
	Normal,
	Disabled,
	Inactive,
	NColorGroups,
	Current,
	All
    };

    enum N8QPalette9ColorRoleE {
	WindowText,
	Foreground,
	Button,
	Light,
	Midlight,
	Dark,
	Mid,
	Text,
	BrightText,
	ButtonText,
	Base,
	Window,
	Background,
	Shadow,
	Highlight,
	HighlightedText,
	Link,
	LinkVisited,
	AlternateBase,
	NColorRoles,
	NoRole
    };

    Unknown Type:".Class.";


    extern struct QMetaObject _ZN8QPalette16staticMetaObjectE;
    extern Class _ZN8QPaletteC2Ev(void);
    extern Class _ZN8QPaletteC1Ev(void);
    extern Class _ZN8QPaletteC2ERK6QColor(void);
    extern Class _ZN8QPaletteC1ERK6QColor(void);
    extern Class _ZN8QPaletteC2EN2Qt11GlobalColorE(void);
    extern Class _ZN8QPaletteC1EN2Qt11GlobalColorE(void);
    extern Class _ZN8QPaletteC2ERK6QColorS2_(void);
    extern Class _ZN8QPaletteC1ERK6QColorS2_(void);
    extern Class _ZN8QPaletteC2ERK6QBrushS2_S2_S2_S2_S2_S2_S2_S2_(void);
    extern Class _ZN8QPaletteC1ERK6QBrushS2_S2_S2_S2_S2_S2_S2_S2_(void);
    extern Class _ZN8QPaletteC2ERK6QColorS2_S2_S2_S2_S2_S2_(void);
    extern Class _ZN8QPaletteC1ERK6QColorS2_S2_S2_S2_S2_S2_(void);
    extern Class _ZN8QPaletteC2ERK11QColorGroupS2_S2_(void);
    extern Class _ZN8QPaletteC1ERK11QColorGroupS2_S2_(void);
    extern Class _ZN8QPaletteC2ERKS_(void);
    extern Class _ZN8QPaletteC1ERKS_(void);
    extern Class _ZN8QPaletteD2Ev(void);
    extern Class _ZN8QPaletteD1Ev(void);
    extern Class _ZN8QPaletteaSERKS_(void);
    extern Class _ZNK8QPalettecv8QVariantEv(void);
    extern Class _ZNK8QPalette5brushENS_10ColorGroupENS_9ColorRoleE(void);
    extern void
	_ZN8QPalette8setBrushENS_10ColorGroupENS_9ColorRoleERK6QBrush
	(void);
    extern void
	_ZN8QPalette13setColorGroupENS_10ColorGroupERK6QBrushS3_S3_S3_S3_S3_S3_S3_S3_
	(void);
    extern bool _ZNK8QPalette7isEqualENS_10ColorGroupES0_(void);
    extern bool _ZNK8QPaletteeqERKS_(void);
    extern bool _ZNK8QPalette8isCopyOfERKS_(void);
    extern int _ZNK8QPalette12serialNumberEv(void);
    extern Class _ZNK8QPalette7resolveERKS_(void);
    extern bool _ZNK11QColorGroupeqERKS_(void);
    extern Class _ZNK11QColorGroupcv8QVariantEv(void);
    extern Class _ZlsR11QDataStreamRK11QColorGroup(void);
    extern Class _ZrsR11QDataStreamR11QColorGroup(void);
    extern Class _ZlsR11QDataStreamRK8QPalette(void);
    extern Class _ZrsR11QDataStreamR8QPalette(void);
#ifdef __cplusplus
}
#endif
#endif
