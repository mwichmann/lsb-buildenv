#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_XPATH_H_
#define _LIBXML2_LIBXML_XPATH_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/dict.h>
#include <libxml2/libxml/entities.h>
#include <libxml2/libxml/hash.h>
#include <libxml2/libxml/xmlIO.h>

#ifdef __cplusplus
extern "C" {
#endif


#define xmlXPathNodeSetItem(ns,index)	 \
	((((ns) != NULL) && ((index) >= 0) && ((index) < (ns)->nodeNr)) ? \
	(ns)->nodeTab[(index)] : NULL)
#define xmlXPathNodeSetIsEmpty(ns)	 \
	(((ns) == NULL) || ((ns)->nodeNr == 0) || ((ns)->nodeTab == NULL))
#define xmlXPathNodeSetGetLength(ns)	((ns) ? (ns)->nodeNr : 0)
#define XML_XPATH_CHECKNS	(1<<0)
#define XML_XPATH_NOVAR	(1<<1)


    typedef struct _xmlXPathCompExpr xmlXPathCompExpr;

    typedef xmlXPathCompExpr *xmlXPathCompExprPtr;

    typedef enum {
	XPATH_UNDEFINED = 0,
	XPATH_NODESET = 1,
	XPATH_BOOLEAN = 2,
	XPATH_NUMBER = 3,
	XPATH_STRING = 4,
	XPATH_POINT = 5,
	XPATH_RANGE = 6,
	XPATH_LOCATIONSET = 7,
	XPATH_USERS = 8,
	XPATH_XSLT_TREE = 9
    } xmlXPathObjectType;

    typedef struct _xmlNodeSet xmlNodeSet;

    typedef xmlNodeSet *xmlNodeSetPtr;

    typedef struct _xmlXPathObject xmlXPathObject;

    typedef xmlXPathObject *xmlXPathObjectPtr;

    typedef int (*xmlXPathConvertFunc) (xmlXPathObjectPtr, int);

    typedef struct _xmlXPathType xmlXPathType;

    typedef xmlXPathType *xmlXPathTypePtr;

    typedef struct _xmlXPathContext xmlXPathContext;

    typedef xmlXPathContext *xmlXPathContextPtr;

    typedef struct _xmlXPathParserContext xmlXPathParserContext;

    typedef xmlXPathParserContext *xmlXPathParserContextPtr;

    typedef xmlXPathObjectPtr(*xmlXPathAxisFunc) (xmlXPathParserContextPtr,
						  xmlXPathObjectPtr);

    typedef struct _xmlXPathAxis xmlXPathAxis;

    typedef xmlXPathAxis *xmlXPathAxisPtr;

    typedef xmlXPathObjectPtr(*xmlXPathVariableLookupFunc) (void *,
							    const xmlChar
							    *,
							    const xmlChar
							    *);

    typedef void (*xmlXPathFunction) (xmlXPathParserContextPtr, int);

    typedef xmlXPathFunction(*xmlXPathFuncLookupFunc) (void *,
						       const xmlChar *,
						       const xmlChar *);

    typedef enum {
	XPATH_EXPRESSION_OK = 0,
	XPATH_NUMBER_ERROR,
	XPATH_UNFINISHED_LITERAL_ERROR,
	XPATH_START_LITERAL_ERROR,
	XPATH_VARIABLE_REF_ERROR,
	XPATH_UNDEF_VARIABLE_ERROR,
	XPATH_INVALID_PREDICATE_ERROR,
	XPATH_EXPR_ERROR,
	XPATH_UNCLOSED_ERROR,
	XPATH_UNKNOWN_FUNC_ERROR,
	XPATH_INVALID_OPERAND,
	XPATH_INVALID_TYPE,
	XPATH_INVALID_ARITY,
	XPATH_INVALID_CTXT_SIZE,
	XPATH_INVALID_CTXT_POSITION,
	XPATH_MEMORY_ERROR,
	XPTR_SYNTAX_ERROR,
	XPTR_RESOURCE_ERROR,
	XPTR_SUB_RESOURCE_ERROR,
	XPATH_UNDEF_PREFIX_ERROR,
	XPATH_ENCODING_ERROR,
	XPATH_INVALID_CHAR_ERROR,
	XPATH_INVALID_CTXT
    } xmlXPathError;

    typedef void (*xmlXPathEvalFunc) (xmlXPathParserContextPtr, int);

    typedef struct _xmlXPathFunct xmlXPathFunct;

    typedef struct _xmlXPathVariable xmlXPathVariable;

    typedef xmlXPathVariable *xmlXPathVariablePtr;

    typedef xmlXPathFunct *xmlXPathFuncPtr;

    struct _xmlNodeSet {
	int nodeNr;
	int nodeMax;
	xmlNodePtr *nodeTab;
    };

    struct _xmlXPathObject {
	xmlXPathObjectType type;
	xmlNodeSetPtr nodesetval;
	int boolval;
	double floatval;
	xmlChar *stringval;
	void *user;
	int index;
	void *user2;
	int index2;
    };

    struct _xmlXPathType {
	const xmlChar *name;
	xmlXPathConvertFunc func;
    };

    struct _xmlXPathContext {
	xmlDocPtr doc;
	xmlNodePtr node;
	int nb_variables_unused;
	int max_variables_unused;
	xmlHashTablePtr varHash;
	int nb_types;
	int max_types;
	xmlXPathTypePtr types;
	int nb_funcs_unused;
	int max_funcs_unused;
	xmlHashTablePtr funcHash;
	int nb_axis;
	int max_axis;
	xmlXPathAxisPtr axis;
	xmlNsPtr *namespaces;
	int nsNr;
	void *user;
	int contextSize;
	int proximityPosition;
	int xptr;
	xmlNodePtr here;
	xmlNodePtr origin;
	xmlHashTablePtr nsHash;
	xmlXPathVariableLookupFunc varLookupFunc;
	void *varLookupData;
	void *extra;
	const xmlChar *function;
	const xmlChar *functionURI;
	xmlXPathFuncLookupFunc funcLookupFunc;
	void *funcLookupData;
	xmlNsPtr *tmpNsList;
	int tmpNsNr;
	void *userData;
	xmlStructuredErrorFunc error;
	xmlError lastError;
	xmlNodePtr debugNode;
	xmlDictPtr dict;
	int flags;
    };

    struct _xmlXPathParserContext {
	const xmlChar *cur;
	const xmlChar *base;
	int error;
	xmlXPathContextPtr context;
	xmlXPathObjectPtr value;
	int valueNr;
	int valueMax;
	xmlXPathObjectPtr *valueTab;
	xmlXPathCompExprPtr comp;
	int xptr;
	xmlNodePtr ancestor;
    };

    struct _xmlXPathAxis {
	const xmlChar *name;
	xmlXPathAxisFunc func;
    };

    struct _xmlXPathFunct {
	const xmlChar *name;
	xmlXPathEvalFunc func;
    };

    struct _xmlXPathVariable {
	const xmlChar *name;
	xmlXPathObjectPtr value;
    };


/* Function prototypes */

    extern double xmlXPathCastBooleanToNumber(int val);
    extern xmlChar *xmlXPathCastBooleanToString(int val);
    extern int xmlXPathCastNodeSetToBoolean(xmlNodeSetPtr ns);
    extern double xmlXPathCastNodeSetToNumber(xmlNodeSetPtr ns);
    extern xmlChar *xmlXPathCastNodeSetToString(xmlNodeSetPtr ns);
    extern double xmlXPathCastNodeToNumber(xmlNodePtr node);
    extern xmlChar *xmlXPathCastNodeToString(xmlNodePtr node);
    extern int xmlXPathCastNumberToBoolean(double val);
    extern xmlChar *xmlXPathCastNumberToString(double val);
    extern int xmlXPathCastStringToBoolean(const xmlChar * val);
    extern double xmlXPathCastStringToNumber(const xmlChar * val);
    extern int xmlXPathCastToBoolean(xmlXPathObjectPtr val);
    extern double xmlXPathCastToNumber(xmlXPathObjectPtr val);
    extern xmlChar *xmlXPathCastToString(xmlXPathObjectPtr val);
    extern int xmlXPathCmpNodes(xmlNodePtr node1, xmlNodePtr node2);
    extern xmlXPathCompExprPtr xmlXPathCompile(const xmlChar * str);
    extern xmlXPathObjectPtr xmlXPathCompiledEval(xmlXPathCompExprPtr comp,
						  xmlXPathContextPtr ctx);
    extern xmlXPathObjectPtr xmlXPathConvertBoolean(xmlXPathObjectPtr val);
    extern xmlXPathObjectPtr xmlXPathConvertNumber(xmlXPathObjectPtr val);
    extern xmlXPathObjectPtr xmlXPathConvertString(xmlXPathObjectPtr val);
    extern xmlXPathCompExprPtr xmlXPathCtxtCompile(xmlXPathContextPtr ctxt,
						   const xmlChar * str);
    extern xmlXPathObjectPtr xmlXPathEval(const xmlChar * str,
					  xmlXPathContextPtr ctx);
    extern xmlXPathObjectPtr xmlXPathEvalExpression(const xmlChar * str,
						    xmlXPathContextPtr
						    ctxt);
    extern int xmlXPathEvalPredicate(xmlXPathContextPtr ctxt,
				     xmlXPathObjectPtr res);
    extern void xmlXPathFreeCompExpr(xmlXPathCompExprPtr comp);
    extern void xmlXPathFreeContext(xmlXPathContextPtr ctxt);
    extern void xmlXPathFreeNodeSet(xmlNodeSetPtr obj);
    extern void xmlXPathFreeNodeSetList(xmlXPathObjectPtr obj);
    extern void xmlXPathFreeObject(xmlXPathObjectPtr obj);
    extern void xmlXPathInit(void);
    extern int xmlXPathIsInf(double val);
    extern int xmlXPathIsNaN(double val);
    extern double xmlXPathNAN;
    extern double xmlXPathNINF;
    extern xmlXPathContextPtr xmlXPathNewContext(xmlDocPtr doc);
    extern xmlNodeSetPtr xmlXPathNodeSetCreate(xmlNodePtr val);
    extern xmlXPathObjectPtr xmlXPathObjectCopy(xmlXPathObjectPtr val);
    extern long int xmlXPathOrderDocElems(xmlDocPtr doc);
    extern double xmlXPathPINF;
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
