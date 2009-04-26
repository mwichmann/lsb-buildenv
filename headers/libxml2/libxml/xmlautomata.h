#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_XMLAUTOMATA_H_
#define _LIBXML2_LIBXML_XMLAUTOMATA_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/xmlregexp.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _xmlAutomataState xmlAutomataState;

    typedef xmlAutomataState *xmlAutomataStatePtr;

    typedef struct _xmlAutomata xmlAutomata;

    typedef xmlAutomata *xmlAutomataPtr;


/* Function prototypes */

    extern xmlRegexpPtr xmlAutomataCompile(xmlAutomataPtr);
    extern xmlAutomataStatePtr xmlAutomataGetInitState(xmlAutomataPtr);
    extern int xmlAutomataIsDeterminist(xmlAutomataPtr);
    extern xmlAutomataStatePtr xmlAutomataNewAllTrans(xmlAutomataPtr,
						      xmlAutomataStatePtr,
						      xmlAutomataStatePtr,
						      int);
    extern xmlAutomataStatePtr xmlAutomataNewCountTrans(xmlAutomataPtr,
							xmlAutomataStatePtr,
							xmlAutomataStatePtr,
							const xmlChar *,
							int, int, void *);
    extern xmlAutomataStatePtr xmlAutomataNewCountTrans2(xmlAutomataPtr,
							 xmlAutomataStatePtr,
							 xmlAutomataStatePtr,
							 const xmlChar *,
							 const xmlChar *,
							 int, int, void *);
    extern xmlAutomataStatePtr xmlAutomataNewCountedTrans(xmlAutomataPtr,
							  xmlAutomataStatePtr,
							  xmlAutomataStatePtr,
							  int);
    extern int xmlAutomataNewCounter(xmlAutomataPtr, int, int);
    extern xmlAutomataStatePtr xmlAutomataNewCounterTrans(xmlAutomataPtr,
							  xmlAutomataStatePtr,
							  xmlAutomataStatePtr,
							  int);
    extern xmlAutomataStatePtr xmlAutomataNewEpsilon(xmlAutomataPtr,
						     xmlAutomataStatePtr,
						     xmlAutomataStatePtr);
    extern xmlAutomataStatePtr xmlAutomataNewNegTrans(xmlAutomataPtr,
						      xmlAutomataStatePtr,
						      xmlAutomataStatePtr,
						      const xmlChar *,
						      const xmlChar *,
						      void *);
    extern xmlAutomataStatePtr xmlAutomataNewOnceTrans(xmlAutomataPtr,
						       xmlAutomataStatePtr,
						       xmlAutomataStatePtr,
						       const xmlChar *,
						       int, int, void *);
    extern xmlAutomataStatePtr xmlAutomataNewOnceTrans2(xmlAutomataPtr,
							xmlAutomataStatePtr,
							xmlAutomataStatePtr,
							const xmlChar *,
							const xmlChar *,
							int, int, void *);
    extern xmlAutomataStatePtr xmlAutomataNewState(xmlAutomataPtr);
    extern xmlAutomataStatePtr xmlAutomataNewTransition(xmlAutomataPtr,
							xmlAutomataStatePtr,
							xmlAutomataStatePtr,
							const xmlChar *,
							void *);
    extern xmlAutomataStatePtr xmlAutomataNewTransition2(xmlAutomataPtr,
							 xmlAutomataStatePtr,
							 xmlAutomataStatePtr,
							 const xmlChar *,
							 const xmlChar *,
							 void *);
    extern int xmlAutomataSetFinalState(xmlAutomataPtr,
					xmlAutomataStatePtr);
    extern void xmlFreeAutomata(xmlAutomataPtr);
    extern xmlAutomataPtr xmlNewAutomata(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
