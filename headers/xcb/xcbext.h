#if (__LSB_VERSION__ >= 50 )
#ifndef _XCB_XCBEXT_H_
#define _XCB_XCBEXT_H_

#include <sys/socket.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct {
	size_t count;
	xcb_extension_t *ext;
	uint8_t opcode;
	uint8_t isvoid;
    } xcb_protocol_request_t;

    struct xcb_extension_t {
	const char *name;
	int global_id;
    };

#include <xcb/xcb.h>
    enum xcb_send_request_flags_t {
	XCB_REQUEST_CHECKED = 1 << 0,
	XCB_REQUEST_RAW = 1 << 1,
	XCB_REQUEST_DISCARD_REPLY = 1 << 2
    };


/* Function prototypes */

    extern int xcb_poll_for_reply(xcb_connection_t * c,
				  unsigned int request, void **reply,
				  xcb_generic_error_t * *error);
    extern int xcb_popcount(uint32_t mask);
    extern unsigned int xcb_send_request(xcb_connection_t * c, int flags,
					 struct iovec *vector,
					 const xcb_protocol_request_t *
					 request);
    extern int xcb_take_socket(xcb_connection_t * c,
			       void (*return_socket) (void *),
			       void *closure, int flags, *sent);
    extern void *xcb_wait_for_reply(xcb_connection_t * c,
				    unsigned int request,
				    xcb_generic_error_t * *e);
    extern int xcb_writev(xcb_connection_t * c, struct iovec *vector,
			  int count, uint64_t requests);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
