#ifndef _QTGUI_QCOLOR_H_
#define _QTGUI_QCOLOR_H_

class QColor;
// *INDENT-OFF*



class QColor
{
private:
public:
};

enum Spec	
{
Invalid = 0,	
Rgb = 1,	
Hsv = 2,	
Cmyk = 3
}
;


extern QDebug _Zls6QDebugRK6QColor(void);
extern QDataStream _ZlsR11QDataStreamRK6QColor(void);
extern QDataStream _ZrsR11QDataStreamR6QColor(void);
extern QColor _ZN6QColorC2EN2Qt11GlobalColorE(void);
extern QColor _ZN6QColorC1EN2Qt11GlobalColorE(void);
extern QColor _ZN6QColorC2Ej(void);
extern QColor _ZN6QColorC1Ej(void);
extern QString _ZNK6QColor4nameEv(void);
extern void _ZN6QColor13setNamedColorERK7QString(void);
extern QStringList _ZN6QColor10colorNamesEv(void);
extern int _ZNK6QColor5alphaEv(void);
extern void _ZN6QColor8setAlphaEi(void);
extern qreal _ZNK6QColor6alphaFEv(void);
extern void _ZN6QColor9setAlphaFEd(void);
extern int _ZNK6QColor3redEv(void);
extern int _ZNK6QColor5greenEv(void);
extern int _ZNK6QColor4blueEv(void);
extern void _ZN6QColor6setRedEi(void);
extern void _ZN6QColor8setGreenEi(void);
extern void _ZN6QColor7setBlueEi(void);
extern qreal _ZNK6QColor4redFEv(void);
extern qreal _ZNK6QColor6greenFEv(void);
extern qreal _ZNK6QColor5blueFEv(void);
extern void _ZN6QColor7setRedFEd(void);
extern void _ZN6QColor9setGreenFEd(void);
extern void _ZN6QColor8setBlueFEd(void);
extern void _ZNK6QColor6getRgbEPiS0_S0_S0_(void);
extern void _ZN6QColor6setRgbEiiii(void);
extern void _ZNK6QColor7getRgbFEPdS0_S0_S0_(void);
extern void _ZN6QColor7setRgbFEdddd(void);
extern QRgb _ZNK6QColor4rgbaEv(void);
extern void _ZN6QColor7setRgbaEj(void);
extern QRgb _ZNK6QColor3rgbEv(void);
extern void _ZN6QColor6setRgbEj(void);
extern int _ZNK6QColor3hueEv(void);
extern int _ZNK6QColor10saturationEv(void);
extern int _ZNK6QColor5valueEv(void);
extern qreal _ZNK6QColor4hueFEv(void);
extern qreal _ZNK6QColor11saturationFEv(void);
extern qreal _ZNK6QColor6valueFEv(void);
extern void _ZNK6QColor6getHsvEPiS0_S0_S0_(void);
extern void _ZN6QColor6setHsvEiiii(void);
extern void _ZNK6QColor7getHsvFEPdS0_S0_S0_(void);
extern void _ZN6QColor7setHsvFEdddd(void);
extern int _ZNK6QColor4cyanEv(void);
extern int _ZNK6QColor7magentaEv(void);
extern int _ZNK6QColor6yellowEv(void);
extern int _ZNK6QColor5blackEv(void);
extern qreal _ZNK6QColor5cyanFEv(void);
extern qreal _ZNK6QColor8magentaFEv(void);
extern qreal _ZNK6QColor7yellowFEv(void);
extern qreal _ZNK6QColor6blackFEv(void);
extern void _ZN6QColor7getCmykEPiS0_S0_S0_S0_(void);
extern void _ZN6QColor7setCmykEiiiii(void);
extern void _ZN6QColor8getCmykFEPdS0_S0_S0_S0_(void);
extern void _ZN6QColor8setCmykFEddddd(void);
extern QColor _ZNK6QColor5toRgbEv(void);
extern QColor _ZNK6QColor5toHsvEv(void);
extern QColor _ZNK6QColor6toCmykEv(void);
extern QColor _ZNK6QColor9convertToENS_4SpecE(void);
extern QColor _ZN6QColor7fromRgbEj(void);
extern QColor _ZN6QColor8fromRgbaEj(void);
extern QColor _ZN6QColor7fromRgbEiiii(void);
extern QColor _ZN6QColor8fromRgbFEdddd(void);
extern QColor _ZN6QColor7fromHsvEiiii(void);
extern QColor _ZN6QColor8fromHsvFEdddd(void);
extern QColor _ZN6QColor8fromCmykEiiiii(void);
extern QColor _ZN6QColor9fromCmykFEddddd(void);
extern QColor _ZNK6QColor5lightEi(void);
extern QColor _ZNK6QColor4darkEi(void);
extern QColor _ZN6QColoraSERKS_(void);
extern QColor _ZN6QColoraSEN2Qt11GlobalColorE(void);
extern bool _ZNK6QColoreqERKS_(void);
extern bool _ZNK6QColorneERKS_(void);
extern QColor _ZNK6QColorcv8QVariantEv(void);
extern uint _ZNK6QColor5pixelEi(void);
extern void _ZN6QColor10invalidateEv(void);
// *INDENT-ON*
#endif