#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QTEXTOBJECT_H_
#define _QTGUI_QTEXTOBJECT_H_

class QTextFrame;
// *INDENT-OFF*

typedef class QTextFrame::iterator
{
private:
public:
     iterator();
     iterator(QTextFrame::iterator const&);
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
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QTextObject(QTextDocument*);
     ~QTextObject();
    QTextFormat format() const;
    int formatIndex() const;
    QTextDocument * document() const;
    int objectIndex() const;
     docHandle() const;
protected:
    void setFormat(QTextFormat const&);
};

class QTextBlockGroup : public QTextObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QTextBlockGroup(QTextDocument*);
     ~QTextBlockGroup();
protected:
    void blockInserted(QTextBlock const&);
    void blockRemoved(QTextBlock const&);
    void blockFormatChanged(QTextBlock const&);
    QList<QTextBlock> blockList() const;
};

class QTextFrameLayoutData
{
private:
public:
     ~QTextFrameLayoutData();
};

class QTextFrame : public QTextObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QTextFrame(QTextDocument*);
     ~QTextFrame();
    QTextCursor firstCursorPosition() const;
    QTextCursor lastCursorPosition() const;
    int firstPosition() const;
    int lastPosition() const;
    QTextFrameLayoutData * layoutData() const;
    void setLayoutData(QTextFrameLayoutData*);
     childFrames() const;
     parentFrame() const;
    QTextFrame::iterator begin() const;
    QTextFrame::iterator end() const;
};

class QTextFrame::iterator
{
private:
public:
     iterator();
     iterator(QTextFrame::iterator const&);
};

class QTextBlockUserData
{
private:
public:
     ~QTextBlockUserData();
};

class QTextBlock
{
private:
public:
    int position() const;
    int length() const;
    bool contains(int) const;
     layout() const;
    QTextBlockFormat blockFormat() const;
    int blockFormatIndex() const;
    QTextCharFormat charFormat() const;
    int charFormatIndex() const;
    QString text() const;
    const QTextDocument * document() const;
     textList() const;
    QTextBlockUserData * userData() const;
    void setUserData(QTextBlockUserData*);
    int userState() const;
    void setUserState(int);
    QTextBlock::iterator begin() const;
    QTextBlock::iterator end() const;
    QTextBlock next() const;
    QTextBlock previous() const;
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
    int position() const;
    int length() const;
    bool contains(int) const;
    QTextCharFormat charFormat() const;
    int charFormatIndex() const;
    QString text() const;
};


/* Function prototypes */

extern QTextBlock::iterator _ZN10QTextBlock8iteratormmEv(void);
extern QTextBlock::iterator _ZN10QTextBlock8iteratorppEv(void);
extern struct QMetaObject _ZN10QTextFrame16staticMetaObjectE ;
extern QTextFrame::iterator _ZN10QTextFrame8iteratoraSERKS0_(const QTextFrame::iterator &);
extern QTextFrame::iterator _ZN10QTextFrame8iteratormmEv(void);
extern QTextFrame::iterator _ZN10QTextFrame8iteratorppEv(void);
extern struct QMetaObject _ZN11QTextObject16staticMetaObjectE ;
extern struct QMetaObject _ZN15QTextBlockGroup16staticMetaObjectE ;
extern  _ZNK10QTextBlock8iterator8fragmentEv(void);
extern  _ZNK10QTextFrame8iterator12currentBlockEv(void);
extern QTextFrame _ZNK10QTextFrame8iterator12currentFrameEv(void);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
