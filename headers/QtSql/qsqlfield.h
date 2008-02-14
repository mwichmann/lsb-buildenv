#ifndef _QTSQL_QSQLFIELD_H_
#define _QTSQL_QSQLFIELD_H_

class QSqlField;
// *INDENT-OFF*

class QSqlField
{
private:
public:
     QSqlField(QString const&, QVariant::Type);
     QSqlField(QSqlField const&);
    QSqlField & operator=(QSqlField const&);
    bool operator==(QSqlField const&) const;
     ~QSqlField();
    void setValue(QVariant const&);
    void setName(QString const&);
    QString name() const;
    bool isNull() const;
    void setReadOnly(bool);
    bool isReadOnly() const;
    void clear();
    enum _ZN8QVariant4TypeE type() const;
    bool isAutoValue() const;
    void setType(QVariant::Type);
    void setRequiredStatus(QSqlField::RequiredStatus);
    void setLength(int);
    void setPrecision(int);
    void setDefaultValue(QVariant const&);
    void setSqlType(int);
    void setGenerated(bool);
    void setAutoValue(bool);
    enum _ZN9QSqlField14RequiredStatusE requiredStatus() const;
    int length() const;
    int precision() const;
    QVariant defaultValue() const;
    int typeID() const;
    bool isGenerated() const;
    bool isValid() const;
};

enum RequiredStatus	
{
Unknown = -1,	
Optional = 0,	
Required = 1
}
;


extern QDebug _Zls6QDebugRK9QSqlField(_Z6QDebug, const QSqlField &);
// *INDENT-ON*
#endif
