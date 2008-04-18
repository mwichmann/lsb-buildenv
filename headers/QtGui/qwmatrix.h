#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QWMATRIX_H_
#define _QTGUI_QWMATRIX_H_

#include <QtGui/qmatrix.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
    typedef QMatrix QWMatrix;

#endif				// __LSB_VERSION__ >= 3.1

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
