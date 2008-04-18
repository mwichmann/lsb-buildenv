#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QPLUGIN_H_
#define _QTCORE_QPLUGIN_H_

#include <QtCore/qobject.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
    typedef QObject QtPluginInstanceFunction;

#endif				// __LSB_VERSION__ >= 3.1

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
