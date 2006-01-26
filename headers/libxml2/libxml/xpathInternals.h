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



    extern void xmlXPathStartsWithFunction(xmlXPathParserContextPtr, int);
    extern const xmlChar *xmlXPathNsLookup(xmlXPathContextPtr,
					   const xmlChar *);
    extern xmlNodeSetPtr xmlXPathNodeTrailing(xmlNodeSetPtr, xmlNodePtr);
    extern xmlNodeSetPtr xmlXPathNodeLeadingSorted(xmlNodeSetPtr,
						   xmlNodePtr);
    extern xmlXPathObjectPtr xmlXPathNewBoolean(int);
    extern double xmlXPathStringEvalNumber(const xmlChar *);
    extern void xmlXPathNodeSetDel(xmlNodeSetPtr, xmlNodePtr);
    extern void xmlXPathBooleanFunction(xmlXPathParserContextPtr, int);
    extern xmlXPathObjectPtr xmlXPathNewCString(const char *);
    extern void xmlXPathNodeSetAddNs(xmlNodeSetPtr, xmlNodePtr, xmlNsPtr);
    extern xmlNodeSetPtr xmlXPathLeading(xmlNodeSetPtr, xmlNodeSetPtr);
    extern void xmlXPathSumFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathSubstringAfterFunction(xmlXPathParserContextPtr,
					       int);
    extern void xmlXPathNodeSetAdd(xmlNodeSetPtr, xmlNodePtr);
    extern void xmlXPathCeilingFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathLastFunction(xmlXPathParserContextPtr, int);
    extern xmlNodePtr xmlXPathNextPreceding(xmlXPathParserContextPtr,
					    xmlNodePtr);
    extern void xmlXPathDebugDumpCompExpr(FILE *, xmlXPathCompExprPtr,
					  int);
    extern void xmlXPathFreeParserContext(xmlXPathParserContextPtr);
    extern xmlNodeSetPtr xmlXPathNodeLeading(xmlNodeSetPtr, xmlNodePtr);
    extern void xmlXPathDivValues(xmlXPathParserContextPtr);
    extern xmlNodePtr xmlXPathNextAttribute(xmlXPathParserContextPtr,
					    xmlNodePtr);
    extern void xmlXPathNodeSetRemove(xmlNodeSetPtr, int);
    extern xmlNodeSetPtr xmlXPathDistinct(xmlNodeSetPtr);
    extern int xmlXPathEvaluatePredicateResult(xmlXPathParserContextPtr,
					       xmlXPathObjectPtr);
    extern xmlXPathObjectPtr xmlXPathNewFloat(double);
    extern xmlXPathObjectPtr xmlXPathWrapExternal(void *);
    extern xmlNodePtr xmlXPathNextFollowing(xmlXPathParserContextPtr,
					    xmlNodePtr);
    extern void xmlXPathRegisterFuncLookup(xmlXPathContextPtr,
					   xmlXPathFuncLookupFunc, void *);
    extern void xmlXPathFloorFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathNotFunction(xmlXPathParserContextPtr, int);
    extern xmlXPathObjectPtr xmlXPathNewNodeSet(xmlNodePtr);
    extern xmlXPathObjectPtr xmlXPathVariableLookup(xmlXPathContextPtr,
						    const xmlChar *);
    extern xmlNodeSetPtr xmlXPathLeadingSorted(xmlNodeSetPtr,
					       xmlNodeSetPtr);
    extern void xmlXPathPositionFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathRegisterAllFunctions(xmlXPathContextPtr);
    extern void xmlXPathRegisteredFuncsCleanup(xmlXPathContextPtr);
    extern xmlNodePtr
	xmlXPathNextDescendantOrSelf(xmlXPathParserContextPtr, xmlNodePtr);
    extern int xmlXPathPopBoolean(xmlXPathParserContextPtr);
    extern xmlNodePtr xmlXPathNextParent(xmlXPathParserContextPtr,
					 xmlNodePtr);
    extern xmlXPathParserContextPtr xmlXPathNewParserContext(const xmlChar
							     *,
							     xmlXPathContextPtr);
    extern void xmlXPathRoundFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathLangFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathStringLengthFunction(xmlXPathParserContextPtr,
					     int);
    extern void xmlXPathLocalNameFunction(xmlXPathParserContextPtr, int);
    extern int xmlXPathIsNodeType(const xmlChar *);
    extern int valuePush(xmlXPathParserContextPtr, xmlXPathObjectPtr);
    extern void xmlXPathNodeSetAddUnique(xmlNodeSetPtr, xmlNodePtr);
    extern void xmlXPathModValues(xmlXPathParserContextPtr);
    extern int xmlXPathRegisterVariable(xmlXPathContextPtr,
					const xmlChar *,
					xmlXPathObjectPtr);
    extern xmlXPathObjectPtr valuePop(xmlXPathParserContextPtr);
    extern void xmlXPathNodeSetSort(xmlNodeSetPtr);
    extern xmlNodeSetPtr xmlXPathNodeSetMerge(xmlNodeSetPtr,
					      xmlNodeSetPtr);
    extern void xmlXPathNormalizeFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathRoot(xmlXPathParserContextPtr);
    extern void xmlXPathNodeSetFreeNs(xmlNsPtr);
    extern void xmlXPathAddValues(xmlXPathParserContextPtr);
    extern void xmlXPathIdFunction(xmlXPathParserContextPtr, int);
    extern int xmlXPathRegisterVariableNS(xmlXPathContextPtr,
					  const xmlChar *, const xmlChar *,
					  xmlXPathObjectPtr);
    extern void xmlXPathContainsFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathStringFunction(xmlXPathParserContextPtr, int);
    extern xmlNodePtr xmlXPathNextDescendant(xmlXPathParserContextPtr,
					     xmlNodePtr);
    extern xmlNodePtr xmlXPathNextAncestor(xmlXPathParserContextPtr,
					   xmlNodePtr);
    extern xmlXPathObjectPtr xmlXPathWrapNodeSet(xmlNodeSetPtr);
    extern xmlXPathObjectPtr xmlXPathNewNodeSetList(xmlNodeSetPtr);
    extern void xmlXPathTranslateFunction(xmlXPathParserContextPtr, int);
    extern xmlNodeSetPtr xmlXPathPopNodeSet(xmlXPathParserContextPtr);
    extern xmlNodePtr xmlXPathNextAncestorOrSelf(xmlXPathParserContextPtr,
						 xmlNodePtr);
    extern xmlNodeSetPtr xmlXPathTrailing(xmlNodeSetPtr, xmlNodeSetPtr);
    extern void xmlXPathEvalExpr(xmlXPathParserContextPtr);
    extern void xmlXPathSubValues(xmlXPathParserContextPtr);
    extern xmlNodePtr
	xmlXPathNextPrecedingSibling(xmlXPathParserContextPtr, xmlNodePtr);
    extern xmlXPathObjectPtr xmlXPathNewString(const xmlChar *);
    extern xmlNodeSetPtr xmlXPathDistinctSorted(xmlNodeSetPtr);
    extern int xmlXPathNotEqualValues(xmlXPathParserContextPtr);
    extern xmlNodePtr xmlXPathNextChild(xmlXPathParserContextPtr,
					xmlNodePtr);
    extern void xmlXPathRegisterVariableLookup(xmlXPathContextPtr,
					       xmlXPathVariableLookupFunc,
					       void *);
    extern xmlChar *xmlXPathParseNCName(xmlXPathParserContextPtr);
    extern xmlChar *xmlXPathParseName(xmlXPathParserContextPtr);
    extern xmlNodePtr xmlXPathNextNamespace(xmlXPathParserContextPtr,
					    xmlNodePtr);
    extern xmlNodeSetPtr xmlXPathDifference(xmlNodeSetPtr, xmlNodeSetPtr);
    extern xmlNodePtr xmlXPathNextSelf(xmlXPathParserContextPtr,
				       xmlNodePtr);
    extern void xmlXPathRegisteredNsCleanup(xmlXPathContextPtr);
    extern xmlXPathObjectPtr xmlXPathNewValueTree(xmlNodePtr);
    extern void xmlXPathSubstringBeforeFunction(xmlXPathParserContextPtr,
						int);
    extern void xmlXPathTrueFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathFalseFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathCountFunction(xmlXPathParserContextPtr, int);
    extern void xmlXPathErr(xmlXPathParserContextPtr, int);
    extern xmlNodeSetPtr xmlXPathIntersection(xmlNodeSetPtr,
					      xmlNodeSetPtr);
    extern void xmlXPathDebugDumpObject(FILE *, xmlXPathObjectPtr, int);
    extern xmlXPathObjectPtr xmlXPathVariableLookupNS(xmlXPathContextPtr,
						      const xmlChar *,
						      const xmlChar *);
    extern int xmlXPathRegisterFunc(xmlXPathContextPtr, const xmlChar *,
				    xmlXPathFunction);
    extern void xmlXPathValueFlipSign(xmlXPathParserContextPtr);
    extern xmlNodePtr
	xmlXPathNextFollowingSibling(xmlXPathParserContextPtr, xmlNodePtr);
    extern xmlNodeSetPtr xmlXPathNodeTrailingSorted(xmlNodeSetPtr,
						    xmlNodePtr);
    extern void xmlXPathRegisteredVariablesCleanup(xmlXPathContextPtr);
    extern double xmlXPathPopNumber(xmlXPathParserContextPtr);
    extern void xmlXPathSubstringFunction(xmlXPathParserContextPtr, int);
    extern int xmlXPathEqualValues(xmlXPathParserContextPtr);
    extern void xmlXPathNamespaceURIFunction(xmlXPathParserContextPtr,
					     int);
    extern xmlNodeSetPtr xmlXPathTrailingSorted(xmlNodeSetPtr,
						xmlNodeSetPtr);
    extern int xmlXPathHasSameNodes(xmlNodeSetPtr, xmlNodeSetPtr);
    extern xmlXPathObjectPtr xmlXPathWrapCString(char *);
    extern xmlChar *xmlXPathPopString(xmlXPathParserContextPtr);
    extern int xmlXPathCompareValues(xmlXPathParserContextPtr, int, int);
    extern int xmlXPathRegisterFuncNS(xmlXPathContextPtr, const xmlChar *,
				      const xmlChar *, xmlXPathFunction);
    extern void xmlXPathNumberFunction(xmlXPathParserContextPtr, int);
    extern void *xmlXPathPopExternal(xmlXPathParserContextPtr);
    extern xmlXPathFunction xmlXPathFunctionLookupNS(xmlXPathContextPtr,
						     const xmlChar *,
						     const xmlChar *);
    extern void xmlXPathConcatFunction(xmlXPathParserContextPtr, int);
    extern int xmlXPathNodeSetContains(xmlNodeSetPtr, xmlNodePtr);
    extern xmlXPathFunction xmlXPathFunctionLookup(xmlXPathContextPtr,
						   const xmlChar *);
    extern xmlXPathObjectPtr xmlXPathWrapString(xmlChar *);
    extern void xmlXPatherror(xmlXPathParserContextPtr, const char *, int,
			      int);
    extern void xmlXPathMultValues(xmlXPathParserContextPtr);
    extern int xmlXPathRegisterNs(xmlXPathContextPtr, const xmlChar *,
				  const xmlChar *);
#ifdef __cplusplus
}
#endif
#endif