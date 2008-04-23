#if (__LSB_VERSION__ >= 32 )
#ifndef _CUPS_CUPS_H_
#define _CUPS_CUPS_H_

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <utmpx.h>
#include <cups/ppd.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
#define _CUPS_CUPS_H_
#define CUPS_VERSION_MAJOR	1
#define CUPS_VERSION_MINOR	1
#define CUPS_VERSION	1.0123
#define CUPS_VERSION_PATCH	23
#define cupsLangDefault()	cupsLangGet(NULL)
#endif				/* __LSB_VERSION__ >= 3.2 */



#if __LSB_VERSION__ >= 32
    typedef enum {
	CUPS_AUTO_ENCODING = -1,
	CUPS_US_ASCII = 0,
	CUPS_ISO8859_1 = 1,
	CUPS_ISO8859_2 = 2,
	CUPS_ISO8859_3 = 3,
	CUPS_ISO8859_4 = 4,
	CUPS_ISO8859_5 = 5,
	CUPS_ISO8859_6 = 6,
	CUPS_ISO8859_7 = 7,
	CUPS_ISO8859_8 = 8,
	CUPS_ISO8859_9 = 9,
	CUPS_ISO8859_10 = 10,
	CUPS_UTF8 = 11,
	CUPS_ISO8859_13 = 12,
	CUPS_ISO8859_14 = 13,
	CUPS_ISO8859_15 = 14,
	CUPS_WINDOWS_874 = 15,
	CUPS_WINDOWS_1250 = 16,
	CUPS_WINDOWS_1251 = 17,
	CUPS_WINDOWS_1252 = 18,
	CUPS_WINDOWS_1253 = 19,
	CUPS_WINDOWS_1254 = 20,
	CUPS_WINDOWS_1255 = 21,
	CUPS_WINDOWS_1256 = 22,
	CUPS_WINDOWS_1257 = 23,
	CUPS_WINDOWS_1258 = 24,
	CUPS_KOI8_R = 25,
	CUPS_KOI8_U = 26
    } cups_encoding_t;

    typedef struct cups_lang_str cups_lang_t;

    typedef enum {
	HTTP_ENCRYPT_IF_REQUESTED = 0,
	HTTP_ENCRYPT_NEVER = 1,
	HTTP_ENCRYPT_REQUIRED = 2,
	HTTP_ENCRYPT_ALWAYS = 3
    } http_encryption_t;

    typedef struct {
	char *name;
	char *value;
    } cups_option_t;

    typedef struct {
	char *name;
	char *instance;
	int is_default;
	int num_options;
	cups_option_t *options;
    } cups_dest_t;

    typedef enum {
	HTTP_WAITING = 0,
	HTTP_OPTIONS = 1,
	HTTP_GET = 2,
	HTTP_GET_SEND = 3,
	HTTP_HEAD = 4,
	HTTP_POST = 5,
	HTTP_POST_RECV = 6,
	HTTP_POST_SEND = 7,
	HTTP_PUT = 8,
	HTTP_PUT_RECV = 9,
	HTTP_DELETE = 10,
	HTTP_TRACE = 11,
	HTTP_CLOSE = 12,
	HTTP_STATUS = 13
    } http_state_t;

    typedef enum {
	HTTP_ERROR = -1,
	HTTP_CONTINUE = 100,
	HTTP_SWITCHING_PROTOCOLS = 101,
	HTTP_OK = 200,
	HTTP_CREATED = 201,
	HTTP_ACCEPTED = 202,
	HTTP_NOT_AUTHORITATIVE = 203,
	HTTP_NO_CONTENT = 204,
	HTTP_RESET_CONTENT = 205,
	HTTP_PARTIAL_CONTENT = 206,
	HTTP_MULTIPLE_CHOICES = 300,
	HTTP_MOVED_PERMANENTLY = 301,
	HTTP_MOVED_TEMPORARILY = 302,
	HTTP_SEE_OTHER = 303,
	HTTP_NOT_MODIFIED = 304,
	HTTP_USE_PROXY = 305,
	HTTP_BAD_REQUEST = 400,
	HTTP_UNAUTHORIZED = 401,
	HTTP_PAYMENT_REQUIRED = 402,
	HTTP_FORBIDDEN = 403,
	HTTP_NOT_FOUND = 404,
	HTTP_METHOD_NOT_ALLOWED = 405,
	HTTP_NOT_ACCEPTABLE = 406,
	HTTP_PROXY_AUTHENTICATION = 407,
	HTTP_REQUEST_TIMEOUT = 408,
	HTTP_CONFLICT = 409,
	HTTP_GONE = 410,
	HTTP_LENGTH_REQUIRED = 411,
	HTTP_PRECONDITION = 412,
	HTTP_REQUEST_TOO_LARGE = 413,
	HTTP_URI_TOO_LONG = 414,
	HTTP_UNSUPPORTED_MEDIATYPE = 415,
	HTTP_UPGRADE_REQUIRED = 426,
	HTTP_SERVER_ERROR = 500,
	HTTP_NOT_IMPLEMENTED = 501,
	HTTP_BAD_GATEWAY = 502,
	HTTP_SERVICE_UNAVAILABLE = 503,
	HTTP_GATEWAY_TIMEOUT = 504,
	HTTP_NOT_SUPPORTED = 505
    } http_status_t;

    typedef enum {
	HTTP_0_9 = 9,
	HTTP_1_0 = 100,
	HTTP_1_1 = 101
    } http_version_t;

    typedef enum {
	HTTP_KEEPALIVE_OFF = 0,
	HTTP_KEEPALIVE_ON = 1
    } http_keepalive_t;

    typedef enum {
	HTTP_ENCODE_LENGTH = 0,
	HTTP_ENCODE_CHUNKED = 1
    } http_encoding_t;

    typedef unsigned int md5_word_t;

    typedef unsigned char md5_byte_t;

    typedef struct md5_state_s md5_state_t;

    typedef enum {
	IPP_JOB_PENDING = 3,
	IPP_JOB_HELD = 4,
	IPP_JOB_PROCESSING = 5,
	IPP_JOB_STOPPED = 6,
	IPP_JOB_CANCELLED = 7,
	IPP_JOB_ABORTED = 8,
	IPP_JOB_COMPLETED = 9
    } ipp_jstate_t;

    typedef struct {
	int id;
	char *dest;
	char *title;
	char *user;
	char *format;
	ipp_jstate_t state;
	int size;
	int priority;
	time_t completed_time;
	time_t creation_time;
	time_t processing_time;
    } cups_job_t;

    typedef enum {
	IPP_OK = 0,
	IPP_OK_SUBST = 1,
	IPP_OK_CONFLICT = 2,
	IPP_OK_IGNORED_SUBSCRIPTIONS = 3,
	IPP_OK_IGNORED_NOTIFICATIONS = 4,
	IPP_OK_TOO_MANY_EVENTS = 5,
	IPP_OK_BUT_CANCEL_SUBSCRIPTION = 6,
	IPP_REDIRECTION_OTHER_SITE = 768,
	IPP_BAD_REQUEST = 1024,
	IPP_FORBIDDEN = 1025,
	IPP_NOT_AUTHENTICATED = 1026,
	IPP_NOT_AUTHORIZED = 1027,
	IPP_NOT_POSSIBLE = 1028,
	IPP_TIMEOUT = 1029,
	IPP_NOT_FOUND = 1030,
	IPP_GONE = 1031,
	IPP_REQUEST_ENTITY = 1032,
	IPP_REQUEST_VALUE = 1033,
	IPP_DOCUMENT_FORMAT = 1034,
	IPP_ATTRIBUTES = 1035,
	IPP_URI_SCHEME = 1036,
	IPP_CHARSET = 1037,
	IPP_CONFLICT = 1038,
	IPP_COMPRESSION_NOT_SUPPORTED = 1039,
	IPP_COMPRESSION_ERROR = 1040,
	IPP_DOCUMENT_FORMAT_ERROR = 1041,
	IPP_DOCUMENT_ACCESS_ERROR = 1042,
	IPP_ATTRIBUTES_NOT_SETTABLE = 1043,
	IPP_IGNORED_ALL_SUBSCRIPTIONS = 1044,
	IPP_TOO_MANY_SUBSCRIPTIONS = 1045,
	IPP_IGNORED_ALL_NOTIFICATIONS = 1046,
	IPP_PRINT_SUPPORT_FILE_NOT_FOUND = 1047,
	IPP_INTERNAL_ERROR = 1280,
	IPP_OPERATION_NOT_SUPPORTED = 1281,
	IPP_SERVICE_UNAVAILABLE = 1282,
	IPP_VERSION_NOT_SUPPORTED = 1283,
	IPP_DEVICE_ERROR = 1284,
	IPP_TEMPORARY_ERROR = 1285,
	IPP_NOT_ACCEPTING = 1286,
	IPP_PRINTER_BUSY = 1287,
	IPP_ERROR_JOB_CANCELLED = 1288,
	IPP_MULTIPLE_JOBS_NOT_SUPPORTED = 1289,
	IPP_PRINTER_IS_DEACTIVATED = 1290
    } ipp_status_t;

