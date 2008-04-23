#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QFONTDATABASE_H_
#define _QTGUI_QFONTDATABASE_H_

class QFontDatabase;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QFontDatabase
{
private:
public:
    QList<int> standardSizes();
     QFontDatabase();
    QList<QFontDatabase::WritingSystem> writingSystems() const;
    QStringList families(QFontDatabase::WritingSystem) const;
    QStringList styles(QString const&) const;
    QList<int> pointSizes(QString const&, QString const&);
    QList<int> smoothSizes(QString const&, QString const&);
    QString styleString(QFont const&);
    QString styleString(QFontInfo const&);
    QFont font(QString const&, QString const&, int) const;
    bool isBitmapScalable(QString const&, QString const&) const;
    bool isSmoothlyScalable(QString const&, QString const&) const;
    bool isScalable(QString const&, QString const&) const;
    bool isFixedPitch(QString const&, QString const&) const;
    bool italic(QString const&, QString const&) const;
    bool bold(QString const&, QString const&) const;
    int weight(QString const&, QString const&) const;
    QString writingSystemName(QFontDatabase::WritingSystem);
    QString writingSystemSample(QFontDatabase::WritingSystem);
    int addApplicationFont(QString const&);
    bool removeApplicationFont(int);
    QStringList applicationFontFamilies(int);
    bool removeAllApplicationFonts();
    int addApplicationFontFromData(QByteArray const&);
    QList<QFontDatabase::WritingSystem> writingSystems(QString const&) const;
};

enum WritingSystem	
{
Any = 0,	
Latin = 1,	
Greek = 2,	
Cyrillic = 3,	
Armenian = 4,	
Hebrew = 5,	
Arabic = 6,	
Syriac = 7,	
Thaana = 8,	
Devanagari = 9,	
Bengali = 10,	
Gurmukhi = 11,	
Gujarati = 12,	
Oriya = 13,	
Tamil = 14,	
Telugu = 15,	
Kannada = 16,	
Malayalam = 17,	
Sinhala = 18,	
Thai = 19,	
Lao = 20,	
Tibetan = 21,	
Myanmar = 22,	
Georgian = 23,	
Khmer = 24,	
SimplifiedChinese = 25,	
TraditionalChinese = 26,	
Japanese = 27,	
Korean = 28,	
Vietnamese = 29,	
Other = 30,	
WritingSystemsCount = 31
}
;

#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
