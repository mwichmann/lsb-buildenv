#if (__LSB_VERSION__ >= 31 )
#ifndef _QTXML_QDOM_H_
#define _QTXML_QDOM_H_

class QDomText;
// *INDENT-OFF*

class QDomImplementation;

enum _ZN18QDomImplementation17InvalidDataPolicyE	
{
AcceptInvalidChars = 0,	
DropInvalidChars = 1,	
ReturnNullNode = 2
}
;

class QDomNode;

enum _ZN8QDomNode8NodeTypeE	
{
ElementNode = 1,	
AttributeNode = 2,	
TextNode = 3,	
CDATASectionNode = 4,	
EntityReferenceNode = 5,	
EntityNode = 6,	
ProcessingInstructionNode = 7,	
CommentNode = 8,	
DocumentNode = 9,	
DocumentTypeNode = 10,	
DocumentFragmentNode = 11,	
NotationNode = 12,	
BaseNode = 21,	
CharacterDataNode = 22
}
;

class QDomNodeList;

class QDomDocumentType;

class QDomDocument;

class QDomNamedNodeMap;

class QDomDocumentFragment;

class QDomCharacterData;

class QDomAttr;

class QDomElement;

class QDomText;

class QDomComment;

class QDomCDATASection;

class QDomNotation;

class QDomEntity;

class QDomEntityReference;

class QDomProcessingInstruction;


/* Function prototypes */

extern QTextStream _ZlsR11QTextStreamRK8QDomNode(QTextStream &, const QDomNode &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
