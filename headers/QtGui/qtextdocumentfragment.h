#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QTEXTDOCUMENTFRAGMENT_H_
#define _QTGUI_QTEXTDOCUMENTFRAGMENT_H_

class QTextDocumentFragment;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QTextDocumentFragment
{
private:
public:
     QTextDocumentFragment();
     QTextDocumentFragment(QTextDocument const*);
     QTextDocumentFragment(QTextCursor const&);
     QTextDocumentFragment(QTextDocumentFragment const&);
     operator=(QTextDocumentFragment const&);
     ~QTextDocumentFragment();
    bool isEmpty() const;
    QString toPlainText() const;
    QString toHtml() const;
    QTextDocumentFragment fromPlainText(QString const&);
    QTextDocumentFragment fromHtml(QString const&);
    QTextDocumentFragment fromHtml(QString const&, QTextDocument const*);
    QString toHtml(QByteArray const&) const;
};

#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
