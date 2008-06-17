#if (__LSB_VERSION__ >= 31 )
#ifndef _QTXML_QDOM_H_
#define _QTXML_QDOM_H_

class QDomText;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QDomImplementation
{
private:
public:
     QDomImplementation();
     QDomImplementation(QDomImplementation const&);
     ~QDomImplementation();
    QDomImplementation & operator=(QDomImplementation const&);
    bool operator==(QDomImplementation const&) const;
    bool operator!=(QDomImplementation const&) const;
    bool hasFeature(QString const&, QString const&) const;
    QDomDocumentType createDocumentType(QString const&, QString const&, QString const&);
    QDomDocument createDocument(QString const&, QString const&, QDomDocumentType const&);
    enum _ZN18QDomImplementation17InvalidDataPolicyE invalidDataPolicy();
    void setInvalidDataPolicy(QDomImplementation::InvalidDataPolicy);
    bool isNull();
};

enum InvalidDataPolicy	
{
AcceptInvalidChars = 0,	
DropInvalidChars = 1,	
ReturnNullNode = 2
}
;

class QDomNode
{
private:
public:
     QDomNode();
     QDomNode(QDomNode const&);
    QDomNode & operator=(QDomNode const&);
    bool operator==(QDomNode const&) const;
    bool operator!=(QDomNode const&) const;
     ~QDomNode();
    QDomNode insertBefore(QDomNode const&, QDomNode const&);
    QDomNode insertAfter(QDomNode const&, QDomNode const&);
    QDomNode replaceChild(QDomNode const&, QDomNode const&);
    QDomNode removeChild(QDomNode const&);
    QDomNode appendChild(QDomNode const&);
    bool hasChildNodes() const;
    QDomNode cloneNode(bool) const;
    void normalize();
    bool isSupported(QString const&, QString const&) const;
    QString nodeName() const;
    enum _ZN8QDomNode8NodeTypeE nodeType() const;
    QDomNode parentNode() const;
    QDomNodeList childNodes() const;
    QDomNode firstChild() const;
    QDomNode lastChild() const;
    QDomNode previousSibling() const;
    QDomNode nextSibling() const;
    QDomNamedNodeMap attributes() const;
    QDomDocument ownerDocument() const;
    QString namespaceURI() const;
    QString localName() const;
    bool hasAttributes() const;
    QString nodeValue() const;
    void setNodeValue(QString const&);
    QString prefix() const;
    void setPrefix(QString const&);
    bool isAttr() const;
    bool isCDATASection() const;
    bool isDocumentFragment() const;
    bool isDocument() const;
    bool isDocumentType() const;
    bool isElement() const;
    bool isEntityReference() const;
    bool isText() const;
    bool isEntity() const;
    bool isNotation() const;
    bool isProcessingInstruction() const;
    bool isCharacterData() const;
    bool isComment() const;
    QDomNode namedItem(QString const&) const;
    bool isNull() const;
    void clear();
    QDomAttr toAttr() const;
    QDomCDATASection toCDATASection() const;
    QDomDocumentFragment toDocumentFragment() const;
    QDomDocument toDocument() const;
    QDomDocumentType toDocumentType() const;
    QDomElement toElement() const;
    QDomEntityReference toEntityReference() const;
    QDomText toText() const;
    QDomEntity toEntity() const;
    QDomNotation toNotation() const;
    QDomProcessingInstruction toProcessingInstruction() const;
    QDomCharacterData toCharacterData() const;
    QDomComment toComment() const;
    void save(QTextStream&, int) const;
    QDomElement firstChildElement(QString const&) const;
    QDomElement lastChildElement(QString const&) const;
    QDomElement previousSiblingElement(QString const&) const;
    QDomElement nextSiblingElement(QString const&) const;
    int lineNumber() const;
    int columnNumber() const;
};

enum NodeType	
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

class QDomNodeList
{
private:
public:
     QDomNodeList();
     QDomNodeList(QDomNodeList const&);
    QDomNodeList & operator=(QDomNodeList const&);
    bool operator==(QDomNodeList const&) const;
    bool operator!=(QDomNodeList const&) const;
     ~QDomNodeList();
    QDomNode item(int) const;
    uint length() const;
};

class QDomDocumentType :  
{
private:
public:
     QDomDocumentType();
     QDomDocumentType(QDomDocumentType const&);
    QDomDocumentType & operator=(QDomDocumentType const&);
    QString name() const;
    QDomNamedNodeMap entities() const;
    QDomNamedNodeMap notations() const;
    QString publicId() const;
    QString systemId() const;
    QString internalSubset() const;
};

class QDomDocument :  
{
private:
public:
     QDomDocument();
     QDomDocument(QString const&);
     QDomDocument(QDomDocumentType const&);
     QDomDocument(QDomDocument const&);
    QDomDocument & operator=(QDomDocument const&);
     ~QDomDocument();
    QDomElement createElement(QString const&);
    QDomDocumentFragment createDocumentFragment();
    QDomText createTextNode(QString const&);
    QDomComment createComment(QString const&);
    QDomCDATASection createCDATASection(QString const&);
    QDomProcessingInstruction createProcessingInstruction(QString const&, QString const&);
    QDomAttr createAttribute(QString const&);
    QDomEntityReference createEntityReference(QString const&);
    QDomNodeList elementsByTagName(QString const&) const;
    QDomNode importNode(QDomNode const&, bool);
    QDomElement createElementNS(QString const&, QString const&);
    QDomAttr createAttributeNS(QString const&, QString const&);
    QDomNodeList elementsByTagNameNS(QString const&, QString const&);
    QDomElement elementById(QString const&);
    QDomDocumentType doctype() const;
    QDomImplementation implementation() const;
    QDomElement documentElement() const;
    bool setContent(QByteArray const&, bool, QString*, int*, int*);
    bool setContent(QString const&, bool, QString*, int*, int*);
    bool setContent(QIODevice*, bool, QString*, int*, int*);
    bool setContent(QByteArray const&, QString*, int*, int*);
    bool setContent(QString const&, QString*, int*, int*);
    bool setContent(QIODevice*, QString*, int*, int*);
    bool setContent(QXmlInputSource*, QXmlReader*, QString*, int*, int*);
    QString toString(int) const;
    QByteArray toByteArray(int) const;
};

