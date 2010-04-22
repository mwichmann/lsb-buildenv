#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QDRAWUTIL_H_
#define _QTGUI_QDRAWUTIL_H_

#include <QtCore/qnamespace.h>
#include <QtCore/qstring.h>
#include <QtCore/qpoint.h>
#include <QtCore/qrect.h>
#include <QtGui/qcolor.h>
#include <QtGui/qbrush.h>
#include <QtGui/qpalette.h>
#include <QtGui/qpaintdevice.h>
#include <QtGui/qpixmap.h>
#include <QtGui/qpainter.h>

#if !defined(LSB_DECL_DEPRECATED)
#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && (__GNUC__ - 0 > 3 || (__GNUC__ - 0 == 3 && __GNUC_MINOR__ - 0 >= 2))
#define LSB_DECL_DEPRECATED __attribute__ ((__deprecated__))
#else
#define LSB_DECL_DEPRECATED
#endif
#endif				/* LSB_DECL_DEPRECATED */

#ifdef __cplusplus
extern "C" {
#endif


/* Function prototypes */

    /* This function is obsolete. Use QStyle::drawPrimitive() instead. */
    extern void
	_Z10qDrawArrowP8QPainterN2Qt9ArrowTypeENS1_8GUIStyleEbiiiiRK8QPaletteb
	(QPainter *, enum _ZN2Qt9ArrowTypeE, enum _ZN2Qt8GUIStyleE,
	 const QPalette &)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    extern void
	_Z13qDrawWinPanelP8QPainterRK5QRectRK8QPalettebPK6QBrush(QPainter
								 *,
								 const
								 QRect &,
								 const
								 QPalette
								 &,
								 const
								 QBrush *);
    extern void
	_Z13qDrawWinPanelP8QPainteriiiiRK8QPalettebPK6QBrush(QPainter *,
							     const QPalette
							     &,
							     const QBrush
							     *);
    extern void
	_Z14qDrawPlainRectP8QPainterRK5QRectRK6QColoriPK6QBrush(QPainter *,
								const QRect
								&,
								const
								QColor &,
								const
								QBrush *);
    extern void
	_Z14qDrawPlainRectP8QPainteriiiiRK6QColoriPK6QBrush(QPainter *,
							    const QColor &,
							    const QBrush
							    *);
    extern void
	_Z14qDrawShadeLineP8QPainterRK6QPointS3_RK8QPalettebii(QPainter *,
							       const QPoint
							       &,
							       const QPoint
							       &,
							       const
							       QPalette &);
    extern void _Z14qDrawShadeLineP8QPainteriiiiRK8QPalettebii(QPainter *,
							       const
							       QPalette &);
    extern void
	_Z14qDrawShadeRectP8QPainterRK5QRectRK8QPalettebiiPK6QBrush
	(QPainter *, const QRect &, const QPalette &, const QBrush *);
    extern void
	_Z14qDrawShadeRectP8QPainteriiiiRK8QPalettebiiPK6QBrush(QPainter *,
								const
								QPalette &,
								const
								QBrush *);
    extern void
	_Z14qDrawWinButtonP8QPainterRK5QRectRK8QPalettebPK6QBrush(QPainter
								  *,
								  const
								  QRect &,
								  const
								  QPalette
								  &,
								  const
								  QBrush
								  *);
    extern void
	_Z14qDrawWinButtonP8QPainteriiiiRK8QPalettebPK6QBrush(QPainter *,
							      const
							      QPalette &,
							      const QBrush
							      *);
    extern void
	_Z15qDrawShadePanelP8QPainterRK5QRectRK8QPalettebiPK6QBrush
	(QPainter *, const QRect &, const QPalette &, const QBrush *);
    extern void
	_Z15qDrawShadePanelP8QPainteriiiiRK8QPalettebiPK6QBrush(QPainter *,
								const
								QPalette &,
								const
								QBrush *);
    /* This function is obsolete. Use QStyle::drawPrimitive() instead. */
    extern void
	_Z9qDrawItemP8QPainterN2Qt8GUIStyleEiiiiiRK8QPalettebPK7QPixmapRK7QStringiPK6QColor
	(QPainter *, enum _ZN2Qt8GUIStyleE, const QPalette &,
	 const QPixmap *, QString & &, const QColor *)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* This function is obsolete. Use QStyle::drawPrimitive() instead. */
    extern QRect
	_Z9qItemRectP8QPainterN2Qt8GUIStyleEiiiiibPK7QPixmapRK7QStringi
	(QPainter *, enum _ZN2Qt8GUIStyleE, const QPixmap *, QString & &)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
