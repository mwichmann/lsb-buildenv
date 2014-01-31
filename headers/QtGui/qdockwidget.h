#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QDOCKWIDGET_H_
#define _QTGUI_QDOCKWIDGET_H_

class QDockWidget;
// *INDENT-OFF*

typedef class QFlags<QDockWidget::DockWidgetFeature>QDockWidget::DockWidgetFeatures	
;

class QDockWidget;

enum QDockWidget::DockWidgetFeature	
{
NoDockWidgetFeatures = 0,	
DockWidgetClosable = 1,	
DockWidgetMovable = 2,	
DockWidgetFloatable = 4,	
DockWidgetFeatureMask = 7,	
AllDockWidgetFeatures = 7,	
Reserved = 255
}
;

class QFlags<QDockWidget::DockWidgetFeature>;


/* Function prototypes */

extern struct QMetaObject _ZN11QDockWidget16staticMetaObjectE;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
