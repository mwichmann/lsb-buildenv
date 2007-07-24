#ifndef _QTSQL_QSQL_H_
#define _QTSQL_QSQL_H_


#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".." N4QSql9ParamTypeE;

    enum N4QSql8LocationE {
	AfterLastRow,
	AfterLast,
	BeforeFirstRow,
	BeforeFirst
    };

    enum N4QSql13ParamTypeFlagE {
	In,
	Out,
	InOut,
	Binary
    };

    Unknown Type:".Class.";

    enum N4QSql9TableTypeE {
	Tables,
	SystemTables,
	Views,
	AllTables
    };

    enum N4QSql2OpE {
	None,
	Insert,
	Update,
	Delete
    };

    enum N4QSql7ConfirmE {
	Cancel,
	No,
	Yes
    };


#ifdef __cplusplus
}
#endif
#endif
