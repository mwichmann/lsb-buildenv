#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QMIME_H_
#define _QTGUI_QMIME_H_

class QMimeSource;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QMimeSource
{
private:
public:
     ~QMimeSource();
    bool provides(char const*) const;
};

#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
