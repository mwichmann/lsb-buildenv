#ifndef _QTSQL_QSQLRELATIONALTABLEMODEL_H_
#define _QTSQL_QSQLRELATIONALTABLEMODEL_H_

#include <QtCore/qglobal.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qstring.h>
#include <QtCore/qvariant.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtSql/qsqlquerymodel.h>
#include <QtSql/qsqltablemodel.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef enum QtValidLicenseForSqlModule QtSqlModule;

    Unknown Type:".Class.";

    Unknown Type:".Class.";


    extern struct QMetaObject
	_ZN24QSqlRelationalTableModel16staticMetaObjectE;
    extern struct QMetaObject
	_ZNK24QSqlRelationalTableModel10metaObjectEv(void);
    extern void _ZN24QSqlRelationalTableModel11qt_metacastEPKc(void);
    extern int
	_ZN24QSqlRelationalTableModel11qt_metacallEN11QMetaObject4CallEiPPv
	(void);
    extern Class
	_ZN24QSqlRelationalTableModelC2EP7QObject12QSqlDatabase(void);
    extern Class
	_ZN24QSqlRelationalTableModelC1EP7QObject12QSqlDatabase(void);
    extern Class _ZN24QSqlRelationalTableModelD2Ev(void);
    extern Class _ZN24QSqlRelationalTableModelD1Ev(void);
    extern Class _ZN24QSqlRelationalTableModelD0Ev(void);
    extern Class
	_ZNK24QSqlRelationalTableModel4dataERK11QModelIndexi(void);
    extern bool
	_ZN24QSqlRelationalTableModel7setDataERK11QModelIndexRK8QVarianti
	(void);
    extern void _ZN24QSqlRelationalTableModel5clearEv(void);
    extern bool _ZN24QSqlRelationalTableModel6selectEv(void);
    extern void _ZN24QSqlRelationalTableModel8setTableERK7QString(void);
    extern void
	_ZN24QSqlRelationalTableModel11setRelationEiRK12QSqlRelation(void);
    extern Class _ZNK24QSqlRelationalTableModel8relationEi(void);
    extern Class _ZNK24QSqlRelationalTableModel13relationModelEi(void);
    extern void _ZN24QSqlRelationalTableModel9revertRowEi(void);
    extern Class _ZNK24QSqlRelationalTableModel15selectStatementEv(void);
    extern bool
	_ZN24QSqlRelationalTableModel16updateRowInTableEiRK10QSqlRecord
	(void);
    extern Class _ZNK24QSqlRelationalTableModel13orderByClauseEv(void);
#ifdef __cplusplus
}
#endif
#endif