class QDomNamedNodeMap
{
private:
public:
     QDomNamedNodeMap();
     QDomNamedNodeMap(QDomNamedNodeMap const&);
    QDomNamedNodeMap & operator=(QDomNamedNodeMap const&);
    bool operator==(QDomNamedNodeMap const&) const;
    bool operator!=(QDomNamedNodeMap const&) const;
     ~QDomNamedNodeMap();
    QDomNode namedItem(QString const&) const;
    QDomNode setNamedItem(QDomNode const&);
    QDomNode removeNamedItem(QString const&);
    QDomNode item(int) const;
    QDomNode namedItemNS(QString const&, QString const&) const;
    QDomNode setNamedItemNS(QDomNode const&);
    QDomNode removeNamedItemNS(QString const&, QString const&);
    uint length() const;
    bool contains(QString const&) const;
};

class QDomDocumentFragment :  
{
private:
public:
     QDomDocumentFragment();
     QDomDocumentFragment(QDomDocumentFragment const&);
    QDomDocumentFragment & operator=(QDomDocumentFragment const&);
};

class QDomCharacterData :  
{
private:
public:
     QDomCharacterData();
     QDomCharacterData(QDomCharacterData const&);
    QDomCharacterData & operator=(QDomCharacterData const&);
    QString substringData(unsigned long, unsigned long);
    void appendData(QString const&);
    void insertData(unsigned long, QString const&);
    void deleteData(unsigned long, unsigned long);
    void replaceData(unsigned long, unsigned long, QString const&);
    uint length() const;
    QString data() const;
    void setData(QString const&);
    enum _ZN8QDomNode8NodeTypeE nodeType() const;
};

class QDomAttr :  
{
private:
public:
     QDomAttr();
     QDomAttr(QDomAttr const&);
    QDomAttr & operator=(QDomAttr const&);
    QString name() const;
    bool specified() const;
    QDomElement ownerElement() const;
    QString value() const;
    void setValue(QString const&);
};

class QDomElement :  
{
private:
public:
     QDomElement();
     QDomElement(QDomElement const&);
    QDomElement & operator=(QDomElement const&);
    QString attribute(QString const&, QString const&) const;
    void setAttribute(QString const&, QString const&);
    void setAttribute(QString const&, long long);
    void setAttribute(QString const&, unsigned long long);
    void setAttribute(QString const&, float);
    void setAttribute(QString const&, double);
    void removeAttribute(QString const&);
    QDomAttr attributeNode(QString const&);
    QDomAttr setAttributeNode(QDomAttr const&);
    QDomAttr removeAttributeNode(QDomAttr const&);
    QDomNodeList elementsByTagName(QString const&) const;
    bool hasAttribute(QString const&) const;
    QString attributeNS(QString, QString const&, QString const&) const;
    void setAttributeNS(QString, QString const&, QString const&);
    void setAttributeNS(QString, QString const&, long long);
    void setAttributeNS(QString, QString const&, unsigned long long);
    void setAttributeNS(QString, QString const&, double);
    void removeAttributeNS(QString const&, QString const&);
    QDomAttr attributeNodeNS(QString const&, QString const&);
    QDomAttr setAttributeNodeNS(QDomAttr const&);
    QDomNodeList elementsByTagNameNS(QString const&, QString const&) const;
    bool hasAttributeNS(QString const&, QString const&) const;
    QString tagName() const;
    void setTagName(QString const&);
    QDomNamedNodeMap attributes() const;
    QString text() const;
};

class QDomText :  
{
private:
public:
     QDomText();
     QDomText(QDomText const&);
    QDomText & operator=(QDomText const&);
    QDomText splitText(int);
};

class QDomComment :  
{
private:
public:
     QDomComment();
     QDomComment(QDomComment const&);
    QDomComment & operator=(QDomComment const&);
};

class QDomCDATASection :  
{
private:
public:
     QDomCDATASection();
     QDomCDATASection(QDomCDATASection const&);
    QDomCDATASection & operator=(QDomCDATASection const&);
};

class QDomNotation :  
{
private:
public:
     QDomNotation();
     QDomNotation(QDomNotation const&);
    QDomNotation & operator=(QDomNotation const&);
    QString publicId() const;
    QString systemId() const;
};

class QDomEntity :  
{
private:
public:
     QDomEntity();
     QDomEntity(QDomEntity const&);
    QDomEntity & operator=(QDomEntity const&);
    QString publicId() const;
    QString systemId() const;
    QString notationName() const;
};

class QDomEntityReference :  
{
private:
public:
     QDomEntityReference();
     QDomEntityReference(QDomEntityReference const&);
    QDomEntityReference & operator=(QDomEntityReference const&);
};

class QDomProcessingInstruction :  
{
private:
public:
     QDomProcessingInstruction();
     QDomProcessingInstruction(QDomProcessingInstruction const&);
    QDomProcessingInstruction & operator=(QDomProcessingInstruction const&);
    QString target() const;
    QString data() const;
    void setData(QString const&);
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern QTextStream _ZlsR11QTextStreamRK8QDomNode(QTextStream &, const QDomNode &);
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
