#if (__LSB_VERSION__ >= 11 )
#ifndef _X11_SHELL_H_
#define _X11_SHELL_H_

#include <X11/Intrinsic.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern char XtShellStrings[];
    extern WidgetClass applicationShellWidgetClass;
    extern WidgetClass overrideShellWidgetClass;
    extern WidgetClass sessionShellWidgetClass;
    extern WidgetClass shellWidgetClass;
    extern WidgetClass topLevelShellWidgetClass;
    extern WidgetClass transientShellWidgetClass;
    extern WidgetClass wmShellWidgetClass;
#endif				/* __LSB_VERSION__ >= 1.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
