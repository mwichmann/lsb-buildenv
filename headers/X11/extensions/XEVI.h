#if (__LSB_VERSION__ >= 30 )
#ifndef _X11_EXTENSIONS_XEVI_H_
#define _X11_EXTENSIONS_XEVI_H_

#include <X11/Xlib.h>
#include <X11/X.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define XEVI_TRANSPARENCY_NONE	0
#define XEVI_TRANSPARENCY_PIXEL	1
#define XEVI_TRANSPARENCY_MASK	2
#endif				// __LSB_VERSION__ >= 1.2





#if __LSB_VERSION__ >= 12
    typedef struct {
	VisualID core_visual_id;
	int screen;
	int level;
	unsigned int transparency_type;
	unsigned int transparency_value;
	unsigned int min_hw_colormaps;
	unsigned int max_hw_colormaps;
	unsigned int num_colormap_conflicts;
	VisualID *colormap_conflicts;
    } ExtendedVisualInfo;

#endif				// __LSB_VERSION__ >= 1.2


// Function prototypes

#if __LSB_VERSION__ >= 30
    extern int XeviGetVisualInfo(Display *, Visual *, int,
				 ExtendedVisualInfo * *, int *);
    extern int XeviQueryExtension(Display *);
    extern int XeviQueryVersion(Display *, int *, int *);
#endif				// __LSB_VERSION__ >= 3.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
