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



#define _CUPS_CUPS_H_
#define CUPS_VERSION_MAJOR	1
#define CUPS_VERSION_MINOR	1
#define CUPS_VERSION	1.0123
#define CUPS_VERSION_PATCH	23
#define cupsLangDefault()	cupsLangGet(NULL)


    typedef enum {
	CUPS_AUTO_ENCODING,
	CUPS_US_ASCII,
	CUPS_ISO8859_1,
	CUPS_ISO8859_2,
	CUPS_ISO8859_3,
	CUPS_ISO8859_4,
	CUPS_ISO8859_5,
	CUPS_ISO8859_6,
	CUPS_ISO8859_7,
	CUPS_ISO8859_8,
	CUPS_ISO8859_9,
	CUPS_ISO8859_10,
	CUPS_UTF8,
	CUPS_ISO8859_13,
	CUPS_ISO8859_14,
	CUPS_ISO8859_15,
	CUPS_WINDOWS_874,
	CUPS_WINDOWS_1250,
	CUPS_WINDOWS_1251,
	CUPS_WINDOWS_1252,
	CUPS_WINDOWS_1253,
	CUPS_WINDOWS_1254,
	CUPS_WINDOWS_1255,
	CUPS_WINDOWS_1256,
	CUPS_WINDOWS_1257,
	CUPS_WINDOWS_1258,
	CUPS_KOI8_R,
	CUPS_KOI8_U
    } cups_encoding_t;

    typedef struct cups_lang_str cups_lang_t;

    typedef enum {
	HTTP_ENCRYPT_IF_REQUESTED,
	HTTP_ENCRYPT_NEVER,
	HTTP_ENCRYPT_REQUIRED,
	HTTP_ENCRYPT_ALWAYS
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
	HTTP_WAITING,
	HTTP_OPTIONS,
	HTTP_GET,
	HTTP_GET_SEND,
	HTTP_HEAD,
	HTTP_POST,
	HTTP_POST_RECV,
	HTTP_POST_SEND,
	HTTP_PUT,
	HTTP_PUT_RECV,
	HTTP_DELETE,
	HTTP_TRACE,
	HTTP_CLOSE,
	HTTP_STATUS
    } http_state_t;

    typedef enum {
	HTTP_ERROR,
	HTTP_CONTINUE,
	HTTP_SWITCHING_PROTOCOLS,
	HTTP_OK,
	HTTP_CREATED,
	HTTP_ACCEPTED,
	HTTP_NOT_AUTHORITATIVE,
	HTTP_NO_CONTENT,
	HTTP_RESET_CONTENT,
	HTTP_PARTIAL_CONTENT,
	HTTP_MULTIPLE_CHOICES,
	HTTP_MOVED_PERMANENTLY,
	HTTP_MOVED_TEMPORARILY,
	HTTP_SEE_OTHER,
	HTTP_NOT_MODIFIED,
	HTTP_USE_PROXY,
	HTTP_BAD_REQUEST,
	HTTP_UNAUTHORIZED,
	HTTP_PAYMENT_REQUIRED,
	HTTP_FORBIDDEN,
	HTTP_NOT_FOUND,
	HTTP_METHOD_NOT_ALLOWED,
	HTTP_NOT_ACCEPTABLE,
	HTTP_PROXY_AUTHENTICATION,
	HTTP_REQUEST_TIMEOUT,
	HTTP_CONFLICT,
	HTTP_GONE,
	HTTP_LENGTH_REQUIRED,
	HTTP_PRECONDITION,
	HTTP_REQUEST_TOO_LARGE,
	HTTP_URI_TOO_LONG,
	HTTP_UNSUPPORTED_MEDIATYPE,
	HTTP_UPGRADE_REQUIRED,
	HTTP_SERVER_ERROR,
	HTTP_NOT_IMPLEMENTED,
	HTTP_BAD_GATEWAY,
	HTTP_SERVICE_UNAVAILABLE,
	HTTP_GATEWAY_TIMEOUT,
	HTTP_NOT_SUPPORTED
    } http_status_t;

    typedef enum {
	HTTP_0_9,
	HTTP_1_0,
	HTTP_1_1
    } http_version_t;

    typedef enum {
	HTTP_KEEPALIVE_OFF,
	HTTP_KEEPALIVE_ON
    } http_keepalive_t;

    typedef enum {
	HTTP_ENCODE_LENGTH,
	HTTP_ENCODE_CHUNKED
    } http_encoding_t;

    typedef unsigned int md5_word_t;

    typedef unsigned char md5_byte_t;

    typedef struct md5_state_s md5_state_t;

    typedef enum {
	IPP_JOB_PENDING,
	IPP_JOB_HELD,
	IPP_JOB_PROCESSING,
	IPP_JOB_STOPPED,
	IPP_JOB_CANCELLED,
	IPP_JOB_ABORTED,
	IPP_JOB_COMPLETED
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
	IPP_OK,
	IPP_OK_SUBST,
	IPP_OK_CONFLICT,
	IPP_OK_IGNORED_SUBSCRIPTIONS,
	IPP_OK_IGNORED_NOTIFICATIONS,
	IPP_OK_TOO_MANY_EVENTS,
	IPP_OK_BUT_CANCEL_SUBSCRIPTION,
	IPP_REDIRECTION_OTHER_SITE,
	IPP_BAD_REQUEST,
	IPP_FORBIDDEN,
	IPP_NOT_AUTHENTICATED,
	IPP_NOT_AUTHORIZED,
	IPP_NOT_POSSIBLE,
	IPP_TIMEOUT,
	IPP_NOT_FOUND,
	IPP_GONE,
	IPP_REQUEST_ENTITY,
	IPP_REQUEST_VALUE,
	IPP_DOCUMENT_FORMAT,
	IPP_ATTRIBUTES,
	IPP_URI_SCHEME,
	IPP_CHARSET,
	IPP_CONFLICT,
	IPP_COMPRESSION_NOT_SUPPORTED,
	IPP_COMPRESSION_ERROR,
	IPP_DOCUMENT_FORMAT_ERROR,
	IPP_DOCUMENT_ACCESS_ERROR,
	IPP_ATTRIBUTES_NOT_SETTABLE,
	IPP_IGNORED_ALL_SUBSCRIPTIONS,
	IPP_TOO_MANY_SUBSCRIPTIONS,
	IPP_IGNORED_ALL_NOTIFICATIONS,
	IPP_PRINT_SUPPORT_FILE_NOT_FOUND,
	IPP_INTERNAL_ERROR,
	IPP_OPERATION_NOT_SUPPORTED,
	IPP_SERVICE_UNAVAILABLE,
	IPP_VERSION_NOT_SUPPORTED,
	IPP_DEVICE_ERROR,
	IPP_TEMPORARY_ERROR,
	IPP_NOT_ACCEPTING,
	IPP_PRINTER_BUSY,
	IPP_ERROR_JOB_CANCELLED,
	IPP_MULTIPLE_JOBS_NOT_SUPPORTED,
	IPP_PRINTER_IS_DEACTIVATED
    } ipp_status_t;


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
	char fields[27];
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


    extern void cupsLangFree(cups_lang_t *);
    extern void cupsSetEncryption(http_encryption_t);
    extern cups_dest_t *cupsGetDest(const char *, const char *, int,
				    cups_dest_t *);
    extern int cupsGetJobs(cups_job_t * *, const char *, int, int);
    extern http_encryption_t cupsEncryption(void);
    extern void cupsFreeJobs(int, cups_job_t *);
    extern void cupsFreeOptions(int, cups_option_t *);
    extern const char *cupsGetOption(const char *, int, cups_option_t *);
    extern int cupsMarkOptions(ppd_file_t *, int, cups_option_t *);
    extern int cupsAddOption(const char *, const char *, int,
			     cups_option_t * *);
    extern int cupsGetDests(cups_dest_t * *);
    extern void cupsSetServer(const char *);
    extern const char *cupsGetPassword(const char *);
    extern void cupsSetDests(int, cups_dest_t *);
    extern int cupsParseOptions(const char *, int, cups_option_t * *);
    extern void cupsSetPasswordCB(const char *(*)(const char *)
	);
    extern void cupsSetUser(const char *);
    extern cups_lang_t *cupsLangGet(const char *);
    extern void cupsLangFlush(void);
    extern int cupsPrintFiles(const char *, int, const char **,
			      const char *, int, cups_option_t *);
    extern int cupsCancelJob(const char *, int);
    extern char *cupsLangEncoding(cups_lang_t *);
    extern void cupsFreeDests(int, cups_dest_t *);
    extern ipp_status_t cupsLastError(void);
    extern const char *cupsGetDefault(void);
    extern const char *cupsGetPPD(const char *);
    extern const char *cupsServer(void);
    extern const char *cupsUser(void);
    extern int cupsTempFd(char *, int);
    extern int cupsPrintFile(const char *, const char *, const char *, int,
			     cups_option_t *);
    extern int cupsAddDest(const char *, const char *, int,
			   cups_dest_t * *);
#ifdef __cplusplus
}
#endif
#endif
