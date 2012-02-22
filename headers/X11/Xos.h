#if (__LSB_VERSION__ >= 50 )
#ifndef _X11_XOS_H_
#define _X11_XOS_H_

#include <sys/types.h>
#include <X11/Xosdefs.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/time.h>
#include <time.h>
#include <X11/Xarch.h>

#ifdef __cplusplus
extern "C" {
#endif


#define _XOS_H_
#define X_GETTIMEOFDAY(t)	gettimeofday(t, (struct timezone*)0)


#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
