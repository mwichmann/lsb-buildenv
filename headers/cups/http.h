#if (__LSB_VERSION__ >= 41 )
#ifndef _CUPS_HTTP_H_
#define _CUPS_HTTP_H_

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/select.h>
#include <netdb.h>
#include <netinet/in.h>
#include <sys/un.h>
#include <stdint.h>
#include <cups/cups.h>

#if !defined(LSB_DECL_DEPRECATED)
#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && (__GNUC__ - 0 > 3 || (__GNUC__ - 0 == 3 && __GNUC_MINOR__ - 0 >= 2))
#define LSB_DECL_DEPRECATED __attribute__ ((__deprecated__))
#else
#define LSB_DECL_DEPRECATED
#endif
#endif				/* LSB_DECL_DEPRECATED */

#ifdef __cplusplus
extern "C" {
#endif


#define HTTP_MAX_URI	1024
#define HTTP_MAX_BUFFER	2048
#define HTTP_MAX_HOST	256
#define HTTP_MAX_VALUE	256


    typedef enum http_auth_e {
	HTTP_AUTH_NONE,
	HTTP_AUTH_BASIC,
	HTTP_AUTH_MD5,
	HTTP_AUTH_MD5_SESS,
	HTTP_AUTH_MD5_INT,
	HTTP_AUTH_MD5_SESS_INT,
	HTTP_AUTH_NEGOTIATE
    } http_auth_t;

    typedef enum http_field_e {
	HTTP_FIELD_UNKNOWN,
	HTTP_FIELD_ACCEPT_LANGUAGE,
	HTTP_FIELD_ACCEPT_RANGES,
	HTTP_FIELD_AUTHORIZATION,
	HTTP_FIELD_CONNECTION,
	HTTP_FIELD_CONTENT_ENCODING,
	HTTP_FIELD_CONTENT_LANGUAGE,
	HTTP_FIELD_CONTENT_LENGTH,
	HTTP_FIELD_CONTENT_LOCATION,
	HTTP_FIELD_CONTENT_MD5,
	HTTP_FIELD_CONTENT_RANGE,
	HTTP_FIELD_CONTENT_TYPE,
	HTTP_FIELD_CONTENT_VERSION,
	HTTP_FIELD_DATE,
	HTTP_FIELD_HOST,
	HTTP_FIELD_IF_MODIFIED_SINCE,
	HTTP_FIELD_IF_UNMODIFIED_SINCE,
	HTTP_FIELD_KEEP_ALIVE,
	HTTP_FIELD_LAST_MODIFIED,
	HTTP_FIELD_LINK,
	HTTP_FIELD_LOCATION,
	HTTP_FIELD_RANGE,
	HTTP_FIELD_REFERER,
	HTTP_FIELD_RETRY_AFTER,
	HTTP_FIELD_TRANSFER_ENCODING,
	HTTP_FIELD_UPGRADE,
	HTTP_FIELD_USER_AGENT,
	HTTP_FIELD_WWW_AUTHENTICATE,
	HTTP_FIELD_MAX
    } http_field_t;

    typedef enum http_uri_status_e {
	HTTP_URI_OVERFLOW,
	HTTP_URI_BAD_ARGUMENTS,
	HTTP_URI_BAD_RESOURCE,
	HTTP_URI_BAD_PORT,
	HTTP_URI_BAD_HOSTNAME,
	HTTP_URI_BAD_USERNAME,
	HTTP_URI_BAD_SCHEME,
	HTTP_URI_BAD_URI,
	HTTP_URI_OK,
	HTTP_URI_MISSING_SCHEME,
	HTTP_URI_UNKNOWN_SCHEME,
	HTTP_URI_MISSING_RESOURCE
    } http_uri_status_t;

    typedef enum http_uri_coding_e {
	HTTP_URI_CODING_NONE,
	HTTP_URI_CODING_USERNAME,
	HTTP_URI_CODING_HOSTNAME,
	HTTP_URI_CODING_RESOURCE,
	HTTP_URI_CODING_MOST,
	HTTP_URI_CODING_QUERY,
	HTTP_URI_CODING_ALL
    } http_uri_coding_t;

    typedef union _http_addr_u http_addr_t;

    typedef struct http_addrlist_s http_addrlist_t;

    union _http_addr_u {
	struct sockaddr addr;
	struct sockaddr_in ipv4;
	struct sockaddr_in6 ipv6;
	struct sockaddr_un un;
	char pad[256];
    };

    struct http_addrlist_s {
	struct http_addrlist_s *next;
	http_addr_t addr;
    };


/* Function prototypes */

    extern void httpBlocking(http_t * http, int b);
    extern int httpCheck(http_t * http);
    extern void httpClearCookie(http_t * http);
    extern void httpClearFields(http_t * http);
    extern void httpClose(http_t * http);
    /* This function is deprecated. Use
       httpConnectEncrypt instead */
    extern http_t *httpConnect(const char *host, int port)
#if __LSB_VERSION__ >= 50
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 50 */
    ;
    extern http_t *httpConnectEncrypt(const char *host, int port,
				      http_encryption_t encryption);
    extern char *httpDecode64_2(char *out, int *outlen, const char *in);
    extern int httpDelete(http_t * http, const char *uri);
    extern char *httpEncode64_2(char *out, int outlen, const char *in,
				int inlen);
    extern int httpEncryption(http_t * http, http_encryption_t e);
    extern int httpError(http_t * http);
    extern void httpFlush(http_t * http);
    extern int httpGet(http_t * http, const char *uri);
    extern const char *httpGetCookie(http_t * http);
    extern const char *httpGetDateString(time_t t);
    extern time_t httpGetDateTime(const char *s);
    extern const char *httpGetField(http_t * http, http_field_t field);
    extern struct hostent *httpGetHostByName(const char *name);
    extern char *httpGetSubField(http_t * http, http_field_t field,
				 const char *name, char *value);
    extern char *httpGets(char *line, int length, http_t * http);
    extern int httpHead(http_t * http, const char *uri);
    extern void httpInitialize(void);
    extern char *httpMD5(const char *, const char *, const char *, char *);
    extern char *httpMD5Final(const char *, const char *, const char *,
			      char *);
    extern char *httpMD5String(const unsigned char *, char *);
    extern int httpOptions(http_t * http, const char *uri);
    extern int httpPost(http_t * http, const char *uri);
    extern int httpPut(http_t * http, const char *uri);
    extern int httpReconnect(http_t * http);
    extern void httpSetCookie(http_t * http, const char *cookie);
    extern void httpSetField(http_t * http, http_field_t field,
			     const char *value);
    extern const char *httpStatus(http_status_t status);
    extern int httpTrace(http_t * http, const char *uri);
    extern http_status_t httpUpdate(http_t * http);
    extern int httpWait(http_t * http, int msec);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
