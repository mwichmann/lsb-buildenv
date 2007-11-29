#ifndef _QTGUI_QCOLORMAP_H_
#define _QTGUI_QCOLORMAP_H_

class QColormap;
// *INDENT-OFF*




class QColormap
{
private:
public:
};

enum Mode	
{
Direct = 0,	
Indexed = 1,	
Gray = 2
}
;


extern void _ZN9QColormap10initializeEv(void);
extern void _ZN9QColormap7cleanupEv(void);
extern QColormap _ZN9QColormap8instanceEi(void);
extern QColormap _ZN9QColormapC2ERKS_(void);
extern QColormap _ZN9QColormapC1ERKS_(void);
extern  _ZN9QColormapD2Ev(void);
extern  _ZN9QColormapD1Ev(void);
extern enum N9QColormap4ModeE _ZNK9QColormap4modeEv(void);
extern int _ZNK9QColormap5depthEv(void);
extern int _ZNK9QColormap4sizeEv(void);
extern uint _ZNK9QColormap5pixelERK6QColor(void);
extern QColor _ZNK9QColormap7colorAtEj(void);
extern  _ZNK9QColormap8colormapEv(void);
// *INDENT-ON*
#endif
