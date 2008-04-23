#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_XPATHINTERNALS_H_
#define _LIBXML2_LIBXML_XPATHINTERNALS_H_

#include <stdio.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/dict.h>
#include <libxml2/libxml/hash.h>
#include <libxml2/libxml/xmlIO.h>
#include <libxml2/libxml/xpath.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
#define xmlXPathStackIsNodeSet(ctxt)	 \
	(((ctxt)->value != NULL) && (((ctxt)->value->type == XPATH_NODESET) \
	|| ((ctxt)->value->type == XPATH_XSLT_TREE)))
#define xmlXPathStackIsExternal(ctxt)	 \
	((ctxt->value != NULL) && (ctxt->value->type == XPATH_USERS))
#define CAST_TO_BOOLEAN	 \
	if ((ctxt->value != NULL) && (ctxt->value->type != XPATH_BOOLEAN)) \
	xmlXPathBooleanFunction(ctxt, 1);
#define CAST_TO_NUMBER	 \
	if ((ctxt->value != NULL) && (ctxt->value->type != XPATH_NUMBER)) \
	xmlXPathNumberFunction(ctxt, 1);
#define CAST_TO_STRING	 \
	if ((ctxt->value != NULL) && (ctxt->value->type != XPATH_STRING)) \
	xmlXPathStringFunction(ctxt, 1);
#define CHECK_TYPE(typeval)	 \
	if ((ctxt->value == NULL) || (ctxt->value->type != typeval)) \
	XP_ERROR(XPATH_INVALID_TYPE)
#define CHECK_TYPE0(typeval)	 \
	if ((ctxt->value == NULL) || (ctxt->value->type != typeval)) \
	XP_ERROR0(XPATH_INVALID_TYPE)
#define CHECK_ARITY(x)	 \
	if (ctxt == NULL) return; if (nargs != (x)) \
	XP_ERROR(XPATH_INVALID_ARITY);
#define xmlXPathReturnBoolean(ctxt,val)	 \
	valuePush((ctxt), xmlXPathNewBoolean(val))
#define xmlXPathReturnEmptyString(ctxt)	 \
	valuePush((ctxt), xmlXPathNewCString(""))
#define xmlXPathReturnNumber(ctxt,val)	 \
	valuePush((ctxt), xmlXPathNewFloat(val))
#define xmlXPathReturnEmptyNodeSet(ctxt)	 \
	valuePush((ctxt), xmlXPathNewNodeSet(NULL))
#define xmlXPathReturnExternal(ctxt,val)	 \
	valuePush((ctxt), xmlXPathWrapExternal(val))
#define xmlXPathReturnNodeSet(ctxt,ns)	 \
	valuePush((ctxt), xmlXPathWrapNodeSet(ns))
#define xmlXPathReturnString(ctxt,str)	 \
	valuePush((ctxt), xmlXPathWrapString(str))
#define xmlXPathSetArityError(ctxt)	 \
	xmlXPathSetError((ctxt), XPATH_INVALID_ARITY)
#define xmlXPathSetTypeError(ctxt)	 \
	xmlXPathSetError((ctxt), XPATH_INVALID_TYPE)
#define xmlXPathEmptyNodeSet(ns)	 \
	{ while ((ns)->nodeNr > 0) (ns)->nodeTab[(ns)->nodeNr--] = NULL; }
#define xmlXPathSetError(ctxt,err)	 \
	{ xmlXPatherror((ctxt), __FILE__, __LINE__, (err)); if ((ctxt) != \
	NULL) (ctxt)->error = (err); }
