#if (__LSB_VERSION__ >= 41 )
#ifndef _CUPS_IPP_H_
#define _CUPS_IPP_H_

#include <sys/types.h>
#include <stddef.h>
#include <netinet/in.h>
#include <cups/cups.h>

#ifdef __cplusplus
extern "C" {
#endif


#define IPP_MAX_NAME	256
#define IPP_MAX_LENGTH	32767
#define IPP_PORT	631
#define IPP_MAX_VALUES	8
#define CUPS_ADD_CLASS	CUPS_ADD_MODIFY_CLASS
#define CUPS_ADD_PRINTER	CUPS_ADD_MODIFY_PRINTER
#define IPP_ERROR_JOB_CANCELLED	IPP_ERROR_JOB_CANCELED
#define IPP_JOB_CANCELLED	IPP_JOB_CANCELED
#define IPP_VERSION	"\001\001"


    typedef enum ipp_tag_e {
	IPP_TAG_ZERO,
	IPP_TAG_OPERATION,
	IPP_TAG_JOB,
	IPP_TAG_END,
	IPP_TAG_PRINTER,
	IPP_TAG_UNSUPPORTED_GROUP,
	IPP_TAG_SUBSCRIPTION,
	IPP_TAG_EVENT_NOTIFICATION,
	IPP_TAG_UNSUPPORTED_VALUE,
	IPP_TAG_DEFAULT,
	IPP_TAG_UNKNOWN,
	IPP_TAG_NOVALUE,
	IPP_TAG_NOTSETTABLE,
	IPP_TAG_DELETEATTR,
	IPP_TAG_ADMINDEFINE,
	IPP_TAG_INTEGER,
	IPP_TAG_BOOLEAN,
	IPP_TAG_ENUM,
	IPP_TAG_STRING,
	IPP_TAG_DATE,
	IPP_TAG_RESOLUTION,
	IPP_TAG_RANGE,
	IPP_TAG_BEGIN_COLLECTION,
	IPP_TAG_TEXTLANG,
	IPP_TAG_NAMELANG,
	IPP_TAG_END_COLLECTION,
	IPP_TAG_TEXT,
	IPP_TAG_NAME,
	IPP_TAG_KEYWORD,
	IPP_TAG_URI,
	IPP_TAG_URISCHEME,
	IPP_TAG_CHARSET,
	IPP_TAG_LANGUAGE,
	IPP_TAG_MIMETYPE,
	IPP_TAG_MEMBERNAME,
	IPP_TAG_MASK,
	IPP_TAG_COPY
    } ipp_tag_t;

    typedef enum ipp_res_e {
	IPP_RES_PER_INCH,
	IPP_RES_PER_CM
    } ipp_res_t;

    typedef enum ipp_finish_e {
	IPP_FINISHINGS_NONE,
	IPP_FINISHINGS_STAPLE,
	IPP_FINISHINGS_PUNCH,
	IPP_FINISHINGS_COVER,
	IPP_FINISHINGS_BIND,
	IPP_FINISHINGS_SADDLE_STITCH,
	IPP_FINISHINGS_EDGE_STITCH,
	IPP_FINISHINGS_FOLD,
	IPP_FINISHINGS_TRIM,
	IPP_FINISHINGS_BALE,
	IPP_FINISHINGS_BOOKLET_MAKER,
	IPP_FINISHINGS_JOB_OFFSET,
	IPP_FINISHINGS_STAPLE_TOP_LEFT,
	IPP_FINISHINGS_STAPLE_BOTTOM_LEFT,
	IPP_FINISHINGS_STAPLE_TOP_RIGHT,
	IPP_FINISHINGS_STAPLE_BOTTOM_RIGHT,
	IPP_FINISHINGS_EDGE_STITCH_LEFT,
	IPP_FINISHINGS_EDGE_STITCH_TOP,
	IPP_FINISHINGS_EDGE_STITCH_RIGHT,
	IPP_FINISHINGS_EDGE_STITCH_BOTTOM,
	IPP_FINISHINGS_STAPLE_DUAL_LEFT,
	IPP_FINISHINGS_STAPLE_DUAL_TOP,
	IPP_FINISHINGS_STAPLE_DUAL_RIGHT,
	IPP_FINISHINGS_STAPLE_DUAL_BOTTOM,
	IPP_FINISHINGS_BIND_LEFT,
	IPP_FINISHINGS_BIND_TOP,
	IPP_FINISHINGS_BIND_RIGHT,
	IPP_FINISHINGS_BIND_BOTTOM
    } ipp_finish_t;

    typedef enum ipp_orient_e {
	IPP_PORTRAIT,
	IPP_LANDSCAPE,
	IPP_REVERSE_LANDSCAPE,
	IPP_REVERSE_PORTRAIT
    } ipp_orient_t;

    typedef enum ipp_quality_e {
	IPP_QUALITY_DRAFT,
	IPP_QUALITY_NORMAL,
	IPP_QUALITY_HIGH
    } ipp_quality_t;

    typedef enum ipp_pstate_e {
	IPP_PRINTER_IDLE,
	IPP_PRINTER_PROCESSING,
	IPP_PRINTER_STOPPED
    } ipp_pstate_t;

    typedef enum ipp_state_e {
	IPP_ERROR,
	IPP_IDLE,
	IPP_HEADER,
	IPP_ATTRIBUTE,
	IPP_DATA
    } ipp_state_t;

    typedef enum ipp_op_e {
	IPP_PRINT_JOB,
	IPP_PRINT_URI,
	IPP_VALIDATE_JOB,
	IPP_CREATE_JOB,
	IPP_SEND_DOCUMENT,
	IPP_SEND_URI,
	IPP_CANCEL_JOB,
	IPP_GET_JOB_ATTRIBUTES,
	IPP_GET_JOBS,
	IPP_GET_PRINTER_ATTRIBUTES,
	IPP_HOLD_JOB,
	IPP_RELEASE_JOB,
	IPP_RESTART_JOB,
	IPP_PAUSE_PRINTER,
	IPP_RESUME_PRINTER,
	IPP_PURGE_JOBS,
	IPP_SET_PRINTER_ATTRIBUTES,
	IPP_SET_JOB_ATTRIBUTES,
	IPP_GET_PRINTER_SUPPORTED_VALUES,
	IPP_CREATE_PRINTER_SUBSCRIPTION,
	IPP_CREATE_JOB_SUBSCRIPTION,
	IPP_GET_SUBSCRIPTION_ATTRIBUTES,
	IPP_GET_SUBSCRIPTIONS,
	IPP_RENEW_SUBSCRIPTION,
	IPP_CANCEL_SUBSCRIPTION,
	IPP_GET_NOTIFICATIONS,
	IPP_SEND_NOTIFICATIONS,
	IPP_GET_PRINT_SUPPORT_FILES,
	IPP_ENABLE_PRINTER,
	IPP_DISABLE_PRINTER,
	IPP_PAUSE_PRINTER_AFTER_CURRENT_JOB,
	IPP_HOLD_NEW_JOBS,
	IPP_RELEASE_HELD_NEW_JOBS,
	IPP_DEACTIVATE_PRINTER,
	IPP_ACTIVATE_PRINTER,
	IPP_RESTART_PRINTER,
	IPP_SHUTDOWN_PRINTER,
	IPP_STARTUP_PRINTER,
	IPP_REPROCESS_JOB,
	IPP_CANCEL_CURRENT_JOB,
	IPP_SUSPEND_CURRENT_JOB,
	IPP_RESUME_JOB,
	IPP_PROMOTE_JOB,
	IPP_SCHEDULE_JOB_AFTER,
	IPP_PRIVATE,
	CUPS_GET_DEFAULT,
	CUPS_GET_PRINTERS,
	CUPS_ADD_MODIFY_PRINTER,
	CUPS_DELETE_PRINTER,
	CUPS_GET_CLASSES,
	CUPS_ADD_MODIFY_CLASS,
	CUPS_DELETE_CLASS,
	CUPS_ACCEPT_JOBS,
	CUPS_REJECT_JOBS,
	CUPS_SET_DEFAULT,
	CUPS_GET_DEVICES,
	CUPS_GET_PPDS,
	CUPS_MOVE_JOB,
	CUPS_AUTHENTICATE_JOB,
	CUPS_GET_PPD
    } ipp_op_t;

    typedef unsigned char ipp_uchar_t;

    typedef union ipp_request_u ipp_request_t;

    typedef struct ipp_s ipp_t;

    typedef union ipp_value_u ipp_value_t;

    typedef struct ipp_attribute_s ipp_attribute_t;

    union ipp_request_u {
	struct {
	    ipp_uchar_t version[2];
	    int op_status;
	    int request_id;
	} any;
	struct {
	    ipp_uchar_t version[2];
	    ipp_op_t operation_id;
	    int request_id;
	} op;
	struct {
	    ipp_uchar_t version[2];
	    ipp_status_t status_code;
	    int request_id;
	} status;
	struct {
	    ipp_uchar_t version[2];
	    ipp_status_t status_code;
	    int request_id;
	} event;
    };

    struct ipp_s {
	ipp_state_t state;
	ipp_request_t request;
	ipp_attribute_t *attrs;
	ipp_attribute_t *last;
	ipp_attribute_t *current;
	ipp_tag_t curtag;
    };

    union ipp_value_u {
	int integer;
	char boolean;
	ipp_uchar_t date[11];
	struct {
	    int xres;
	    int yres;
	    ipp_res_t units;
	} resolution;
	struct {
	    int lower;
	    int upper;
	} range;
	struct {
	    char *charset;
	    char *text;
	} string;
	struct {
	    int length;
	    void *data;
	} unknown;
	ipp_t *collection;
    };

    struct ipp_attribute_s {
	struct ipp_attribute_s *next;
	ipp_tag_t group_tag;
	ipp_tag_t value_tag;
	char *name;
	int num_values;
	ipp_value_t values[1];
    };


/* Function prototypes */

    extern ipp_attribute_t *ippAddBoolean(ipp_t * ipp, ipp_tag_t group,
					  const char *name, char value);
    extern ipp_attribute_t *ippAddBooleans(ipp_t * ipp, ipp_tag_t group,
					   const char *name,
					   int num_values,
					   const char *values);
    extern ipp_attribute_t *ippAddDate(ipp_t * ipp, ipp_tag_t group,
				       const char *name,
				       const ipp_uchar_t * value);
    extern ipp_attribute_t *ippAddInteger(ipp_t * ipp, ipp_tag_t group,
					  ipp_tag_t type, const char *name,
					  int value);
    extern ipp_attribute_t *ippAddIntegers(ipp_t * ipp, ipp_tag_t group,
					   ipp_tag_t type,
					   const char *name,
					   int num_values,
					   const int *values);
    extern ipp_attribute_t *ippAddRange(ipp_t * ipp, ipp_tag_t group,
					const char *name, int lower,
					int upper);
    extern ipp_attribute_t *ippAddRanges(ipp_t * ipp, ipp_tag_t group,
					 const char *name, int num_values,
					 const int *lower,
					 const int *upper);
    extern ipp_attribute_t *ippAddResolution(ipp_t * ipp, ipp_tag_t group,
					     const char *name,
					     ipp_res_t units, int xres,
					     int yres);
    extern ipp_attribute_t *ippAddResolutions(ipp_t * ipp, ipp_tag_t group,
					      const char *name,
					      int num_values,
					      ipp_res_t units,
					      const int *xres,
					      const int *yres);
    extern ipp_attribute_t *ippAddSeparator(ipp_t * ipp);
    extern ipp_attribute_t *ippAddString(ipp_t * ipp, ipp_tag_t group,
					 ipp_tag_t type, const char *name,
					 const char *charset,
					 const char *value);
    extern ipp_attribute_t *ippAddStrings(ipp_t * ipp, ipp_tag_t group,
					  ipp_tag_t type, const char *name,
					  int num_values,
					  const char *charset,
					  const char *const *values);
    extern time_t ippDateToTime(const ipp_uchar_t * date);
    extern void ippDelete(ipp_t * ipp);
    extern const char *ippErrorString(ipp_status_t error);
    extern ipp_attribute_t *ippFindAttribute(ipp_t * ipp, const char *name,
					     ipp_tag_t type);
    extern ipp_attribute_t *ippFindNextAttribute(ipp_t * ipp,
						 const char *name,
						 ipp_tag_t type);
    extern size_t ippLength(ipp_t * ipp);
    extern ipp_t *ippNew(void);
    extern int ippPort(void);
    extern ipp_state_t ippRead(http_t * http, ipp_t * ipp);
    extern void ippSetPort(int p);
    extern const ipp_uchar_t *ippTimeToDate(time_t t);
    extern ipp_state_t ippWrite(http_t * http, ipp_t * ipp);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
