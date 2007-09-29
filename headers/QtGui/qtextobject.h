#ifndef _QTGUI_QTEXTOBJECT_H_
#define _QTGUI_QTEXTOBJECT_H_

class QTextFrame;
// *INDENT-OFF*



typedef class QTextFrame::iterator
{
private:
public:
}Iterator	
;

typedef class QTextBlock::iterator
{
private:
public:
}Iterator	
;

class QTextObject : public QObject
{
private:
public:
};

class QTextBlockGroup : public QTextObject
{
private:
public:
};

class QTextFrameLayoutData
{
private:
public:
};

class QTextFrame : public QTextObject
{
private:
public:
};

class QTextFrame::iterator
{
private:
public:
};

class QTextBlockUserData
{
private:
public:
};

class QTextBlock
{
private:
public:
};

class QTextBlock::iterator
{
private:
public:
};

class QTextFragment
{
private:
public:
};


extern struct QMetaObject _ZN11QTextObject16staticMetaObjectE ;
extern struct QMetaObject _ZNK11QTextObject10metaObjectEv(void);
extern void _ZN11QTextObject11qt_metacastEPKc(void);
extern int _ZN11QTextObject11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QTextObject _ZN11QTextObjectC2EP13QTextDocument(void);
extern QTextObject _ZN11QTextObjectC1EP13QTextDocument(void);
extern QTextObject _ZN11QTextObjectD2Ev(void);
extern QTextObject _ZN11QTextObjectD1Ev(void);
extern QTextObject _ZN11QTextObjectD0Ev(void);
extern void _ZN11QTextObject9setFormatERK11QTextFormat(void);
extern QTextFormat _ZNK11QTextObject6formatEv(void);
extern int _ZNK11QTextObject11formatIndexEv(void);
extern  _ZNK11QTextObject8documentEv(void);
extern int _ZNK11QTextObject11objectIndexEv(void);
extern  _ZNK11QTextObject9docHandleEv(void);
extern QTextObject _ZN11QTextObjectC2ER18QTextObjectPrivateP13QTextDocument(void);
extern QTextObject _ZN11QTextObjectC1ER18QTextObjectPrivateP13QTextDocument(void);
extern struct QMetaObject _ZN15QTextBlockGroup16staticMetaObjectE ;
extern struct QMetaObject _ZNK15QTextBlockGroup10metaObjectEv(void);
extern void _ZN15QTextBlockGroup11qt_metacastEPKc(void);
extern int _ZN15QTextBlockGroup11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QTextBlockGroup _ZN15QTextBlockGroupC2EP13QTextDocument(void);
extern QTextBlockGroup _ZN15QTextBlockGroupC1EP13QTextDocument(void);
extern QTextBlockGroup _ZN15QTextBlockGroupD2Ev(void);
extern QTextBlockGroup _ZN15QTextBlockGroupD1Ev(void);
extern QTextBlockGroup _ZN15QTextBlockGroupD0Ev(void);
extern void _ZN15QTextBlockGroup13blockInsertedERK10QTextBlock(void);
extern void _ZN15QTextBlockGroup12blockRemovedERK10QTextBlock(void);
extern void _ZN15QTextBlockGroup18blockFormatChangedERK10QTextBlock(void);
extern  _ZNK15QTextBlockGroup9blockListEv(void);
extern QTextBlockGroup _ZN15QTextBlockGroupC2ER22QTextBlockGroupPrivateP13QTextDocument(void);
extern QTextBlockGroup _ZN15QTextBlockGroupC1ER22QTextBlockGroupPrivateP13QTextDocument(void);
extern QTextFrameLayoutData _ZN20QTextFrameLayoutDataD2Ev(void);
extern QTextFrameLayoutData _ZN20QTextFrameLayoutDataD1Ev(void);
extern QTextFrameLayoutData _ZN20QTextFrameLayoutDataD0Ev(void);
extern struct QMetaObject _ZN10QTextFrame16staticMetaObjectE ;
extern struct QMetaObject _ZNK10QTextFrame10metaObjectEv(void);
extern void _ZN10QTextFrame11qt_metacastEPKc(void);
extern int _ZN10QTextFrame11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QTextFrame _ZN10QTextFrameC2EP13QTextDocument(void);
extern QTextFrame _ZN10QTextFrameC1EP13QTextDocument(void);
extern QTextFrame _ZN10QTextFrameD2Ev(void);
extern QTextFrame _ZN10QTextFrameD1Ev(void);
extern QTextFrame _ZN10QTextFrameD0Ev(void);
extern  _ZNK10QTextFrame19firstCursorPositionEv(void);
extern  _ZNK10QTextFrame18lastCursorPositionEv(void);
extern int _ZNK10QTextFrame13firstPositionEv(void);
extern int _ZNK10QTextFrame12lastPositionEv(void);
extern QTextFrameLayoutData _ZNK10QTextFrame10layoutDataEv(void);
extern void _ZN10QTextFrame13setLayoutDataEP20QTextFrameLayoutData(void);
extern  _ZNK10QTextFrame11childFramesEv(void);
extern QTextFrame _ZNK10QTextFrame11parentFrameEv(void);
extern QTextFrame::iterator _ZN10QTextFrame8iteratorC2Ev(void);
extern QTextFrame::iterator _ZN10QTextFrame8iteratorC1Ev(void);
extern QTextFrame::iterator _ZN10QTextFrame8iteratorC2ERKS0_(void);
extern QTextFrame::iterator _ZN10QTextFrame8iteratorC1ERKS0_(void);
extern QTextFrame::iterator _ZN10QTextFrame8iteratoraSERKS0_(void);
extern QTextFrame _ZNK10QTextFrame8iterator12currentFrameEv(void);
extern  _ZNK10QTextFrame8iterator12currentBlockEv(void);
extern QTextFrame::iterator _ZN10QTextFrame8iteratorppEv(void);
extern QTextFrame::iterator _ZN10QTextFrame8iteratormmEv(void);
extern QTextFrame::iterator _ZNK10QTextFrame5beginEv(void);
extern QTextFrame::iterator _ZNK10QTextFrame3endEv(void);
extern QTextFrame _ZN10QTextFrameC2ER17QTextFramePrivateP13QTextDocument(void);
extern QTextFrame _ZN10QTextFrameC1ER17QTextFramePrivateP13QTextDocument(void);
extern QTextBlockUserData _ZN18QTextBlockUserDataD2Ev(void);
extern QTextBlockUserData _ZN18QTextBlockUserDataD1Ev(void);
extern QTextBlockUserData _ZN18QTextBlockUserDataD0Ev(void);
extern int _ZNK10QTextBlock8positionEv(void);
extern int _ZNK10QTextBlock6lengthEv(void);
extern bool _ZNK10QTextBlock8containsEi(void);
extern  _ZNK10QTextBlock6layoutEv(void);
extern QTextBlockFormat _ZNK10QTextBlock11blockFormatEv(void);
extern int _ZNK10QTextBlock16blockFormatIndexEv(void);
extern QTextCharFormat _ZNK10QTextBlock10charFormatEv(void);
extern int _ZNK10QTextBlock15charFormatIndexEv(void);
extern QString _ZNK10QTextBlock4textEv(void);
extern  _ZNK10QTextBlock8documentEv(void);
extern  _ZNK10QTextBlock8textListEv(void);
extern QTextBlockUserData _ZNK10QTextBlock8userDataEv(void);
extern void _ZN10QTextBlock11setUserDataEP18QTextBlockUserData(void);
extern int _ZNK10QTextBlock9userStateEv(void);
extern void _ZN10QTextBlock12setUserStateEi(void);
extern  _ZNK10QTextBlock8iterator8fragmentEv(void);
extern QTextBlock::iterator _ZN10QTextBlock8iteratorppEv(void);
extern QTextBlock::iterator _ZN10QTextBlock8iteratormmEv(void);
extern QTextBlock::iterator _ZNK10QTextBlock5beginEv(void);
extern QTextBlock::iterator _ZNK10QTextBlock3endEv(void);
extern QTextBlock _ZNK10QTextBlock4nextEv(void);
extern QTextBlock _ZNK10QTextBlock8previousEv(void);
extern int _ZNK13QTextFragment8positionEv(void);
extern int _ZNK13QTextFragment6lengthEv(void);
extern bool _ZNK13QTextFragment8containsEi(void);
extern QTextCharFormat _ZNK13QTextFragment10charFormatEv(void);
extern int _ZNK13QTextFragment15charFormatIndexEv(void);
extern QString _ZNK13QTextFragment4textEv(void);
// *INDENT-ON*
#endif