#define xmlXPathGetDocument(ctxt)	((ctxt)->context->doc)
#define xmlXPathGetContextNode(ctxt)	((ctxt)->context->node)
#define xmlXPathCheckError(ctxt)	((ctxt)->error != XPATH_EXPRESSION_OK)
#define xmlXPathGetError(ctxt)	((ctxt)->error)
#define CHECK_ERROR	if (ctxt->error != XPATH_EXPRESSION_OK) return
#define CHECK_ERROR0	if (ctxt->error != XPATH_EXPRESSION_OK) return(0)
#define xmlXPathReturnFalse(ctxt)	xmlXPathReturnBoolean((ctxt), 0)
#define xmlXPathReturnTrue(ctxt)	xmlXPathReturnBoolean((ctxt), 1)
#define XP_ERROR0(X)	{ xmlXPathErr(ctxt, X); return(0); }
#define XP_ERROR(X)	{ xmlXPathErr(ctxt, X); return; }
#endif				/* __LSB_VERSION__ >= 3.1 */




/* Function prototypes */

#if __LSB_VERSION__ >= 31
    extern xmlXPathObjectPtr valuePop(xmlXPathParserContextPtr);
    extern int valuePush(xmlXPathParserContextPtr, xmlXPathObjectPtr);
    extern void xmlXPathAddValues(xmlXPathParserContextPtr);
    extern void xmlXPathBooleanFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathCeilingFunction(xmlXPathParserContextPtr, int);
    extern int xmlXPathCompareValues(xmlXPathParserContextPtr, int, int);
    extern void xmlXPathConcatFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathContainsFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathCountFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathDebugDumpCompExpr(FILE *, xmlXPathCompExprPtr,
					  int);
    extern void xmlXPathDebugDumpObject(FILE *, xmlXPathObjectPtr, int);
    extern xmlNodeSetPtr xmlXPathDifference(xmlNodeSetPtr, xmlNodeSetPtr);
    extern xmlNodeSetPtr xmlXPathDistinct(xmlNodeSetPtr);
    extern xmlNodeSetPtr xmlXPathDistinctSorted(xmlNodeSetPtr);
    extern void xmlXPathDivValues(xmlXPathParserContextPtr);
    extern int xmlXPathEqualValues(xmlXPathParserContextPtr);
    extern void xmlXPathErr(xmlXPathParserContextPtr, int);
    extern void xmlXPathEvalExpr(xmlXPathParserContextPtr);
    extern int xmlXPathEvaluatePredicateResult(xmlXPathParserContextPtr,
					       xmlXPathObjectPtr);
    extern void xmlXPathFalseFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathFloorFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathFreeParserContext(xmlXPathParserContextPtr);
    extern xmlXPathFunction xmlXPathFunctionLookup(xmlXPathContextPtr,
						   const xmlChar *);
    extern xmlXPathFunction xmlXPathFunctionLookupNS(xmlXPathContextPtr,
						     const xmlChar *,
						     const xmlChar *);
    extern int xmlXPathHasSameNodes(xmlNodeSetPtr, xmlNodeSetPtr);
    extern void xmlXPathIdFunction(xmlXPathParserContextPtr, int);
    extern xmlNodeSetPtr xmlXPathIntersection(xmlNodeSetPtr,
					      xmlNodeSetPtr);
    extern int xmlXPathIsNodeType(const xmlChar *);
    extern void xmlXPathLangFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathLastFunction(xmlXPathParserContextPtr, int);
    extern xmlNodeSetPtr xmlXPathLeading(xmlNodeSetPtr, xmlNodeSetPtr);
    extern xmlNodeSetPtr xmlXPathLeadingSorted(xmlNodeSetPtr,
					       xmlNodeSetPtr);
    extern void xmlXPathLocalNameFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathModValues(xmlXPathParserContextPtr);
    extern void xmlXPathMultValues(xmlXPathParserContextPtr);
    extern void xmlXPathNamespaceURIFunction(xmlXPathParserContextPtr,
					     int);
    extern xmlXPathObjectPtr xmlXPathNewBoolean(int);
    extern xmlXPathObjectPtr xmlXPathNewCString(const char *);
    extern xmlXPathObjectPtr xmlXPathNewFloat(double);
    extern xmlXPathObjectPtr xmlXPathNewNodeSet(xmlNodePtr);
    extern xmlXPathObjectPtr xmlXPathNewNodeSetList(xmlNodeSetPtr);
    extern xmlXPathParserContextPtr xmlXPathNewParserContext(const xmlChar
							     *,
							     xmlXPathContextPtr);
    extern xmlXPathObjectPtr xmlXPathNewString(const xmlChar *);
    extern xmlXPathObjectPtr xmlXPathNewValueTree(xmlNodePtr);
    extern xmlNodePtr xmlXPathNextAncestor(xmlXPathParserContextPtr,
					   xmlNodePtr);
    extern xmlNodePtr xmlXPathNextAncestorOrSelf(xmlXPathParserContextPtr,
						 xmlNodePtr);
    extern xmlNodePtr xmlXPathNextAttribute(xmlXPathParserContextPtr,
					    xmlNodePtr);
    extern xmlNodePtr xmlXPathNextChild(xmlXPathParserContextPtr,
					xmlNodePtr);
    extern xmlNodePtr xmlXPathNextDescendant(xmlXPathParserContextPtr,
					     xmlNodePtr);
    extern xmlNodePtr
	xmlXPathNextDescendantOrSelf(xmlXPathParserContextPtr, xmlNodePtr);
    extern xmlNodePtr xmlXPathNextFollowing(xmlXPathParserContextPtr,
					    xmlNodePtr);
    extern xmlNodePtr
	xmlXPathNextFollowingSibling(xmlXPathParserContextPtr, xmlNodePtr);
    extern xmlNodePtr xmlXPathNextNamespace(xmlXPathParserContextPtr,
					    xmlNodePtr);
    extern xmlNodePtr xmlXPathNextParent(xmlXPathParserContextPtr,
					 xmlNodePtr);
    extern xmlNodePtr xmlXPathNextPreceding(xmlXPathParserContextPtr,
					    xmlNodePtr);
    extern xmlNodePtr
	xmlXPathNextPrecedingSibling(xmlXPathParserContextPtr, xmlNodePtr);
    extern xmlNodePtr xmlXPathNextSelf(xmlXPathParserContextPtr,
				       xmlNodePtr);
    extern xmlNodeSetPtr xmlXPathNodeLeading(xmlNodeSetPtr, xmlNodePtr);
    extern xmlNodeSetPtr xmlXPathNodeLeadingSorted(xmlNodeSetPtr,
						   xmlNodePtr);
    extern void xmlXPathNodeSetAdd(xmlNodeSetPtr, xmlNodePtr);
    extern void xmlXPathNodeSetAddNs(xmlNodeSetPtr, xmlNodePtr, xmlNsPtr);
    extern void xmlXPathNodeSetAddUnique(xmlNodeSetPtr, xmlNodePtr);
    extern int xmlXPathNodeSetContains(xmlNodeSetPtr, xmlNodePtr);
    extern void xmlXPathNodeSetDel(xmlNodeSetPtr, xmlNodePtr);
    extern void xmlXPathNodeSetFreeNs(xmlNsPtr);
    extern xmlNodeSetPtr xmlXPathNodeSetMerge(xmlNodeSetPtr,
					      xmlNodeSetPtr);
    extern void xmlXPathNodeSetRemove(xmlNodeSetPtr, int);
    extern void xmlXPathNodeSetSort(xmlNodeSetPtr);
    extern xmlNodeSetPtr xmlXPathNodeTrailing(xmlNodeSetPtr, xmlNodePtr);
    extern xmlNodeSetPtr xmlXPathNodeTrailingSorted(xmlNodeSetPtr,
						    xmlNodePtr);
    extern void xmlXPathNormalizeFunction(xmlXPathParserContextPtr, int);
    extern int xmlXPathNotEqualValues(xmlXPathParserContextPtr);
    extern void xmlXPathNotFunction(xmlXPathParserContextPtr, int);
    extern const xmlChar *xmlXPathNsLookup(xmlXPathContextPtr,
					   const xmlChar *);
    extern void xmlXPathNumberFunction(xmlXPathParserContextPtr, int);
    extern xmlChar *xmlXPathParseNCName(xmlXPathParserContextPtr);
    extern xmlChar *xmlXPathParseName(xmlXPathParserContextPtr);
    extern int xmlXPathPopBoolean(xmlXPathParserContextPtr);
    extern void *xmlXPathPopExternal(xmlXPathParserContextPtr);
    extern xmlNodeSetPtr xmlXPathPopNodeSet(xmlXPathParserContextPtr);
    extern double xmlXPathPopNumber(xmlXPathParserContextPtr);
    extern xmlChar *xmlXPathPopString(xmlXPathParserContextPtr);
    extern void xmlXPathPositionFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathRegisterAllFunctions(xmlXPathContextPtr);
    extern int xmlXPathRegisterFunc(xmlXPathContextPtr, const xmlChar *,
				    xmlXPathFunction);
    extern void xmlXPathRegisterFuncLookup(xmlXPathContextPtr,
					   xmlXPathFuncLookupFunc, void *);
    extern int xmlXPathRegisterFuncNS(xmlXPathContextPtr, const xmlChar *,
				      const xmlChar *, xmlXPathFunction);
    extern int xmlXPathRegisterNs(xmlXPathContextPtr, const xmlChar *,
				  const xmlChar *);
    extern int xmlXPathRegisterVariable(xmlXPathContextPtr,
					const xmlChar *,
					xmlXPathObjectPtr);
    extern void xmlXPathRegisterVariableLookup(xmlXPathContextPtr,
					       xmlXPathVariableLookupFunc,
					       void *);
    extern int xmlXPathRegisterVariableNS(xmlXPathContextPtr,
					  const xmlChar *, const xmlChar *,
					  xmlXPathObjectPtr);
    extern void xmlXPathRegisteredFuncsCleanup(xmlXPathContextPtr);
    extern void xmlXPathRegisteredNsCleanup(xmlXPathContextPtr);
    extern void xmlXPathRegisteredVariablesCleanup(xmlXPathContextPtr);
    extern void xmlXPathRoot(xmlXPathParserContextPtr);
    extern void xmlXPathRoundFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathStartsWithFunction(xmlXPathParserContextPtr, int);
    extern double xmlXPathStringEvalNumber(const xmlChar *);
    extern void xmlXPathStringFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathStringLengthFunction(xmlXPathParserContextPtr,
					     int);
    extern void xmlXPathSubValues(xmlXPathParserContextPtr);
    extern void xmlXPathSubstringAfterFunction(xmlXPathParserContextPtr,
					       int);
    extern void xmlXPathSubstringBeforeFunction(xmlXPathParserContextPtr,
						int);
    extern void xmlXPathSubstringFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathSumFunction(xmlXPathParserContextPtr, int);
    extern xmlNodeSetPtr xmlXPathTrailing(xmlNodeSetPtr, xmlNodeSetPtr);
    extern xmlNodeSetPtr xmlXPathTrailingSorted(xmlNodeSetPtr,
						xmlNodeSetPtr);
    extern void xmlXPathTranslateFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathTrueFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathValueFlipSign(xmlXPathParserContextPtr);
    extern xmlXPathObjectPtr xmlXPathVariableLookup(xmlXPathContextPtr,
						    const xmlChar *);
    extern xmlXPathObjectPtr xmlXPathVariableLookupNS(xmlXPathContextPtr,
						      const xmlChar *,
						      const xmlChar *);
    extern xmlXPathObjectPtr xmlXPathWrapCString(char *);
    extern xmlXPathObjectPtr xmlXPathWrapExternal(void *);
    extern xmlXPathObjectPtr xmlXPathWrapNodeSet(xmlNodeSetPtr);
    extern xmlXPathObjectPtr xmlXPathWrapString(xmlChar *);
    extern void xmlXPatherror(xmlXPathParserContextPtr, const char *, int,
			      int);
#endif				/* __LSB_VERSION__ >= 3.1 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
