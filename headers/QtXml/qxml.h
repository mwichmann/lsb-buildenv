#if (__LSB_VERSION__ >= 31 )
#ifndef _QTXML_QXML_H_
#define _QTXML_QXML_H_

class QXmlInputSource;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef enum QtValidLicenseForXmlModule	QtXmlModule	
;

#endif /* __LSB_VERSION__ >= 3.1 */

#if __LSB_VERSION__ >= 31
class QXmlNamespaceSupport
{
private:
public:
     QXmlNamespaceSupport();
     ~QXmlNamespaceSupport();
    void setPrefix(QString const&, QString const&);
    QString prefix(QString const&) const;
    QString uri(QString const&) const;
    void splitName(QString const&, QString&, QString&) const;
    void processName(QString const&, bool, QString&, QString&) const;
    QStringList prefixes() const;
    QStringList prefixes(QString const&) const;
    void pushContext();
    void popContext();
    void reset();
};

class QXmlAttributes
{
private:
public:
     ~QXmlAttributes();
    int index(QString const&) const;
    int index(QString const&, QString const&) const;
    int length() const;
    QString localName(int) const;
    QString qName(int) const;
    QString uri(int) const;
    QString type(int) const;
    QString type(QString const&) const;
    QString type(QString const&, QString const&) const;
    QString value(int) const;
    QString value(QString const&) const;
    QString value(QString const&, QString const&) const;
    void clear();
    void append(QString const&, QString const&, QString const&, QString const&);
};

struct Attribute	;

class QXmlInputSource
{
private:
public:
     QXmlInputSource();
     QXmlInputSource(QIODevice*);
     ~QXmlInputSource();
    void setData(QString const&);
    void setData(QByteArray const&);
    void fetchData();
    QString data() const;
    QChar next();
    void reset();
     QXmlInputSource(QFile&);
     QXmlInputSource(QTextStream&);
protected:
    QString fromRawData(QByteArray const&, bool);
};

class QXmlParseException
{
private:
public:
     QXmlParseException(QString const&, int, int, QString const&, QString const&);
     ~QXmlParseException();
    int columnNumber() const;
    int lineNumber() const;
    QString publicId() const;
    QString systemId() const;
    QString message() const;
};

class QXmlReader
{
private:
public:
     ~QXmlReader();
};

class QXmlSimpleReader : public QXmlReader
{
private:
public:
     QXmlSimpleReader();
     ~QXmlSimpleReader();
    bool feature(QString const&, bool*) const;
    void setFeature(QString const&, bool);
    bool hasFeature(QString const&) const;
    void * property(QString const&, bool*) const;
    void setProperty(QString const&, void*);
    bool hasProperty(QString const&) const;
    void setEntityResolver(QXmlEntityResolver*);
    QXmlEntityResolver * entityResolver() const;
    void setDTDHandler(QXmlDTDHandler*);
    QXmlDTDHandler * DTDHandler() const;
    void setContentHandler(QXmlContentHandler*);
    QXmlContentHandler * contentHandler() const;
    void setErrorHandler(QXmlErrorHandler*);
    QXmlErrorHandler * errorHandler() const;
    void setLexicalHandler(QXmlLexicalHandler*);
    QXmlLexicalHandler * lexicalHandler() const;
    void setDeclHandler(QXmlDeclHandler*);
    QXmlDeclHandler * declHandler() const;
    bool parse(QXmlInputSource const&);
    bool parse(QXmlInputSource const*);
    bool parse(QXmlInputSource const*, bool);
    bool parseContinue();
};

class QXmlLocator
{
private:
public:
     QXmlLocator();
     ~QXmlLocator();
};

class QXmlContentHandler
{
private:
public:
     ~QXmlContentHandler();
};

class QXmlErrorHandler
{
private:
public:
     ~QXmlErrorHandler();
};

class QXmlDTDHandler
{
private:
public:
     ~QXmlDTDHandler();
};

class QXmlEntityResolver
{
private:
public:
     ~QXmlEntityResolver();
};

class QXmlLexicalHandler
{
private:
public:
     ~QXmlLexicalHandler();
};

class QXmlDeclHandler
{
private:
public:
     ~QXmlDeclHandler();
};

class QXmlDefaultHandler : public QXmlContentHandler, public QXmlDeclHandler, public QXmlDTDHandler, public QXmlEntityResolver, public QXmlErrorHandler, public QXmlLexicalHandler
{
private:
public:
     ~QXmlDefaultHandler();
    void setDocumentLocator(QXmlLocator*);
    bool startDocument();
    bool endDocument();
    bool startPrefixMapping(QString const&, QString const&);
    bool endPrefixMapping(QString const&);
    bool startElement(QString const&, QString const&, QString const&, QXmlAttributes const&);
    bool endElement(QString const&, QString const&, QString const&);
    bool characters(QString const&);
    bool ignorableWhitespace(QString const&);
    bool processingInstruction(QString const&, QString const&);
    bool skippedEntity(QString const&);
    bool warning(QXmlParseException const&);
    bool error(QXmlParseException const&);
    bool fatalError(QXmlParseException const&);
    bool notationDecl(QString const&, QString const&, QString const&);
    bool unparsedEntityDecl(QString const&, QString const&, QString const&, QString const&);
    bool resolveEntity(QString const&, QString const&, QXmlInputSource*&);
    bool startDTD(QString const&, QString const&, QString const&);
    bool endDTD();
    bool startEntity(QString const&);
    bool endEntity(QString const&);
    bool startCDATA();
    bool endCDATA();
    bool comment(QString const&);
    bool attributeDecl(QString const&, QString const&, QString const&, QString const&, QString const&);
    bool internalEntityDecl(QString const&, QString const&);
    bool externalEntityDecl(QString const&, QString const&, QString const&);
    QString errorString() const;
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern unsigned short _ZN15QXmlInputSource13EndOfDocumentE ;
extern unsigned short _ZN15QXmlInputSource9EndOfDataE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
