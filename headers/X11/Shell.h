#ifndef _X11_SHELL_H_
#define _X11_SHELL_H_

#include <X11/Intrinsic.h>

#ifdef __cplusplus
extern "C" {
#endif



    extern char XtShellStrings[];
    extern WidgetClass applicationShellWidgetClass;
    extern WidgetClass overrideShellWidgetClass;
    extern WidgetClass sessionShellWidgetClass;
    extern WidgetClass shellWidgetClass;
    extern WidgetClass topLevelShellWidgetClass;
    extern WidgetClass transientShellWidgetClass;
    extern WidgetClass wmShellWidgetClass;
#ifdef __cplusplus
}
#endif
#endif
