#ifndef _QTXML_QDOM_H_
#define _QTXML_QDOM_H_

#include <QtCore/qbytearray.h>
#include <QtCore/qstring.h>
#include <QtCore/qtextstream.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N18QDomImplementation17InvalidDataPolicyE {
	AcceptInvalidChars,
	DropInvalidChars,
	ReturnNullNode
    };

    Unknown Type:".Class.";

    enum N8QDomNode8NodeTypeE {
	ElementNode,
	AttributeNode,
	TextNode,
	CDATASectionNode,
	EntityReferenceNode,
	EntityNode,
	ProcessingInstructionNode,
	CommentNode,
	DocumentNode,
	DocumentTypeNode,
	DocumentFragmentNode,
	NotationNode,
	BaseNode,
	CharacterDataNode
    };

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";


    extern Class _ZN18QDomImplementationC2Ev(void);
    extern Class _ZN18QDomImplementationC1Ev(void);
    extern Class _ZN18QDomImplementationC2ERKS_(void);
    extern Class _ZN18QDomImplementationC1ERKS_(void);
    extern Class _ZN18QDomImplementationD2Ev(void);
    extern Class _ZN18QDomImplementationD1Ev(void);
    extern Class _ZN18QDomImplementationaSERKS_(void);
    extern bool _ZNK18QDomImplementationeqERKS_(void);
    extern bool _ZNK18QDomImplementationneERKS_(void);
    extern bool _ZNK18QDomImplementation10hasFeatureERK7QStringS2_(void);
    extern
	_ZN18QDomImplementation18createDocumentTypeERK7QStringS2_S2_(void);
    extern
	_ZN18QDomImplementation14createDocumentERK7QStringS2_RK16QDomDocumentType
	(void);
    extern enum N18QDomImplementation17InvalidDataPolicyE
	_ZN18QDomImplementation17invalidDataPolicyEv(void);
    extern void
	_ZN18QDomImplementation20setInvalidDataPolicyENS_17InvalidDataPolicyE
	(void);
    extern bool _ZN18QDomImplementation6isNullEv(void);
    extern Class _ZN8QDomNodeC2Ev(void);
    extern Class _ZN8QDomNodeC1Ev(void);
    extern Class _ZN8QDomNodeC2ERKS_(void);
    extern Class _ZN8QDomNodeC1ERKS_(void);
    extern Class _ZN8QDomNodeaSERKS_(void);
    extern bool _ZNK8QDomNodeeqERKS_(void);
    extern bool _ZNK8QDomNodeneERKS_(void);
    extern Class _ZN8QDomNodeD2Ev(void);
    extern Class _ZN8QDomNodeD1Ev(void);
    extern Class _ZN8QDomNode12insertBeforeERKS_S1_(void);
    extern Class _ZN8QDomNode11insertAfterERKS_S1_(void);
    extern Class _ZN8QDomNode12replaceChildERKS_S1_(void);
    extern Class _ZN8QDomNode11removeChildERKS_(void);
    extern Class _ZN8QDomNode11appendChildERKS_(void);
    extern bool _ZNK8QDomNode13hasChildNodesEv(void);
    extern Class _ZNK8QDomNode9cloneNodeEb(void);
    extern void _ZN8QDomNode9normalizeEv(void);
    extern bool _ZNK8QDomNode11isSupportedERK7QStringS2_(void);
    extern Class _ZNK8QDomNode8nodeNameEv(void);
    extern enum N8QDomNode8NodeTypeE _ZNK8QDomNode8nodeTypeEv(void);
    extern Class _ZNK8QDomNode10parentNodeEv(void);
    extern _ZNK8QDomNode10childNodesEv(void);
    extern Class _ZNK8QDomNode10firstChildEv(void);
    extern Class _ZNK8QDomNode9lastChildEv(void);
    extern Class _ZNK8QDomNode15previousSiblingEv(void);
    extern Class _ZNK8QDomNode11nextSiblingEv(void);
    extern _ZNK8QDomNode10attributesEv(void);
    extern _ZNK8QDomNode13ownerDocumentEv(void);
    extern Class _ZNK8QDomNode12namespaceURIEv(void);
    extern Class _ZNK8QDomNode9localNameEv(void);
    extern bool _ZNK8QDomNode13hasAttributesEv(void);
    extern Class _ZNK8QDomNode9nodeValueEv(void);
    extern void _ZN8QDomNode12setNodeValueERK7QString(void);
    extern Class _ZNK8QDomNode6prefixEv(void);
    extern void _ZN8QDomNode9setPrefixERK7QString(void);
    extern bool _ZNK8QDomNode6isAttrEv(void);
    extern bool _ZNK8QDomNode14isCDATASectionEv(void);
    extern bool _ZNK8QDomNode18isDocumentFragmentEv(void);
    extern bool _ZNK8QDomNode10isDocumentEv(void);
    extern bool _ZNK8QDomNode14isDocumentTypeEv(void);
    extern bool _ZNK8QDomNode9isElementEv(void);
    extern bool _ZNK8QDomNode17isEntityReferenceEv(void);
    extern bool _ZNK8QDomNode6isTextEv(void);
    extern bool _ZNK8QDomNode8isEntityEv(void);
    extern bool _ZNK8QDomNode10isNotationEv(void);
    extern bool _ZNK8QDomNode23isProcessingInstructionEv(void);
    extern bool _ZNK8QDomNode15isCharacterDataEv(void);
    extern bool _ZNK8QDomNode9isCommentEv(void);
    extern Class _ZNK8QDomNode9namedItemERK7QString(void);
    extern bool _ZNK8QDomNode6isNullEv(void);
    extern void _ZN8QDomNode5clearEv(void);
    extern _ZNK8QDomNode6toAttrEv(void);
    extern _ZNK8QDomNode14toCDATASectionEv(void);
    extern _ZNK8QDomNode18toDocumentFragmentEv(void);
    extern _ZNK8QDomNode10toDocumentEv(void);
    extern _ZNK8QDomNode14toDocumentTypeEv(void);
    extern _ZNK8QDomNode9toElementEv(void);
    extern _ZNK8QDomNode17toEntityReferenceEv(void);
    extern _ZNK8QDomNode6toTextEv(void);
    extern _ZNK8QDomNode8toEntityEv(void);
    extern _ZNK8QDomNode10toNotationEv(void);
    extern _ZNK8QDomNode23toProcessingInstructionEv(void);
    extern _ZNK8QDomNode15toCharacterDataEv(void);
    extern _ZNK8QDomNode9toCommentEv(void);
    extern void _ZNK8QDomNode4saveER11QTextStreami(void);
    extern _ZNK8QDomNode17firstChildElementERK7QString(void);
    extern _ZNK8QDomNode16lastChildElementERK7QString(void);
    extern _ZNK8QDomNode22previousSiblingElementERK7QString(void);
    extern _ZNK8QDomNode18nextSiblingElementERK7QString(void);
    extern int _ZNK8QDomNode10lineNumberEv(void);
    extern int _ZNK8QDomNode12columnNumberEv(void);
    extern Class _ZN8QDomNodeC2EP15QDomNodePrivate(void);
    extern Class _ZN8QDomNodeC1EP15QDomNodePrivate(void);
    extern Class _ZN12QDomNodeListC2Ev(void);
    extern Class _ZN12QDomNodeListC1Ev(void);
    extern Class _ZN12QDomNodeListC2ERKS_(void);
    extern Class _ZN12QDomNodeListC1ERKS_(void);
    extern Class _ZN12QDomNodeListaSERKS_(void);
    extern bool _ZNK12QDomNodeListeqERKS_(void);
    extern bool _ZNK12QDomNodeListneERKS_(void);
    extern Class _ZN12QDomNodeListD2Ev(void);
    extern Class _ZN12QDomNodeListD1Ev(void);
    extern Class _ZNK12QDomNodeList4itemEi(void);
    extern uint _ZNK12QDomNodeList6lengthEv(void);
    extern Class _ZN16QDomDocumentTypeC2Ev(void);
    extern Class _ZN16QDomDocumentTypeC1Ev(void);
    extern Class _ZN16QDomDocumentTypeC2ERKS_(void);
    extern Class _ZN16QDomDocumentTypeC1ERKS_(void);
    extern Class _ZN16QDomDocumentTypeaSERKS_(void);
    extern Class _ZNK16QDomDocumentType4nameEv(void);
    extern _ZNK16QDomDocumentType8entitiesEv(void);
    extern _ZNK16QDomDocumentType9notationsEv(void);
    extern Class _ZNK16QDomDocumentType8publicIdEv(void);
    extern Class _ZNK16QDomDocumentType8systemIdEv(void);
    extern Class _ZNK16QDomDocumentType14internalSubsetEv(void);
    extern Class _ZN12QDomDocumentC2Ev(void);
    extern Class _ZN12QDomDocumentC1Ev(void);
    extern Class _ZN12QDomDocumentC2ERK7QString(void);
    extern Class _ZN12QDomDocumentC1ERK7QString(void);
    extern Class _ZN12QDomDocumentC2ERK16QDomDocumentType(void);
    extern Class _ZN12QDomDocumentC1ERK16QDomDocumentType(void);
    extern Class _ZN12QDomDocumentC2ERKS_(void);
    extern Class _ZN12QDomDocumentC1ERKS_(void);
    extern Class _ZN12QDomDocumentaSERKS_(void);
    extern Class _ZN12QDomDocumentD2Ev(void);
    extern Class _ZN12QDomDocumentD1Ev(void);
    extern _ZN12QDomDocument13createElementERK7QString(void);
    extern _ZN12QDomDocument22createDocumentFragmentEv(void);
    extern _ZN12QDomDocument14createTextNodeERK7QString(void);
    extern _ZN12QDomDocument13createCommentERK7QString(void);
    extern _ZN12QDomDocument18createCDATASectionERK7QString(void);
    extern
	_ZN12QDomDocument27createProcessingInstructionERK7QStringS2_(void);
    extern _ZN12QDomDocument15createAttributeERK7QString(void);
    extern _ZN12QDomDocument21createEntityReferenceERK7QString(void);
    extern Class _ZNK12QDomDocument17elementsByTagNameERK7QString(void);
    extern Class _ZN12QDomDocument10importNodeERK8QDomNodeb(void);
    extern _ZN12QDomDocument15createElementNSERK7QStringS2_(void);
    extern _ZN12QDomDocument17createAttributeNSERK7QStringS2_(void);
    extern Class
	_ZN12QDomDocument19elementsByTagNameNSERK7QStringS2_(void);
    extern _ZN12QDomDocument11elementByIdERK7QString(void);
    extern Class _ZNK12QDomDocument7doctypeEv(void);
    extern Class _ZNK12QDomDocument14implementationEv(void);
    extern _ZNK12QDomDocument15documentElementEv(void);
    extern bool
	_ZN12QDomDocument10setContentERK10QByteArraybP7QStringPiS5_(void);
    extern bool _ZN12QDomDocument10setContentERK7QStringbPS0_PiS4_(void);
    extern bool
	_ZN12QDomDocument10setContentEP9QIODevicebP7QStringPiS4_(void);
    extern bool
	_ZN12QDomDocument10setContentERK10QByteArrayP7QStringPiS5_(void);
    extern bool _ZN12QDomDocument10setContentERK7QStringPS0_PiS4_(void);
    extern bool
	_ZN12QDomDocument10setContentEP9QIODeviceP7QStringPiS4_(void);
    extern bool
	_ZN12QDomDocument10setContentEP15QXmlInputSourceP10QXmlReaderP7QStringPiS6_
	(void);
    extern Class _ZNK12QDomDocument8toStringEi(void);
    extern Class _ZNK12QDomDocument11toByteArrayEi(void);
    extern Class _ZN16QDomNamedNodeMapC2Ev(void);
    extern Class _ZN16QDomNamedNodeMapC1Ev(void);
    extern Class _ZN16QDomNamedNodeMapC2ERKS_(void);
    extern Class _ZN16QDomNamedNodeMapC1ERKS_(void);
    extern Class _ZN16QDomNamedNodeMapaSERKS_(void);
    extern bool _ZNK16QDomNamedNodeMapeqERKS_(void);
    extern bool _ZNK16QDomNamedNodeMapneERKS_(void);
    extern Class _ZN16QDomNamedNodeMapD2Ev(void);
    extern Class _ZN16QDomNamedNodeMapD1Ev(void);
    extern Class _ZNK16QDomNamedNodeMap9namedItemERK7QString(void);
    extern Class _ZN16QDomNamedNodeMap12setNamedItemERK8QDomNode(void);
    extern Class _ZN16QDomNamedNodeMap15removeNamedItemERK7QString(void);
    extern Class _ZNK16QDomNamedNodeMap4itemEi(void);
    extern Class _ZNK16QDomNamedNodeMap11namedItemNSERK7QStringS2_(void);
    extern Class _ZN16QDomNamedNodeMap14setNamedItemNSERK8QDomNode(void);
    extern Class
	_ZN16QDomNamedNodeMap17removeNamedItemNSERK7QStringS2_(void);
    extern uint _ZNK16QDomNamedNodeMap6lengthEv(void);
    extern bool _ZNK16QDomNamedNodeMap8containsERK7QString(void);
    extern Class _ZN20QDomDocumentFragmentC2Ev(void);
    extern Class _ZN20QDomDocumentFragmentC1Ev(void);
    extern Class _ZN20QDomDocumentFragmentC2ERKS_(void);
    extern Class _ZN20QDomDocumentFragmentC1ERKS_(void);
    extern Class _ZN20QDomDocumentFragmentaSERKS_(void);
    extern Class _ZN17QDomCharacterDataC2Ev(void);
    extern Class _ZN17QDomCharacterDataC1Ev(void);
    extern Class _ZN17QDomCharacterDataC2ERKS_(void);
    extern Class _ZN17QDomCharacterDataC1ERKS_(void);
    extern Class _ZN17QDomCharacterDataaSERKS_(void);
    extern Class _ZN17QDomCharacterData13substringDataEmm(void);
    extern void _ZN17QDomCharacterData10appendDataERK7QString(void);
    extern void _ZN17QDomCharacterData10insertDataEmRK7QString(void);
    extern void _ZN17QDomCharacterData10deleteDataEmm(void);
    extern void _ZN17QDomCharacterData11replaceDataEmmRK7QString(void);
    extern uint _ZNK17QDomCharacterData6lengthEv(void);
    extern Class _ZNK17QDomCharacterData4dataEv(void);
    extern void _ZN17QDomCharacterData7setDataERK7QString(void);
    extern enum N8QDomNode8NodeTypeE
	_ZNK17QDomCharacterData8nodeTypeEv(void);
    extern Class _ZN8QDomAttrC2Ev(void);
    extern Class _ZN8QDomAttrC1Ev(void);
    extern Class _ZN8QDomAttrC2ERKS_(void);
    extern Class _ZN8QDomAttrC1ERKS_(void);
    extern Class _ZN8QDomAttraSERKS_(void);
    extern Class _ZNK8QDomAttr4nameEv(void);
    extern bool _ZNK8QDomAttr9specifiedEv(void);
    extern _ZNK8QDomAttr12ownerElementEv(void);
    extern Class _ZNK8QDomAttr5valueEv(void);
    extern void _ZN8QDomAttr8setValueERK7QString(void);
    extern Class _ZN11QDomElementC2Ev(void);
    extern Class _ZN11QDomElementC1Ev(void);
    extern Class _ZN11QDomElementC2ERKS_(void);
    extern Class _ZN11QDomElementC1ERKS_(void);
    extern Class _ZN11QDomElementaSERKS_(void);
    extern Class _ZNK11QDomElement9attributeERK7QStringS2_(void);
    extern void _ZN11QDomElement12setAttributeERK7QStringS2_(void);
    extern void _ZN11QDomElement12setAttributeERK7QStringx(void);
    extern void _ZN11QDomElement12setAttributeERK7QStringy(void);
    extern void _ZN11QDomElement12setAttributeERK7QStringf(void);
    extern void _ZN11QDomElement12setAttributeERK7QStringd(void);
    extern void _ZN11QDomElement15removeAttributeERK7QString(void);
    extern Class _ZN11QDomElement13attributeNodeERK7QString(void);
    extern Class _ZN11QDomElement16setAttributeNodeERK8QDomAttr(void);
    extern Class _ZN11QDomElement19removeAttributeNodeERK8QDomAttr(void);
    extern Class _ZNK11QDomElement17elementsByTagNameERK7QString(void);
    extern bool _ZNK11QDomElement12hasAttributeERK7QString(void);
    extern Class _ZNK11QDomElement11attributeNSE7QStringRKS0_S2_(void);
    extern void _ZN11QDomElement14setAttributeNSE7QStringRKS0_S2_(void);
    extern void _ZN11QDomElement14setAttributeNSE7QStringRKS0_x(void);
    extern void _ZN11QDomElement14setAttributeNSE7QStringRKS0_y(void);
    extern void _ZN11QDomElement14setAttributeNSE7QStringRKS0_d(void);
    extern void _ZN11QDomElement17removeAttributeNSERK7QStringS2_(void);
    extern Class _ZN11QDomElement15attributeNodeNSERK7QStringS2_(void);
    extern Class _ZN11QDomElement18setAttributeNodeNSERK8QDomAttr(void);
    extern Class
	_ZNK11QDomElement19elementsByTagNameNSERK7QStringS2_(void);
    extern bool _ZNK11QDomElement14hasAttributeNSERK7QStringS2_(void);
    extern Class _ZNK11QDomElement7tagNameEv(void);
    extern void _ZN11QDomElement10setTagNameERK7QString(void);
    extern Class _ZNK11QDomElement10attributesEv(void);
    extern Class _ZNK11QDomElement4textEv(void);
    extern Class _ZN8QDomTextC2Ev(void);
    extern Class _ZN8QDomTextC1Ev(void);
    extern Class _ZN8QDomTextC2ERKS_(void);
    extern Class _ZN8QDomTextC1ERKS_(void);
    extern Class _ZN8QDomTextaSERKS_(void);
    extern Class _ZN8QDomText9splitTextEi(void);
    extern Class _ZN11QDomCommentC2Ev(void);
    extern Class _ZN11QDomCommentC1Ev(void);
    extern Class _ZN11QDomCommentC2ERKS_(void);
    extern Class _ZN11QDomCommentC1ERKS_(void);
    extern Class _ZN11QDomCommentaSERKS_(void);
    extern Class _ZN16QDomCDATASectionC2Ev(void);
    extern Class _ZN16QDomCDATASectionC1Ev(void);
    extern Class _ZN16QDomCDATASectionC2ERKS_(void);
    extern Class _ZN16QDomCDATASectionC1ERKS_(void);
    extern Class _ZN16QDomCDATASectionaSERKS_(void);
    extern Class _ZN12QDomNotationC2Ev(void);
    extern Class _ZN12QDomNotationC1Ev(void);
    extern Class _ZN12QDomNotationC2ERKS_(void);
    extern Class _ZN12QDomNotationC1ERKS_(void);
    extern Class _ZN12QDomNotationaSERKS_(void);
    extern Class _ZNK12QDomNotation8publicIdEv(void);
    extern Class _ZNK12QDomNotation8systemIdEv(void);
    extern Class _ZN10QDomEntityC2Ev(void);
    extern Class _ZN10QDomEntityC1Ev(void);
    extern Class _ZN10QDomEntityC2ERKS_(void);
    extern Class _ZN10QDomEntityC1ERKS_(void);
    extern Class _ZN10QDomEntityaSERKS_(void);
    extern Class _ZNK10QDomEntity8publicIdEv(void);
    extern Class _ZNK10QDomEntity8systemIdEv(void);
    extern Class _ZNK10QDomEntity12notationNameEv(void);
    extern Class _ZN19QDomEntityReferenceC2Ev(void);
    extern Class _ZN19QDomEntityReferenceC1Ev(void);
    extern Class _ZN19QDomEntityReferenceC2ERKS_(void);
    extern Class _ZN19QDomEntityReferenceC1ERKS_(void);
    extern Class _ZN19QDomEntityReferenceaSERKS_(void);
    extern Class _ZN25QDomProcessingInstructionC2Ev(void);
    extern Class _ZN25QDomProcessingInstructionC1Ev(void);
    extern Class _ZN25QDomProcessingInstructionC2ERKS_(void);
    extern Class _ZN25QDomProcessingInstructionC1ERKS_(void);
    extern Class _ZN25QDomProcessingInstructionaSERKS_(void);
    extern Class _ZNK25QDomProcessingInstruction6targetEv(void);
    extern Class _ZNK25QDomProcessingInstruction4dataEv(void);
    extern void _ZN25QDomProcessingInstruction7setDataERK7QString(void);
    extern Class _ZlsR11QTextStreamRK8QDomNode(void);
#ifdef __cplusplus
}
#endif
#endif
