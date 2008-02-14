#ifndef _QTOPENGL_QGLCOLORMAP_H_
#define _QTOPENGL_QGLCOLORMAP_H_

class QGLColormap;
// *INDENT-OFF*

class QGLColormap
{
private:
public:
     QGLColormap();
     QGLColormap(QGLColormap const&);
     ~QGLColormap();
    QGLColormap & operator=(QGLColormap const&);
    bool isEmpty() const;
    int size() const;
    void setEntries(int, unsigned int const*, int);
    void setEntry(int, unsigned int);
    void setEntry(int, QColor const&);
    QRgb entryRgb(int) const;
    QColor entryColor(int) const;
    int find(unsigned int) const;
    int findNearest(unsigned int) const;
};

struct QGLColormapData	;

// *INDENT-ON*
#endif