#endif				/* __LSB_VERSION__ >= 3.2 */

#if __LSB_VERSION__ >= 32

    struct cups_lang_str {
	struct cups_lang_str *next;
	int used;
	cups_encoding_t encoding;
	char language[16];
	char *messages[506];
    };


    struct md5_state_s {
	md5_word_t count[2];
	md5_word_t abcd[4];
	md5_byte_t buf[64];
    };

#endif				/* __LSB_VERSION__ >= 3.2 */


#if __LSB_VERSION__ >= 32
    typedef struct {
	int fd;
	int blocking;
	int error;
	time_t activity;
	http_state_t state;
	http_status_t status;
	http_version_t version;
	http_keepalive_t keep_alive;
	struct sockaddr_in hostaddr;
	char hostname[256];
	char fields[27][256];
	char *data;
	http_encoding_t data_encoding;
	int data_remaining;
	int used;
	char buffer[2048];
	int auth_type;
	md5_state_t md5_state;
	char nonce[256];
	int nonce_count;
	void *tls;
	http_encryption_t encryption;
	fd_set *input_set;
	http_status_t expect;
	char *cookie;
	char authstring[256];
	char userpass[256];
	int digest_tries;
    } http_t;

#endif				/* __LSB_VERSION__ >= 3.2 */


