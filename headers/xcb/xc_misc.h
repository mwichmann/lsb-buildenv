#if (__LSB_VERSION__ >= 50 )
#ifndef _XCB_XC_MISC_H_
#define _XCB_XC_MISC_H_

#include <stdint.h>
#include <xcb/xcbext.h>
#include <xcb/xcb.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XCB_XCMISC_MAJOR_VERSION	1
#define XCB_XCMISC_MINOR_VERSION	1
#define XCB_XC_MISC_GET_VERSION	0
#define XCB_XC_MISC_GET_XID_RANGE	1
#define XCB_XC_MISC_GET_XID_LIST	2


    typedef struct {
	unsigned int sequence;
    } xcb_xc_misc_get_version_cookie_t;

    typedef struct {
	uint8_t major_opcode;
	uint8_t minor_opcode;
	uint16_t length;
	uint16_t client_major_version;
	uint16_t client_minor_version;
    } xcb_xc_misc_get_version_request_t;

    typedef struct {
	uint8_t response_type;
	uint8_t pad0;
	uint16_t sequence;
	uint32_t length;
	uint16_t server_major_version;
	uint16_t server_minor_version;
    } xcb_xc_misc_get_version_reply_t;

    typedef struct {
	unsigned int sequence;
    } xcb_xc_misc_get_xid_range_cookie_t;

    typedef struct {
	uint8_t major_opcode;
	uint8_t minor_opcode;
	uint16_t length;
    } xcb_xc_misc_get_xid_range_request_t;

    typedef struct {
	uint8_t response_type;
	uint8_t pad0;
	uint16_t sequence;
	uint32_t length;
	uint32_t start_id;
	uint32_t count;
    } xcb_xc_misc_get_xid_range_reply_t;

    typedef struct {
	unsigned int sequence;
    } xcb_xc_misc_get_xid_list_cookie_t;

    typedef struct {
	uint8_t major_opcode;
	uint8_t minor_opcode;
	uint16_t length;
	uint32_t count;
    } xcb_xc_misc_get_xid_list_request_t;

    typedef struct {
	uint8_t response_type;
	uint8_t pad0;
	uint16_t sequence;
	uint32_t length;
	uint32_t ids_len;
	uint8_t pad1[20];
    } xcb_xc_misc_get_xid_list_reply_t;


/* Function prototypes */

    extern xcb_xc_misc_get_version_cookie_t
	xcb_xc_misc_get_version(xcb_connection_t * c,
				uint16_t client_major_version,
				uint16_t client_minor_version);
    extern xcb_xc_misc_get_version_reply_t
	*xcb_xc_misc_get_version_reply(xcb_connection_t * c,
				       xcb_xc_misc_get_version_cookie_t
				       cookie, xcb_generic_error_t * *e);
    extern xcb_xc_misc_get_version_cookie_t
	xcb_xc_misc_get_version_unchecked(xcb_connection_t * c,
					  uint16_t client_major_version,
					  uint16_t client_minor_version);
    extern xcb_xc_misc_get_xid_list_cookie_t
	xcb_xc_misc_get_xid_list(xcb_connection_t * c, uint32_t count);
    extern uint32_t *xcb_xc_misc_get_xid_list_ids(const
						  xcb_xc_misc_get_xid_list_reply_t
						  * R);
    extern xcb_generic_iterator_t xcb_xc_misc_get_xid_list_ids_end(const
								   xcb_xc_misc_get_xid_list_reply_t
								   * R);
    extern int xcb_xc_misc_get_xid_list_ids_length(const
						   xcb_xc_misc_get_xid_list_reply_t
						   * R);
    extern xcb_xc_misc_get_xid_list_reply_t
	*xcb_xc_misc_get_xid_list_reply(xcb_connection_t * c,
					xcb_xc_misc_get_xid_list_cookie_t
					cookie, xcb_generic_error_t * *e);
    extern xcb_xc_misc_get_xid_list_cookie_t
	xcb_xc_misc_get_xid_list_unchecked(xcb_connection_t * c,
					   uint32_t count);
    extern xcb_xc_misc_get_xid_range_cookie_t
	xcb_xc_misc_get_xid_range(xcb_connection_t * c);
    extern xcb_xc_misc_get_xid_range_reply_t
	*xcb_xc_misc_get_xid_range_reply(xcb_connection_t * c,
					 xcb_xc_misc_get_xid_range_cookie_t
					 cookie, xcb_generic_error_t * *e);
    extern xcb_xc_misc_get_xid_range_cookie_t
	xcb_xc_misc_get_xid_range_unchecked(xcb_connection_t * c);
    extern xcb_extension_t xcb_xc_misc_id;
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
