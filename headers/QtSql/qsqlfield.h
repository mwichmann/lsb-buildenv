#if (__LSB_VERSION__ >= 31 )
#ifndef _QTSQL_QSQLFIELD_H_
#define _QTSQL_QSQLFIELD_H_

class QSqlField;
// *INDENT-OFF*

class QSqlField;

enum QSqlField::RequiredStatus	
{
Unknown = -1,	
Optional = 0,	
Required = 1
}
;


/* Function prototypes */

extern QDebug operator<<(QDebug, QSqlField const&)(const QSqlField &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
