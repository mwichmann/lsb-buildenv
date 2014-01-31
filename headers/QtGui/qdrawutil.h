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
    extern void qDrawArrow(QPainter *, Qt::ArrowType, Qt::GUIStyle, bool,
			   int, int, int, int, QPalette const &,
			   bool) (QPainter *, enum _ZN2Qt9ArrowTypeE,
				  enum _ZN2Qt8GUIStyleE, const QPalette &)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    extern void qDrawWinPanel(QPainter *, QRect const &, QPalette const &,
			      bool, QBrush const *) (QPainter *,
						     const QRect &,
						     const QPalette &,
						     const QBrush *);
    extern void qDrawWinPanel(QPainter *, int, int, int, int,
			      QPalette const &, bool,
			      QBrush const *) (QPainter *,
					       const QPalette &,
					       const QBrush *);
    extern void qDrawPlainRect(QPainter *, QRect const &, QColor const &,
			       int, QBrush const *) (QPainter *,
						     const QRect &,
						     const QColor &,
						     const QBrush *);
    extern void qDrawPlainRect(QPainter *, int, int, int, int,
			       QColor const &, int,
			       QBrush const *) (QPainter *, const QColor &,
						const QBrush *);
    extern void qDrawShadeLine(QPainter *, QPoint const &, QPoint const &,
			       QPalette const &, bool, int,
			       int) (QPainter *, const QPoint &,
				     const QPoint &, const QPalette &);
    extern void qDrawShadeLine(QPainter *, int, int, int, int,
			       QPalette const &, bool, int,
			       int) (QPainter *, const QPalette &);
    extern void qDrawShadeRect(QPainter *, QRect const &, QPalette const &,
			       bool, int, int, QBrush const *) (QPainter *,
								const QRect
								&,
								const
								QPalette &,
								const
								QBrush *);
    extern void qDrawShadeRect(QPainter *, int, int, int, int,
			       QPalette const &, bool, int, int,
			       QBrush const *) (QPainter *,
						const QPalette &,
						const QBrush *);
    extern void qDrawWinButton(QPainter *, QRect const &, QPalette const &,
			       bool, QBrush const *) (QPainter *,
						      const QRect &,
						      const QPalette &,
						      const QBrush *);
    extern void qDrawWinButton(QPainter *, int, int, int, int,
			       QPalette const &, bool,
			       QBrush const *) (QPainter *,
						const QPalette &,
						const QBrush *);
    extern void qDrawShadePanel(QPainter *, QRect const &,
				QPalette const &, bool, int,
				QBrush const *) (QPainter *, const QRect &,
						 const QPalette &,
						 const QBrush *);
    extern void qDrawShadePanel(QPainter *, int, int, int, int,
				QPalette const &, bool, int,
				QBrush const *) (QPainter *,
						 const QPalette &,
						 const QBrush *);
    /* This function is obsolete. Use QStyle::drawPrimitive() instead. */
    extern void qDrawItem(QPainter *, Qt::GUIStyle, int, int, int, int,
			  int, QPalette const &, bool, QPixmap const *,
			  QString const &, int,
			  QColor const *) (QPainter *,
					   enum _ZN2Qt8GUIStyleE,
					   const QPalette &,
					   const QPixmap *, QString & &,
					   const QColor *)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* This function is obsolete. Use QStyle::drawPrimitive() instead. */
    extern QRect qItemRect(QPainter *, Qt::GUIStyle, int, int, int, int,
			   int, bool, QPixmap const *, QString const &,
			   int) (QPainter *, enum _ZN2Qt8GUIStyleE,
				 const QPixmap *, QString & &)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
