#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QCOLORMAP_H_
#define _QTGUI_QCOLORMAP_H_

class QColormap;
// *INDENT-OFF*

class QColormap
{
private:
public:
    void initialize();
    void cleanup();
    QColormap instance(int);
     QColormap(QColormap const&);
     ~QColormap();
    enum _ZN9QColormap4ModeE mode() const;
    int depth() const;
    int size() const;
    uint pixel(QColor const&) const;
    const QColor colorAt(unsigned int) const;
     colormap() const;
     operator=(QColormap const&);
};

enum Mode	
{
Direct = 0,	
Indexed = 1,	
Gray = 2
}
;

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
