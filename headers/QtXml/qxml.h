#ifndef _QTXML_QXML_H_
#define _QTXML_QXML_H_

class QXmlInputSource;
// *INDENT-OFF*



typedef enum QtValidLicenseForXmlModule	QtXmlModule	
;

class QXmlNamespaceSupport
{
private:
public:
};

class QXmlAttributes
{
private:
public:
};

struct Attribute	;

class QXmlInputSource
{
private:
public:
};

class QXmlParseException
{
private:
public:
};

class QXmlReader
{
private:
public:
};

class QXmlSimpleReader : public QXmlReader
{
private:
public:
};

class QXmlLocator
{
private:
public:
};

class QXmlContentHandler
{
private:
public:
};

class QXmlErrorHandler
{
private:
public:
};

class QXmlDTDHandler
{
private:
public:
};

class QXmlEntityResolver
{
private:
public:
};

class QXmlLexicalHandler
{
private:
public:
};

class QXmlDeclHandler
{
private:
public:
};

class QXmlDefaultHandler :  QXmlContentHandler,  QXmlDeclHandler,  QXmlDTDHandler,  QXmlEntityResolver,  QXmlErrorHandler,  QXmlLexicalHandler
{
private:
public:
};


extern QXmlNamespaceSupport _ZN20QXmlNamespaceSupportC2Ev(void);
extern QXmlNamespaceSupport _ZN20QXmlNamespaceSupportC1Ev(void);
extern QXmlNamespaceSupport _ZN20QXmlNamespaceSupportD2Ev(void);
extern QXmlNamespaceSupport _ZN20QXmlNamespaceSupportD1Ev(void);
extern void _ZN20QXmlNamespaceSupport9setPrefixERK7QStringS2_(void);
extern QString _ZNK20QXmlNamespaceSupport6prefixERK7QString(void);
extern QString _ZNK20QXmlNamespaceSupport3uriERK7QString(void);
extern void _ZNK20QXmlNamespaceSupport9splitNameERK7QStringRS0_S3_(void);
extern void _ZNK20QXmlNamespaceSupport11processNameERK7QStringbRS0_S3_(void);
extern QStringList _ZNK20QXmlNamespaceSupport8prefixesEv(void);
extern QStringList _ZNK20QXmlNamespaceSupport8prefixesERK7QString(void);
extern void _ZN20QXmlNamespaceSupport11pushContextEv(void);
extern void _ZN20QXmlNamespaceSupport10popContextEv(void);
extern void _ZN20QXmlNamespaceSupport5resetEv(void);
extern  _ZN14QXmlAttributesD0Ev(void);
extern  _ZN14QXmlAttributesD1Ev(void);
extern int _ZNK14QXmlAttributes5indexERK7QString(void);
extern int _ZNK14QXmlAttributes5indexERK7QStringS2_(void);
extern int _ZNK14QXmlAttributes6lengthEv(void);
extern QString _ZNK14QXmlAttributes9localNameEi(void);
extern QString _ZNK14QXmlAttributes5qNameEi(void);
extern QString _ZNK14QXmlAttributes3uriEi(void);
extern QString _ZNK14QXmlAttributes4typeEi(void);
extern QString _ZNK14QXmlAttributes4typeERK7QString(void);
extern QString _ZNK14QXmlAttributes4typeERK7QStringS2_(void);
extern QString _ZNK14QXmlAttributes5valueEi(void);
extern QString _ZNK14QXmlAttributes5valueERK7QString(void);
extern QString _ZNK14QXmlAttributes5valueERK7QStringS2_(void);
extern void _ZN14QXmlAttributes5clearEv(void);
extern void _ZN14QXmlAttributes6appendERK7QStringS2_S2_S2_(void);
extern QXmlInputSource _ZN15QXmlInputSourceC2Ev(void);
extern QXmlInputSource _ZN15QXmlInputSourceC1Ev(void);
extern QXmlInputSource _ZN15QXmlInputSourceC2EP9QIODevice(void);
extern QXmlInputSource _ZN15QXmlInputSourceC1EP9QIODevice(void);
extern QXmlInputSource _ZN15QXmlInputSourceD2Ev(void);
extern QXmlInputSource _ZN15QXmlInputSourceD1Ev(void);
extern QXmlInputSource _ZN15QXmlInputSourceD0Ev(void);
extern void _ZN15QXmlInputSource7setDataERK7QString(void);
extern void _ZN15QXmlInputSource7setDataERK10QByteArray(void);
extern void _ZN15QXmlInputSource9fetchDataEv(void);
extern QString _ZNK15QXmlInputSource4dataEv(void);
extern QChar _ZN15QXmlInputSource4nextEv(void);
extern void _ZN15QXmlInputSource5resetEv(void);
extern unsigned short _ZN15QXmlInputSource9EndOfDataE ;
extern unsigned short _ZN15QXmlInputSource13EndOfDocumentE ;
extern QXmlInputSource _ZN15QXmlInputSourceC2ER5QFile(void);
extern QXmlInputSource _ZN15QXmlInputSourceC1ER5QFile(void);
extern QXmlInputSource _ZN15QXmlInputSourceC2ER11QTextStream(void);
extern QXmlInputSource _ZN15QXmlInputSourceC1ER11QTextStream(void);
extern QString _ZN15QXmlInputSource11fromRawDataERK10QByteArrayb(void);
extern QXmlParseException _ZN18QXmlParseExceptionC2ERK7QStringiiS2_S2_(void);
extern QXmlParseException _ZN18QXmlParseExceptionC1ERK7QStringiiS2_S2_(void);
extern QXmlParseException _ZN18QXmlParseExceptionD2Ev(void);
extern QXmlParseException _ZN18QXmlParseExceptionD1Ev(void);
extern int _ZNK18QXmlParseException12columnNumberEv(void);
extern int _ZNK18QXmlParseException10lineNumberEv(void);
extern QString _ZNK18QXmlParseException8publicIdEv(void);
extern QString _ZNK18QXmlParseException8systemIdEv(void);
extern QString _ZNK18QXmlParseException7messageEv(void);
extern  _ZN10QXmlReaderD0Ev(void);
extern  _ZN10QXmlReaderD1Ev(void);
extern QXmlSimpleReader _ZN16QXmlSimpleReaderC2Ev(void);
extern QXmlSimpleReader _ZN16QXmlSimpleReaderC1Ev(void);
extern QXmlSimpleReader _ZN16QXmlSimpleReaderD2Ev(void);
extern QXmlSimpleReader _ZN16QXmlSimpleReaderD1Ev(void);
extern QXmlSimpleReader _ZN16QXmlSimpleReaderD0Ev(void);
extern bool _ZNK16QXmlSimpleReader7featureERK7QStringPb(void);
extern void _ZN16QXmlSimpleReader10setFeatureERK7QStringb(void);
extern bool _ZNK16QXmlSimpleReader10hasFeatureERK7QString(void);
extern void _ZNK16QXmlSimpleReader8propertyERK7QStringPb(void);
extern void _ZN16QXmlSimpleReader11setPropertyERK7QStringPv(void);
extern bool _ZNK16QXmlSimpleReader11hasPropertyERK7QString(void);
extern void _ZN16QXmlSimpleReader17setEntityResolverEP18QXmlEntityResolver(void);
extern  _ZNK16QXmlSimpleReader14entityResolverEv(void);
extern void _ZN16QXmlSimpleReader13setDTDHandlerEP14QXmlDTDHandler(void);
extern  _ZNK16QXmlSimpleReader10DTDHandlerEv(void);
extern void _ZN16QXmlSimpleReader17setContentHandlerEP18QXmlContentHandler(void);
extern  _ZNK16QXmlSimpleReader14contentHandlerEv(void);
extern void _ZN16QXmlSimpleReader15setErrorHandlerEP16QXmlErrorHandler(void);
extern  _ZNK16QXmlSimpleReader12errorHandlerEv(void);
extern void _ZN16QXmlSimpleReader17setLexicalHandlerEP18QXmlLexicalHandler(void);
extern  _ZNK16QXmlSimpleReader14lexicalHandlerEv(void);
extern void _ZN16QXmlSimpleReader14setDeclHandlerEP15QXmlDeclHandler(void);
extern  _ZNK16QXmlSimpleReader11declHandlerEv(void);
extern bool _ZN16QXmlSimpleReader5parseERK15QXmlInputSource(void);
extern bool _ZN16QXmlSimpleReader5parseEPK15QXmlInputSource(void);
extern bool _ZN16QXmlSimpleReader5parseEPK15QXmlInputSourceb(void);
extern bool _ZN16QXmlSimpleReader13parseContinueEv(void);
extern QXmlLocator _ZN11QXmlLocatorC2Ev(void);
extern QXmlLocator _ZN11QXmlLocatorC1Ev(void);
extern QXmlLocator _ZN11QXmlLocatorD2Ev(void);
extern QXmlLocator _ZN11QXmlLocatorD1Ev(void);
extern QXmlLocator _ZN11QXmlLocatorD0Ev(void);
extern  _ZN18QXmlContentHandlerD0Ev(void);
extern  _ZN18QXmlContentHandlerD1Ev(void);
extern  _ZN16QXmlErrorHandlerD0Ev(void);
extern  _ZN16QXmlErrorHandlerD1Ev(void);
extern  _ZN14QXmlDTDHandlerD0Ev(void);
extern  _ZN14QXmlDTDHandlerD1Ev(void);
extern  _ZN18QXmlEntityResolverD0Ev(void);
extern  _ZN18QXmlEntityResolverD1Ev(void);
extern  _ZN18QXmlLexicalHandlerD0Ev(void);
extern  _ZN18QXmlLexicalHandlerD1Ev(void);
extern  _ZN15QXmlDeclHandlerD0Ev(void);
extern  _ZN15QXmlDeclHandlerD1Ev(void);
extern  _ZN18QXmlDefaultHandlerD0Ev(void);
extern  _ZN18QXmlDefaultHandlerD1Ev(void);
extern void _ZN18QXmlDefaultHandler18setDocumentLocatorEP11QXmlLocator(void);
extern bool _ZN18QXmlDefaultHandler13startDocumentEv(void);
extern bool _ZN18QXmlDefaultHandler11endDocumentEv(void);
extern bool _ZN18QXmlDefaultHandler18startPrefixMappingERK7QStringS2_(void);
extern bool _ZN18QXmlDefaultHandler16endPrefixMappingERK7QString(void);
extern bool _ZN18QXmlDefaultHandler12startElementERK7QStringS2_S2_RK14QXmlAttributes(void);
extern bool _ZN18QXmlDefaultHandler10endElementERK7QStringS2_S2_(void);
extern bool _ZN18QXmlDefaultHandler10charactersERK7QString(void);
extern bool _ZN18QXmlDefaultHandler19ignorableWhitespaceERK7QString(void);
extern bool _ZN18QXmlDefaultHandler21processingInstructionERK7QStringS2_(void);
extern bool _ZN18QXmlDefaultHandler13skippedEntityERK7QString(void);
extern bool _ZN18QXmlDefaultHandler7warningERK18QXmlParseException(void);
extern bool _ZN18QXmlDefaultHandler5errorERK18QXmlParseException(void);
extern bool _ZN18QXmlDefaultHandler10fatalErrorERK18QXmlParseException(void);
extern bool _ZN18QXmlDefaultHandler12notationDeclERK7QStringS2_S2_(void);
extern bool _ZN18QXmlDefaultHandler18unparsedEntityDeclERK7QStringS2_S2_S2_(void);
extern bool _ZN18QXmlDefaultHandler13resolveEntityERK7QStringS2_RP15QXmlInputSource(void);
extern bool _ZN18QXmlDefaultHandler8startDTDERK7QStringS2_S2_(void);
extern bool _ZN18QXmlDefaultHandler6endDTDEv(void);
extern bool _ZN18QXmlDefaultHandler11startEntityERK7QString(void);
extern bool _ZN18QXmlDefaultHandler9endEntityERK7QString(void);
extern bool _ZN18QXmlDefaultHandler10startCDATAEv(void);
extern bool _ZN18QXmlDefaultHandler8endCDATAEv(void);
extern bool _ZN18QXmlDefaultHandler7commentERK7QString(void);
extern bool _ZN18QXmlDefaultHandler13attributeDeclERK7QStringS2_S2_S2_S2_(void);
extern bool _ZN18QXmlDefaultHandler18internalEntityDeclERK7QStringS2_(void);
extern bool _ZN18QXmlDefaultHandler18externalEntityDeclERK7QStringS2_S2_(void);
extern QString _ZNK18QXmlDefaultHandler11errorStringEv(void);
// *INDENT-ON*
#endif
