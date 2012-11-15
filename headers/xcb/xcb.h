#if (__LSB_VERSION__ >= 50 )
#ifndef _XCB_XCB_H_
#define _XCB_XCB_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#define X_PROTOCOL	11
#define X_PROTOCOL_REVISION	0
#define X_TCP_PORT	6000
#define XCB_TYPE_PAD(T,I)	(-(I) & (sizeof(T) > 4 ? 3 : sizeof(T) - 1))
#define XCB_NONE	0L
#define XCB_COPY_FROM_PARENT	0L
#define XCB_CURRENT_TIME	0L
#define XCB_NO_SYMBOL	0L


    typedef struct xcb_connection_t xcb_connection_t;

    typedef struct {
	void *data;
	int rem;
	int index;
    } xcb_generic_iterator_t;

    typedef struct {
	uint8_t response_type;
	uint8_t pad0;
	uint16_t sequence;
	uint32_t length;
    } xcb_generic_reply_t;

    typedef struct {
	uint8_t response_type;
	uint8_t pad0;
	uint16_t sequence;
	uint32_t pad[7];
	uint32_t full_sequence;
    } xcb_generic_event_t;

    typedef struct {
	uint8_t response_type;
	uint8_t pad0;
	uint16_t sequence;
	uint32_t length;
	uint16_t event_type;
	uint16_t pad1;
	uint32_t pad[5];
	uint32_t full_sequence;
    } xcb_ge_event_t;

    typedef struct {
	uint8_t response_type;
	uint8_t error_code;
	uint16_t sequence;
	uint32_t resource_id;
	uint16_t minor_code;
	uint8_t major_code;
	uint8_t pad0;
	uint32_t pad[5];
	uint32_t full_sequence;
    } xcb_generic_error_t;

#include <xcb/xcbext.h>
    typedef struct {
	unsigned int sequence;
    } xcb_void_cookie_t;

#include <xcb/xproto.h>
    typedef struct {
	int namelen;
	char *name;
	int datalen;
	char *data;
    } xcb_auth_info_t;

    typedef struct xcb_extension_t xcb_extension_t;


/* Function prototypes */

    extern xcb_connection_t *xcb_connect(const char *displayname,
					 int *screenp);
    extern xcb_connection_t *xcb_connect_to_display_with_auth_info(const
								   char
								   *display,
								   xcb_auth_info_t
								   * auth,
								   int
								   *screen);
    extern xcb_connection_t *xcb_connect_to_fd(int fd,
					       xcb_auth_info_t *
					       auth_info);
    extern int xcb_connection_has_error(xcb_connection_t * c);
    extern void xcb_discard_reply(xcb_connection_t * c,
				  unsigned int sequence);
    extern void xcb_disconnect(xcb_connection_t * c);
    extern int xcb_flush(xcb_connection_t * c);
    extern uint32_t xcb_generate_id(xcb_connection_t * c);
    extern const *xcb_get_extension_data(xcb_connection_t * c,
					 xcb_extension_t * ext);
    extern int xcb_get_file_descriptor(xcb_connection_t * c);
    extern uint32_t xcb_get_maximum_request_length(xcb_connection_t * c);
    extern const *xcb_get_setup(xcb_connection_t * c);
    extern int xcb_parse_display(const char *name, void host, int *display,
				 int *screen);
    extern xcb_generic_event_t *xcb_poll_for_event(xcb_connection_t * c);
    extern void xcb_prefetch_extension_data(xcb_connection_t * c,
					    xcb_extension_t * ext);
    extern void xcb_prefetch_maximum_request_length(xcb_connection_t * c);
    extern xcb_generic_error_t *xcb_request_check(xcb_connection_t * c,
						  xcb_void_cookie_t
						  cookie);
    extern xcb_generic_event_t *xcb_wait_for_event(xcb_connection_t * c);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
