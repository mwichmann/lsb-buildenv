#ifndef _QTSQL_QSQLQUERYMODEL_H_
#define _QTSQL_QSQLQUERYMODEL_H_

#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>
#include <QtCore/qvariant.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtSql/qsqlrecord.h>
#include <QtSql/qsqlquery.h>
#include <QtSql/qsqlerror.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";


    extern struct QMetaObject _ZN14QSqlQueryModel16staticMetaObjectE;
    extern struct QMetaObject _ZNK14QSqlQueryModel10metaObjectEv(void);
    extern void _ZN14QSqlQueryModel11qt_metacastEPKc(void);
    extern int
	_ZN14QSqlQueryModel11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN14QSqlQueryModelC2EP7QObject(void);
    extern Class _ZN14QSqlQueryModelC1EP7QObject(void);
    extern Class _ZN14QSqlQueryModelD2Ev(void);
    extern Class _ZN14QSqlQueryModelD1Ev(void);
    extern Class _ZN14QSqlQueryModelD0Ev(void);
    extern int _ZNK14QSqlQueryModel8rowCountERK11QModelIndex(void);
    extern int _ZNK14QSqlQueryModel11columnCountERK11QModelIndex(void);
    extern Class _ZNK14QSqlQueryModel6recordEi(void);
    extern Class _ZNK14QSqlQueryModel6recordEv(void);
    extern Class _ZNK14QSqlQueryModel4dataERK11QModelIndexi(void);
    extern Class
	_ZNK14QSqlQueryModel10headerDataEiN2Qt11OrientationEi(void);
    extern bool
	_ZN14QSqlQueryModel13setHeaderDataEiN2Qt11OrientationERK8QVarianti
	(void);
    extern bool _ZN14QSqlQueryModel13insertColumnsEiiRK11QModelIndex(void);
    extern bool _ZN14QSqlQueryModel13removeColumnsEiiRK11QModelIndex(void);
    extern void _ZN14QSqlQueryModel8setQueryERK9QSqlQuery(void);
    extern void
	_ZN14QSqlQueryModel8setQueryERK7QStringRK12QSqlDatabase(void);
    extern Class _ZNK14QSqlQueryModel5queryEv(void);
    extern void _ZN14QSqlQueryModel5clearEv(void);
    extern Class _ZNK14QSqlQueryModel9lastErrorEv(void);
    extern void _ZN14QSqlQueryModel9fetchMoreERK11QModelIndex(void);
    extern bool _ZNK14QSqlQueryModel12canFetchMoreERK11QModelIndex(void);
    extern void _ZN14QSqlQueryModel11queryChangeEv(void);
    extern Class _ZNK14QSqlQueryModel12indexInQueryERK11QModelIndex(void);
    extern void _ZN14QSqlQueryModel12setLastErrorERK9QSqlError(void);
    extern Class
	_ZN14QSqlQueryModelC2ER21QSqlQueryModelPrivateP7QObject(void);
    extern Class
	_ZN14QSqlQueryModelC1ER21QSqlQueryModelPrivateP7QObject(void);
#ifdef __cplusplus
}
#endif
#endif
