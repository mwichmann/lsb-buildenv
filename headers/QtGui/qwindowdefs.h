#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QWINDOWDEFS_H_
#define _QTGUI_QWINDOWDEFS_H_

#include <QtCore/qlist.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
    typedef QList < QWidget * >QWidgetList;

    typedef unsigned long int WId;

#endif				/* __LSB_VERSION__ >= 3.1 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
