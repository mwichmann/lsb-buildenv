#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_OCSPT_H_
#define _NSS3_OCSPT_H_

#include <nss3/seccomon.h>
#include <nspr4/prinrval.h>
#include <nspr4/prio.h>
#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct CERTOCSPRequestStr CERTOCSPRequest;

    typedef struct CERTOCSPResponseStr CERTOCSPResponse;

    typedef struct CERTOCSPCertIDStr CERTOCSPCertID;

    typedef struct CERTOCSPSingleResponseStr CERTOCSPSingleResponse;

    typedef void *SEC_HTTP_SERVER_SESSION;

    typedef void *SEC_HTTP_REQUEST_SESSION;

    typedef SECStatus(*SEC_HttpServer_CreateSessionFcn) (const char *,
							 PRUint16,
							 SEC_HTTP_SERVER_SESSION
							 *);

    typedef
	SECStatus(*SEC_HttpServer_KeepAliveSessionFcn)
	(SEC_HTTP_SERVER_SESSION, PRPollDesc * *);

    typedef
	SECStatus(*SEC_HttpServer_FreeSessionFcn)
	(SEC_HTTP_SERVER_SESSION);

    typedef SECStatus(*SEC_HttpRequest_CreateFcn) (SEC_HTTP_SERVER_SESSION,
						   const char *,
						   const char *,
						   const char *,
						   const PRIntervalTime,
						   SEC_HTTP_REQUEST_SESSION
						   *);

    typedef
	SECStatus(*SEC_HttpRequest_SetPostDataFcn)
	(SEC_HTTP_REQUEST_SESSION, const char *, const PRUint32,
	 const char *);

    typedef
	SECStatus(*SEC_HttpRequest_AddHeaderFcn) (SEC_HTTP_REQUEST_SESSION,
						  const char *,
						  const char *);

    typedef
	SECStatus(*SEC_HttpRequest_TrySendAndReceiveFcn)
	(SEC_HTTP_REQUEST_SESSION, PRPollDesc * *, PRUint16 *,
	 const char **, const char **, const char **, PRUint32 *);

    typedef
	SECStatus(*SEC_HttpRequest_CancelFcn) (SEC_HTTP_REQUEST_SESSION);

    typedef SECStatus(*SEC_HttpRequest_FreeFcn) (SEC_HTTP_REQUEST_SESSION);

    typedef struct SEC_HttpClientFcnV1Struct SEC_HttpClientFcnV1;

    typedef struct SEC_HttpClientFcnStruct SEC_HttpClientFcn;










    struct SEC_HttpClientFcnV1Struct {
	SEC_HttpServer_CreateSessionFcn createSessionFcn;
	SEC_HttpServer_KeepAliveSessionFcn keepAliveSessionFcn;
	SEC_HttpServer_FreeSessionFcn freeSessionFcn;
	SEC_HttpRequest_CreateFcn createFcn;
	SEC_HttpRequest_SetPostDataFcn setPostDataFcn;
	SEC_HttpRequest_AddHeaderFcn addHeaderFcn;
	SEC_HttpRequest_TrySendAndReceiveFcn trySendAndReceiveFcn;
	SEC_HttpRequest_CancelFcn cancelFcn;
	SEC_HttpRequest_FreeFcn freeFcn;
    };


    struct SEC_HttpClientFcnStruct {
	PRInt16 version;
	union {
	    SEC_HttpClientFcnV1 ftable1;
	} fcnTable;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */