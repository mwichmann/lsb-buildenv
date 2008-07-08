#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QMIME_H_
#define _QTGUI_QMIME_H_

class QMimeSource;
// *INDENT-OFF*

class QMimeSource
{
private:
public:
     ~QMimeSource();
    bool provides(char const*) const;
};

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
