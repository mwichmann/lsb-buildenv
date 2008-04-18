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


#if __LSB_VERSION__ >= 31
#define xmlXPathNodeSetItem(ns,index)	 \
	((((ns) != NULL) && ((index) >= 0) && ((index) < (ns)->nodeNr)) ? \
	(ns)->nodeTab[(index)] : NULL)
#define xmlXPathNodeSetIsEmpty(ns)	 \
	(((ns) == NULL) || ((ns)->nodeNr == 0) || ((ns)->nodeTab == NULL))
#define xmlXPathNodeSetGetLength(ns)	((ns) ? (ns)->nodeNr : 0)
#define XML_XPATH_CHECKNS	(1<<0)
#define XML_XPATH_NOVAR	(1<<1)
#endif				// __LSB_VERSION__ >= 3.1



#if __LSB_VERSION__ >= 31
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

#endif				// __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31



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

#endif				// __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
    extern double xmlXPathCastBooleanToNumber(int);
    extern xmlChar *xmlXPathCastBooleanToString(int);
    extern int xmlXPathCastNodeSetToBoolean(xmlNodeSetPtr);
    extern double xmlXPathCastNodeSetToNumber(xmlNodeSetPtr);
    extern xmlChar *xmlXPathCastNodeSetToString(xmlNodeSetPtr);
    extern double xmlXPathCastNodeToNumber(xmlNodePtr);
    extern xmlChar *xmlXPathCastNodeToString(xmlNodePtr);
    extern int xmlXPathCastNumberToBoolean(double);
    extern xmlChar *xmlXPathCastNumberToString(double);
    extern int xmlXPathCastStringToBoolean(const xmlChar *);
    extern double xmlXPathCastStringToNumber(const xmlChar *);
    extern int xmlXPathCastToBoolean(xmlXPathObjectPtr);
    extern double xmlXPathCastToNumber(xmlXPathObjectPtr);
    extern xmlChar *xmlXPathCastToString(xmlXPathObjectPtr);
    extern int xmlXPathCmpNodes(xmlNodePtr, xmlNodePtr);
    extern xmlXPathCompExprPtr xmlXPathCompile(const xmlChar *);
    extern xmlXPathObjectPtr xmlXPathCompiledEval(xmlXPathCompExprPtr,
						  xmlXPathContextPtr);
    extern xmlXPathObjectPtr xmlXPathConvertBoolean(xmlXPathObjectPtr);
    extern xmlXPathObjectPtr xmlXPathConvertNumber(xmlXPathObjectPtr);
    extern xmlXPathObjectPtr xmlXPathConvertString(xmlXPathObjectPtr);
    extern xmlXPathCompExprPtr xmlXPathCtxtCompile(xmlXPathContextPtr,
						   const xmlChar *);
    extern xmlXPathObjectPtr xmlXPathEval(const xmlChar *,
					  xmlXPathContextPtr);
    extern xmlXPathObjectPtr xmlXPathEvalExpression(const xmlChar *,
						    xmlXPathContextPtr);
    extern int xmlXPathEvalPredicate(xmlXPathContextPtr,
				     xmlXPathObjectPtr);
    extern void xmlXPathFreeCompExpr(xmlXPathCompExprPtr);
    extern void xmlXPathFreeContext(xmlXPathContextPtr);
    extern void xmlXPathFreeNodeSet(xmlNodeSetPtr);
    extern void xmlXPathFreeNodeSetList(xmlXPathObjectPtr);
    extern void xmlXPathFreeObject(xmlXPathObjectPtr);
    extern void xmlXPathInit(void);
    extern int xmlXPathIsInf(double);
    extern int xmlXPathIsNaN(double);
    extern double xmlXPathNAN;
    extern double xmlXPathNINF;
    extern xmlXPathContextPtr xmlXPathNewContext(xmlDocPtr);
    extern xmlNodeSetPtr xmlXPathNodeSetCreate(xmlNodePtr);
    extern xmlXPathObjectPtr xmlXPathObjectCopy(xmlXPathObjectPtr);
    extern long int xmlXPathOrderDocElems(xmlDocPtr);
    extern double xmlXPathPINF;
#endif				// __LSB_VERSION__ >= 3.1

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
