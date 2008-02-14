#ifndef _QTGUI_QDRAWUTIL_H_
#define _QTGUI_QDRAWUTIL_H_

#include <X11/Xlib.h>
#include <QtCore/qrect.h>

#ifdef __cplusplus
extern "C" {
#endif


    extern void _Z14qDrawShadeLineP8QPainteriiiiRK8QPalettebii(QPainter *,
							       int, int,
							       int, int,
							       const
							       QPalette &,
							       bool, int,
							       int);
    extern void
	_Z14qDrawShadeLineP8QPainterRK6QPointS3_RK8QPalettebii(QPainter *,
							       const QPoint
							       &,
							       const QPoint
							       &,
							       const
							       QPalette &,
							       bool, int,
							       int);
    extern void
	_Z14qDrawShadeRectP8QPainteriiiiRK8QPalettebiiPK6QBrush(QPainter *,
								int, int,
								int, int,
								const
								QPalette &,
								bool, int,
								int,
								const
								QBrush *);
    extern void
	_Z14qDrawShadeRectP8QPainterRK5QRectRK8QPalettebiiPK6QBrush
	(QPainter *, const QRect &, const QPalette &, bool, int, int,
	 const QBrush *);
    extern void
	_Z15qDrawShadePanelP8QPainteriiiiRK8QPalettebiPK6QBrush(QPainter *,
								int, int,
								int, int,
								const
								QPalette &,
								bool, int,
								const
								QBrush *);
    extern void
	_Z15qDrawShadePanelP8QPainterRK5QRectRK8QPalettebiPK6QBrush
	(QPainter *, const QRect &, const QPalette &, bool, int,
	 const QBrush *);
    extern void
	_Z14qDrawWinButtonP8QPainteriiiiRK8QPalettebPK6QBrush(QPainter *,
							      int, int,
							      int, int,
							      const
							      QPalette &,
							      bool,
							      const QBrush
							      *);
    extern void
	_Z14qDrawWinButtonP8QPainterRK5QRectRK8QPalettebPK6QBrush(QPainter
								  *,
								  const
								  QRect &,
								  const
								  QPalette
								  &, bool,
								  const
								  QBrush
								  *);
    extern void
	_Z13qDrawWinPanelP8QPainteriiiiRK8QPalettebPK6QBrush(QPainter *,
							     int, int, int,
							     int,
							     const QPalette
							     &, bool,
							     const QBrush
							     *);
    extern void
	_Z13qDrawWinPanelP8QPainterRK5QRectRK8QPalettebPK6QBrush(QPainter
								 *,
								 const
								 QRect &,
								 const
								 QPalette
								 &, bool,
								 const
								 QBrush *);
    extern void
	_Z14qDrawPlainRectP8QPainteriiiiRK6QColoriPK6QBrush(QPainter *,
							    int, int, int,
							    int,
							    const QColor &,
							    int,
							    const QBrush
							    *);
    extern void
	_Z14qDrawPlainRectP8QPainterRK5QRectRK6QColoriPK6QBrush(QPainter *,
								const QRect
								&,
								const
								QColor &,
								int,
								const
								QBrush *);
    extern QRect
	_Z9qItemRectP8QPainterN2Qt8GUIStyleEiiiiibPK7QPixmapRK7QStringi
	(QPainter *, enum Qt::GUIStyle, int, int, int, int, int, bool,
	 const QPixmap *, const QString &, int);
    extern void
	_Z9qDrawItemP8QPainterN2Qt8GUIStyleEiiiiiRK8QPalettebPK7QPixmapRK7QStringiPK6QColor
	(QPainter *, enum Qt::GUIStyle, int, int, int, int, int,
	 const QPalette &, bool, const QPixmap *, const QString &, int,
	 const QColor *);
    extern void
	_Z10qDrawArrowP8QPainterN2Qt9ArrowTypeENS1_8GUIStyleEbiiiiRK8QPaletteb
	(QPainter *, enum Qt::ArrowType, enum Qt::GUIStyle, bool, int, int,
	 int, int, const QPalette &, bool);
#ifdef __cplusplus
}
#endif
#endif
