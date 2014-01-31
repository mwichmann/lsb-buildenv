#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPICTURE_H_
#define _QTGUI_QPICTURE_H_

class QPictureIO;
// *INDENT-OFF*

typedef void	picture_io_handler	
;

class QPicture;

class QPictureIO;


/* Function prototypes */

extern QDataStream operator<<(QDataStream&, QPicture const&)(QDataStream &, const QPicture &);
extern QDataStream operator>>(QDataStream&, QPicture&)(QDataStream &, QPicture &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
