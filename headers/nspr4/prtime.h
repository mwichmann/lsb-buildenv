#if (__LSB_VERSION__ >= 40 )
#ifndef _NSPR4_PRTIME_H_
#define _NSPR4_PRTIME_H_

#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define prtime_h___


    typedef PRInt64 PRTime;

#if __LSB_VERSION__ >= 50
    typedef struct PRTimeParameters PRTimeParameters;

    typedef struct PRExplodedTime PRExplodedTime;

    typedef PRTimeParameters(*PRTimeParamFn) (const PRExplodedTime * gmt);

#endif				/* __LSB_VERSION__ >= 5.0 */

#if __LSB_VERSION__ >= 50
    struct PRTimeParameters {
	PRInt32 tp_gmt_offset;
	PRInt32 tp_dst_offset;
    };

    struct PRExplodedTime {
	PRInt32 tm_usec;
	PRInt32 tm_sec;
	PRInt32 tm_min;
	PRInt32 tm_hour;
	PRInt32 tm_mday;
	PRInt32 tm_month;
	PRInt16 tm_year;
	PRInt8 tm_wday;
	PRInt16 tm_yday;
	PRTimeParameters tm_params;
    };

#endif				/* __LSB_VERSION__ >= 5.0 */


/* Function prototypes */

    extern PRTime PR_Now(void);
#if __LSB_VERSION__ >= 50
    extern void PR_ExplodeTime(PRTime usecs, PRTimeParamFn params,
			       PRExplodedTime * expoded);
    extern PRUint32 PR_FormatTime(char *buf, int buflen, const char *fmt,
				  const PRExplodedTime * tm);
    extern PRTimeParameters PR_GMTParameters(const PRExplodedTime * gmt);
    extern PRTime PR_ImplodeTime(const PRExplodedTime * exploded);
    extern PRTimeParameters PR_LocalTimeParameters(const PRExplodedTime *
						   gmt);
    extern void PR_NormalizeTime(PRExplodedTime * exploded,
				 PRTimeParamFn params);
    extern PRStatus PR_ParseTimeString(const char *string,
				       PRBool default_to_gmt,
				       PRTime * result);
    extern PRStatus PR_ParseTimeStringToExplodedTime(const char *string,
						     PRBool default_to_gmt,
						     PRExplodedTime *
						     result);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
