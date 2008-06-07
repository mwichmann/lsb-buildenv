#if (__LSB_VERSION__ >= 40 )
#ifndef _X11_EXTENSIONS_XINPUT_H_
#define _X11_EXTENSIONS_XINPUT_H_

#include <X11/X.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 40
    typedef struct {
	unsigned char input_class;
	unsigned char event_type_base;
    } XInputClassInfo;

    typedef struct {
	XID device_id;
	int num_classes;
	XInputClassInfo *classes;
    } XDevice;

#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */