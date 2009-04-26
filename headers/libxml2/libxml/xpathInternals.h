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



/* Function prototypes */

    extern xmlXPathObjectPtr valuePop(xmlXPathParserContextPtr ctxt);
    extern int valuePush(xmlXPathParserContextPtr ctxt,
			 xmlXPathObjectPtr value);
    extern void xmlXPathAddValues(xmlXPathParserContextPtr ctxt);
    extern void xmlXPathBooleanFunction(xmlXPathParserContextPtr ctxt,
					int nargs);
    extern void xmlXPathCeilingFunction(xmlXPathParserContextPtr ctxt,
					int nargs);
    extern int xmlXPathCompareValues(xmlXPathParserContextPtr ctxt,
				     int inf, int strict);
    extern void xmlXPathConcatFunction(xmlXPathParserContextPtr ctxt,
				       int nargs);
    extern void xmlXPathContainsFunction(xmlXPathParserContextPtr ctxt,
					 int nargs);
    extern void xmlXPathCountFunction(xmlXPathParserContextPtr ctxt,
				      int nargs);
    extern void xmlXPathDebugDumpCompExpr(FILE * output,
					  xmlXPathCompExprPtr comp,
					  int depth);
    extern void xmlXPathDebugDumpObject(FILE * output,
					xmlXPathObjectPtr cur, int depth);
    extern xmlNodeSetPtr xmlXPathDifference(xmlNodeSetPtr nodes1,
					    xmlNodeSetPtr nodes2);
    extern xmlNodeSetPtr xmlXPathDistinct(xmlNodeSetPtr nodes);
    extern xmlNodeSetPtr xmlXPathDistinctSorted(xmlNodeSetPtr nodes);
    extern void xmlXPathDivValues(xmlXPathParserContextPtr ctxt);
    extern int xmlXPathEqualValues(xmlXPathParserContextPtr ctxt);
    extern void xmlXPathErr(xmlXPathParserContextPtr ctxt, int error);
    extern void xmlXPathEvalExpr(xmlXPathParserContextPtr ctxt);
    extern int xmlXPathEvaluatePredicateResult(xmlXPathParserContextPtr
					       ctxt,
					       xmlXPathObjectPtr res);
    extern void xmlXPathFalseFunction(xmlXPathParserContextPtr ctxt,
				      int nargs);
    extern void xmlXPathFloorFunction(xmlXPathParserContextPtr ctxt,
				      int nargs);
    extern void xmlXPathFreeParserContext(xmlXPathParserContextPtr ctxt);
    extern xmlXPathFunction xmlXPathFunctionLookup(xmlXPathContextPtr ctxt,
						   const xmlChar * name);
    extern xmlXPathFunction xmlXPathFunctionLookupNS(xmlXPathContextPtr
						     ctxt,
						     const xmlChar * name,
						     const xmlChar *
						     ns_uri);
    extern int xmlXPathHasSameNodes(xmlNodeSetPtr nodes1,
				    xmlNodeSetPtr nodes2);
    extern void xmlXPathIdFunction(xmlXPathParserContextPtr ctxt,
				   int nargs);
    extern xmlNodeSetPtr xmlXPathIntersection(xmlNodeSetPtr nodes1,
					      xmlNodeSetPtr nodes2);
    extern int xmlXPathIsNodeType(const xmlChar * name);
    extern void xmlXPathLangFunction(xmlXPathParserContextPtr ctxt,
				     int nargs);
    extern void xmlXPathLastFunction(xmlXPathParserContextPtr ctxt,
				     int nargs);
    extern xmlNodeSetPtr xmlXPathLeading(xmlNodeSetPtr nodes1,
					 xmlNodeSetPtr nodes2);
    extern xmlNodeSetPtr xmlXPathLeadingSorted(xmlNodeSetPtr nodes1,
					       xmlNodeSetPtr nodes2);
    extern void xmlXPathLocalNameFunction(xmlXPathParserContextPtr ctxt,
					  int nargs);
    extern void xmlXPathModValues(xmlXPathParserContextPtr ctxt);
    extern void xmlXPathMultValues(xmlXPathParserContextPtr ctxt);
    extern void xmlXPathNamespaceURIFunction(xmlXPathParserContextPtr ctxt,
					     int nargs);
    extern xmlXPathObjectPtr xmlXPathNewBoolean(int val);
    extern xmlXPathObjectPtr xmlXPathNewCString(const char *val);
    extern xmlXPathObjectPtr xmlXPathNewFloat(double val);
    extern xmlXPathObjectPtr xmlXPathNewNodeSet(xmlNodePtr val);
    extern xmlXPathObjectPtr xmlXPathNewNodeSetList(xmlNodeSetPtr val);
    extern xmlXPathParserContextPtr xmlXPathNewParserContext(const xmlChar
							     * str,
							     xmlXPathContextPtr
							     ctxt);
    extern xmlXPathObjectPtr xmlXPathNewString(const xmlChar * val);
    extern xmlXPathObjectPtr xmlXPathNewValueTree(xmlNodePtr val);
    extern xmlNodePtr xmlXPathNextAncestor(xmlXPathParserContextPtr ctxt,
					   xmlNodePtr cur);
    extern xmlNodePtr xmlXPathNextAncestorOrSelf(xmlXPathParserContextPtr
						 ctxt, xmlNodePtr cur);
    extern xmlNodePtr xmlXPathNextAttribute(xmlXPathParserContextPtr ctxt,
					    xmlNodePtr cur);
    extern xmlNodePtr xmlXPathNextChild(xmlXPathParserContextPtr ctxt,
					xmlNodePtr cur);
    extern xmlNodePtr xmlXPathNextDescendant(xmlXPathParserContextPtr ctxt,
					     xmlNodePtr cur);
    extern xmlNodePtr xmlXPathNextDescendantOrSelf(xmlXPathParserContextPtr
						   ctxt, xmlNodePtr cur);
    extern xmlNodePtr xmlXPathNextFollowing(xmlXPathParserContextPtr ctxt,
					    xmlNodePtr cur);
    extern xmlNodePtr xmlXPathNextFollowingSibling(xmlXPathParserContextPtr
						   ctxt, xmlNodePtr cur);
    extern xmlNodePtr xmlXPathNextNamespace(xmlXPathParserContextPtr ctxt,
					    xmlNodePtr cur);
    extern xmlNodePtr xmlXPathNextParent(xmlXPathParserContextPtr ctxt,
					 xmlNodePtr cur);
    extern xmlNodePtr xmlXPathNextPreceding(xmlXPathParserContextPtr ctxt,
					    xmlNodePtr cur);
    extern xmlNodePtr xmlXPathNextPrecedingSibling(xmlXPathParserContextPtr
						   ctxt, xmlNodePtr cur);
    extern xmlNodePtr xmlXPathNextSelf(xmlXPathParserContextPtr ctxt,
				       xmlNodePtr cur);
    extern xmlNodeSetPtr xmlXPathNodeLeading(xmlNodeSetPtr nodes,
					     xmlNodePtr node);
    extern xmlNodeSetPtr xmlXPathNodeLeadingSorted(xmlNodeSetPtr nodes,
						   xmlNodePtr node);
    extern void xmlXPathNodeSetAdd(xmlNodeSetPtr cur, xmlNodePtr val);
    extern void xmlXPathNodeSetAddNs(xmlNodeSetPtr cur, xmlNodePtr node,
				     xmlNsPtr ns);
    extern void xmlXPathNodeSetAddUnique(xmlNodeSetPtr cur,
					 xmlNodePtr val);
    extern int xmlXPathNodeSetContains(xmlNodeSetPtr cur, xmlNodePtr val);
    extern void xmlXPathNodeSetDel(xmlNodeSetPtr cur, xmlNodePtr val);
    extern void xmlXPathNodeSetFreeNs(xmlNsPtr ns);
    extern xmlNodeSetPtr xmlXPathNodeSetMerge(xmlNodeSetPtr val1,
					      xmlNodeSetPtr val2);
    extern void xmlXPathNodeSetRemove(xmlNodeSetPtr cur, int val);
    extern void xmlXPathNodeSetSort(xmlNodeSetPtr set);
    extern xmlNodeSetPtr xmlXPathNodeTrailing(xmlNodeSetPtr nodes,
					      xmlNodePtr node);
    extern xmlNodeSetPtr xmlXPathNodeTrailingSorted(xmlNodeSetPtr nodes,
						    xmlNodePtr node);
    extern void xmlXPathNormalizeFunction(xmlXPathParserContextPtr ctxt,
					  int nargs);
    extern int xmlXPathNotEqualValues(xmlXPathParserContextPtr ctxt);
    extern void xmlXPathNotFunction(xmlXPathParserContextPtr ctxt,
				    int nargs);
    extern const xmlChar *xmlXPathNsLookup(xmlXPathContextPtr ctxt,
					   const xmlChar * prefix);
    extern void xmlXPathNumberFunction(xmlXPathParserContextPtr ctxt,
				       int nargs);
    extern xmlChar *xmlXPathParseNCName(xmlXPathParserContextPtr ctxt);
    extern xmlChar *xmlXPathParseName(xmlXPathParserContextPtr ctxt);
    extern int xmlXPathPopBoolean(xmlXPathParserContextPtr ctxt);
    extern void *xmlXPathPopExternal(xmlXPathParserContextPtr ctxt);
    extern xmlNodeSetPtr xmlXPathPopNodeSet(xmlXPathParserContextPtr ctxt);
    extern double xmlXPathPopNumber(xmlXPathParserContextPtr ctxt);
    extern xmlChar *xmlXPathPopString(xmlXPathParserContextPtr ctxt);
    extern void xmlXPathPositionFunction(xmlXPathParserContextPtr ctxt,
					 int nargs);
    extern void xmlXPathRegisterAllFunctions(xmlXPathContextPtr ctxt);
    extern int xmlXPathRegisterFunc(xmlXPathContextPtr ctxt,
				    const xmlChar * name,
				    xmlXPathFunction f);
    extern void xmlXPathRegisterFuncLookup(xmlXPathContextPtr ctxt,
					   xmlXPathFuncLookupFunc f,
					   void *funcCtxt);
    extern int xmlXPathRegisterFuncNS(xmlXPathContextPtr ctxt,
				      const xmlChar * name,
				      const xmlChar * ns_uri,
				      xmlXPathFunction f);
    extern int xmlXPathRegisterNs(xmlXPathContextPtr ctxt,
				  const xmlChar * prefix,
				  const xmlChar * ns_uri);
    extern int xmlXPathRegisterVariable(xmlXPathContextPtr ctxt,
					const xmlChar * name,
					xmlXPathObjectPtr value);
    extern void xmlXPathRegisterVariableLookup(xmlXPathContextPtr ctxt,
					       xmlXPathVariableLookupFunc
					       f, void *data);
    extern int xmlXPathRegisterVariableNS(xmlXPathContextPtr ctxt,
					  const xmlChar * name,
					  const xmlChar * ns_uri,
					  xmlXPathObjectPtr value);
    extern void xmlXPathRegisteredFuncsCleanup(xmlXPathContextPtr ctxt);
    extern void xmlXPathRegisteredNsCleanup(xmlXPathContextPtr ctxt);
    extern void xmlXPathRegisteredVariablesCleanup(xmlXPathContextPtr
						   ctxt);
    extern void xmlXPathRoot(xmlXPathParserContextPtr ctxt);
    extern void xmlXPathRoundFunction(xmlXPathParserContextPtr ctxt,
				      int nargs);
    extern void xmlXPathStartsWithFunction(xmlXPathParserContextPtr ctxt,
					   int nargs);
    extern double xmlXPathStringEvalNumber(const xmlChar * str);
    extern void xmlXPathStringFunction(xmlXPathParserContextPtr ctxt,
				       int nargs);
    extern void xmlXPathStringLengthFunction(xmlXPathParserContextPtr ctxt,
					     int nargs);
    extern void xmlXPathSubValues(xmlXPathParserContextPtr ctxt);
    extern void xmlXPathSubstringAfterFunction(xmlXPathParserContextPtr
					       ctxt, int nargs);
    extern void xmlXPathSubstringBeforeFunction(xmlXPathParserContextPtr
						ctxt, int nargs);
    extern void xmlXPathSubstringFunction(xmlXPathParserContextPtr ctxt,
					  int nargs);
    extern void xmlXPathSumFunction(xmlXPathParserContextPtr ctxt,
				    int nargs);
    extern xmlNodeSetPtr xmlXPathTrailing(xmlNodeSetPtr nodes1,
					  xmlNodeSetPtr nodes2);
    extern xmlNodeSetPtr xmlXPathTrailingSorted(xmlNodeSetPtr nodes1,
						xmlNodeSetPtr nodes2);
    extern void xmlXPathTranslateFunction(xmlXPathParserContextPtr ctxt,
					  int nargs);
    extern void xmlXPathTrueFunction(xmlXPathParserContextPtr ctxt,
				     int nargs);
    extern void xmlXPathValueFlipSign(xmlXPathParserContextPtr ctxt);
    extern xmlXPathObjectPtr xmlXPathVariableLookup(xmlXPathContextPtr
						    ctxt,
						    const xmlChar * name);
    extern xmlXPathObjectPtr xmlXPathVariableLookupNS(xmlXPathContextPtr
						      ctxt,
						      const xmlChar * name,
						      const xmlChar *
						      ns_uri);
    extern xmlXPathObjectPtr xmlXPathWrapCString(char *val);
    extern xmlXPathObjectPtr xmlXPathWrapExternal(void *val);
    extern xmlXPathObjectPtr xmlXPathWrapNodeSet(xmlNodeSetPtr val);
    extern xmlXPathObjectPtr xmlXPathWrapString(xmlChar * val);
    extern void xmlXPatherror(xmlXPathParserContextPtr ctxt,
			      const char *file, int line, int no);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
