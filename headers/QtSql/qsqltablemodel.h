#ifndef _QTSQL_QSQLTABLEMODEL_H_
#define _QTSQL_QSQLTABLEMODEL_H_

class QSqlTableModel;
// *INDENT-OFF*



class QSqlTableModel : public QSqlQueryModel
{
private:
public:
};

enum EditStrategy	
{
OnFieldChange,	
OnRowChange,	
OnManualSubmit
}
;


extern struct QMetaObject _ZN14QSqlTableModel16staticMetaObjectE ;
extern struct QMetaObject _ZNK14QSqlTableModel10metaObjectEv(void);
extern void _ZN14QSqlTableModel11qt_metacastEPKc(void);
extern int _ZN14QSqlTableModel11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QSqlTableModel _ZN14QSqlTableModelC2EP7QObject12QSqlDatabase(void);
extern QSqlTableModel _ZN14QSqlTableModelC1EP7QObject12QSqlDatabase(void);
extern QSqlTableModel _ZN14QSqlTableModelD2Ev(void);
extern QSqlTableModel _ZN14QSqlTableModelD1Ev(void);
extern QSqlTableModel _ZN14QSqlTableModelD0Ev(void);
extern bool _ZN14QSqlTableModel6selectEv(void);
extern void _ZN14QSqlTableModel8setTableERK7QString(void);
extern QString _ZNK14QSqlTableModel9tableNameEv(void);
extern N2Qt9ItemFlagsE _ZNK14QSqlTableModel5flagsERK11QModelIndex(void);
extern QVariant _ZNK14QSqlTableModel4dataERK11QModelIndexi(void);
extern bool _ZN14QSqlTableModel7setDataERK11QModelIndexRK8QVarianti(void);
extern QVariant _ZNK14QSqlTableModel10headerDataEiN2Qt11OrientationEi(void);
extern bool _ZNK14QSqlTableModel7isDirtyERK11QModelIndex(void);
extern void _ZN14QSqlTableModel5clearEv(void);
extern void _ZN14QSqlTableModel15setEditStrategyENS_12EditStrategyE(void);
extern enum N14QSqlTableModel12EditStrategyE _ZNK14QSqlTableModel12editStrategyEv(void);
extern QSqlIndex _ZNK14QSqlTableModel10primaryKeyEv(void);
extern QSqlDatabase _ZNK14QSqlTableModel8databaseEv(void);
extern int _ZNK14QSqlTableModel10fieldIndexERK7QString(void);
extern void _ZN14QSqlTableModel4sortEiN2Qt9SortOrderE(void);
extern void _ZN14QSqlTableModel7setSortEiN2Qt9SortOrderE(void);
extern QString _ZNK14QSqlTableModel6filterEv(void);
extern void _ZN14QSqlTableModel9setFilterERK7QString(void);
extern int _ZNK14QSqlTableModel8rowCountERK11QModelIndex(void);
extern bool _ZN14QSqlTableModel13removeColumnsEiiRK11QModelIndex(void);
extern bool _ZN14QSqlTableModel10removeRowsEiiRK11QModelIndex(void);
extern bool _ZN14QSqlTableModel10insertRowsEiiRK11QModelIndex(void);
extern bool _ZN14QSqlTableModel12insertRecordEiRK10QSqlRecord(void);
extern bool _ZN14QSqlTableModel9setRecordEiRK10QSqlRecord(void);
extern void _ZN14QSqlTableModel9revertRowEi(void);
extern bool _ZN14QSqlTableModel6submitEv(void);
extern void _ZN14QSqlTableModel6revertEv(void);
extern bool _ZN14QSqlTableModel9submitAllEv(void);
extern void _ZN14QSqlTableModel9revertAllEv(void);
extern void _ZN14QSqlTableModel11primeInsertEiR10QSqlRecord(void);
extern void _ZN14QSqlTableModel12beforeInsertER10QSqlRecord(void);
extern void _ZN14QSqlTableModel12beforeUpdateEiR10QSqlRecord(void);
extern void _ZN14QSqlTableModel12beforeDeleteEi(void);
extern QSqlTableModel _ZN14QSqlTableModelC2ER21QSqlTableModelPrivateP7QObject12QSqlDatabase(void);
extern QSqlTableModel _ZN14QSqlTableModelC1ER21QSqlTableModelPrivateP7QObject12QSqlDatabase(void);
extern bool _ZN14QSqlTableModel16updateRowInTableEiRK10QSqlRecord(void);
extern bool _ZN14QSqlTableModel18insertRowIntoTableERK10QSqlRecord(void);
extern bool _ZN14QSqlTableModel18deleteRowFromTableEi(void);
extern QString _ZNK14QSqlTableModel13orderByClauseEv(void);
extern QString _ZNK14QSqlTableModel15selectStatementEv(void);
extern void _ZN14QSqlTableModel13setPrimaryKeyERK9QSqlIndex(void);
extern void _ZN14QSqlTableModel8setQueryERK9QSqlQuery(void);
extern QModelIndex _ZNK14QSqlTableModel12indexInQueryERK11QModelIndex(void);
// *INDENT-ON*
#endif