/* Function prototypes */

#if __LSB_VERSION__ >= 32
    extern int cupsAddDest(const char *, const char *, int,
			   cups_dest_t * *);
    extern int cupsAddOption(const char *, const char *, int,
			     cups_option_t * *);
    extern int cupsCancelJob(const char *, int);
    extern http_encryption_t cupsEncryption(void);
    extern void cupsFreeDests(int, cups_dest_t *);
    extern void cupsFreeJobs(int, cups_job_t *);
    extern void cupsFreeOptions(int, cups_option_t *);
    extern const char *cupsGetDefault(void);
    extern cups_dest_t *cupsGetDest(const char *, const char *, int,
				    cups_dest_t *);
    extern int cupsGetDests(cups_dest_t * *);
    extern int cupsGetJobs(cups_job_t * *, const char *, int, int);
    extern const char *cupsGetOption(const char *, int, cups_option_t *);
    extern const char *cupsGetPPD(const char *);
    extern const char *cupsGetPassword(const char *);
    extern char *cupsLangEncoding(cups_lang_t *);
    extern void cupsLangFlush(void);
    extern void cupsLangFree(cups_lang_t *);
    extern cups_lang_t *cupsLangGet(const char *);
    extern ipp_status_t cupsLastError(void);
    extern int cupsMarkOptions(ppd_file_t *, int, cups_option_t *);
    extern int cupsParseOptions(const char *, int, cups_option_t * *);
    extern int cupsPrintFile(const char *, const char *, const char *, int,
			     cups_option_t *);
    extern int cupsPrintFiles(const char *, int, const char **,
			      const char *, int, cups_option_t *);
    extern const char *cupsServer(void);
    extern void cupsSetDests(int, cups_dest_t *);
    extern void cupsSetEncryption(http_encryption_t);
    extern void cupsSetPasswordCB(const char *(*)(const char *)
	);
    extern void cupsSetServer(const char *);
    extern void cupsSetUser(const char *);
    extern int cupsTempFd(char *, int);
    extern const char *cupsUser(void);
#endif				/* __LSB_VERSION__ >= 3.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
