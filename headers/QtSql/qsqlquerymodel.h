#ifndef _QTSQL_QSQLQUERYMODEL_H_
#define _QTSQL_QSQLQUERYMODEL_H_

class QSqlQueryModel;
// *INDENT-OFF*




class QSqlQueryModel : public QAbstractTableModel
{
private:
public:
};


extern struct QMetaObject _ZN14QSqlQueryModel16staticMetaObjectE ;
extern struct QMetaObject _ZNK14QSqlQueryModel10metaObjectEv(void);
extern void _ZN14QSqlQueryModel11qt_metacastEPKc(void);
extern int _ZN14QSqlQueryModel11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QSqlQueryModel _ZN14QSqlQueryModelC2EP7QObject(void);
extern QSqlQueryModel _ZN14QSqlQueryModelC1EP7QObject(void);
extern  _ZN14QSqlQueryModelD2Ev(void);
extern  _ZN14QSqlQueryModelD1Ev(void);
extern  _ZN14QSqlQueryModelD0Ev(void);
extern int _ZNK14QSqlQueryModel8rowCountERK11QModelIndex(void);
extern int _ZNK14QSqlQueryModel11columnCountERK11QModelIndex(void);
extern QSqlRecord _ZNK14QSqlQueryModel6recordEi(void);
extern QSqlRecord _ZNK14QSqlQueryModel6recordEv(void);
extern QVariant _ZNK14QSqlQueryModel4dataERK11QModelIndexi(void);
extern QVariant _ZNK14QSqlQueryModel10headerDataEiN2Qt11OrientationEi(void);
extern bool _ZN14QSqlQueryModel13setHeaderDataEiN2Qt11OrientationERK8QVarianti(void);
extern bool _ZN14QSqlQueryModel13insertColumnsEiiRK11QModelIndex(void);
extern bool _ZN14QSqlQueryModel13removeColumnsEiiRK11QModelIndex(void);
extern void _ZN14QSqlQueryModel8setQueryERK9QSqlQuery(void);
extern void _ZN14QSqlQueryModel8setQueryERK7QStringRK12QSqlDatabase(void);
extern QSqlQuery _ZNK14QSqlQueryModel5queryEv(void);
extern void _ZN14QSqlQueryModel5clearEv(void);
extern QSqlError _ZNK14QSqlQueryModel9lastErrorEv(void);
extern void _ZN14QSqlQueryModel9fetchMoreERK11QModelIndex(void);
extern bool _ZNK14QSqlQueryModel12canFetchMoreERK11QModelIndex(void);
extern void _ZN14QSqlQueryModel11queryChangeEv(void);
extern QModelIndex _ZNK14QSqlQueryModel12indexInQueryERK11QModelIndex(void);
extern void _ZN14QSqlQueryModel12setLastErrorERK9QSqlError(void);
extern QSqlQueryModel _ZN14QSqlQueryModelC2ER21QSqlQueryModelPrivateP7QObject(void);
extern QSqlQueryModel _ZN14QSqlQueryModelC1ER21QSqlQueryModelPrivateP7QObject(void);
// *INDENT-ON*
#endif
