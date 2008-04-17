#if (__LSB_VERSION__ >= 13 )
#ifndef _UNWIND_H_
#define _UNWIND_H_

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 13
#if __LSB_VERSION__ < 30
#if defined __i386__
/* IA32 */
    struct dwarf_eh_base {
	void *tbase;
	void *dbase;
	void *func;
    };

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct dwarf_eh_base {
	void *tbase;
	void *dbase;
	void *func;
    };

#endif
#if defined __ia64__
/* IA64 */
    struct dwarf_eh_base {
	void *tbase;
	void *dbase;
	void *func;
    };

#endif
#endif				// __LSB_VERSION__ < 3.0

#endif				// __LSB_VERSION__ >= 1.3


#if __LSB_VERSION__ >= 13
    typedef unsigned int _Unwind_Ptr
	__attribute__ ((__mode__(__pointer__)));

    typedef unsigned int _Unwind_Word __attribute__ ((__mode__(__word__)));

    typedef unsigned int _Unwind_Exception_Class
	__attribute__ ((__mode__(__DI__)));

#endif				// __LSB_VERSION__ >= 1.3


/* The unwind interface uses reason codes in several contexts to
   identify the reasons for failures or other actions.*/
#if __LSB_VERSION__ >= 13
    typedef enum {
	_URC_NO_REASON = 0,
	_URC_FOREIGN_EXCEPTION_CAUGHT = 1,
	_URC_FATAL_PHASE2_ERROR = 2,
	_URC_FATAL_PHASE1_ERROR = 3,
	_URC_NORMAL_STOP = 4,
	_URC_END_OF_STACK = 5,
	_URC_HANDLER_FOUND = 6,
	_URC_INSTALL_CONTEXT = 7,
	_URC_CONTINUE_UNWIND = 8
    } _Unwind_Reason_Code;

#endif				// __LSB_VERSION__ >= 1.3


#if __LSB_VERSION__ >= 13
    struct _Unwind_Exception;	// XXX hand-edit
#endif				// __LSB_VERSION__ >= 1.3

#if __LSB_VERSION__ >= 13
    typedef void (*_Unwind_Exception_Cleanup_Fn) (_Unwind_Reason_Code,
						  struct _Unwind_Exception
						  *);

#endif				// __LSB_VERSION__ >= 1.3


/* The unwind interface uses a pointer to an exception header object
   as its representation of an exception being thrown. In general, the
   full representation of an exception object is language- and
   implementation-specific, but it will be prefixed by a header
   understood by the unwind interface.*/
#if __LSB_VERSION__ >= 13
    struct _Unwind_Exception {
	_Unwind_Exception_Class exception_class;
	_Unwind_Exception_Cleanup_Fn exception_cleanup;
	_Unwind_Word private_1;
	_Unwind_Word private_2;
    } __attribute__ ((__aligned__));

#endif				// __LSB_VERSION__ >= 1.3


/* The ACTIONS argument to the personality routine is a bitwise OR of one
   or more of the following constants.*/
#if __LSB_VERSION__ >= 13
#define _UA_SEARCH_PHASE	1
#define _UA_END_OF_STACK	16
#define _UA_CLEANUP_PHASE	2
#define _UA_HANDLER_FRAME	4
#define _UA_FORCE_UNWIND	8
#endif				// __LSB_VERSION__ >= 1.3



#if __LSB_VERSION__ >= 13
    typedef int _Unwind_Action;

#endif				// __LSB_VERSION__ >= 1.3


#if __LSB_VERSION__ >= 30
#if defined __s390x__
/* S390X */
    typedef _Unwind_Reason_Code(*_Unwind_Stop_Fn) (int version,
						   _Unwind_Action actions,
						   _Unwind_Exception_Class
						   exceptionClass,
						   struct _Unwind_Exception
						   * exceptionObject,
						   struct _Unwind_Context *
						   context,
						   void *stop_parameter);

#endif
#if defined __x86_64__
/* x86-64 */
    typedef _Unwind_Reason_Code(*_Unwind_Stop_Fn) (int version,
						   _Unwind_Action actions,
						   _Unwind_Exception_Class
						   exceptionClass,
						   struct _Unwind_Exception
						   * exceptionObject,
						   struct _Unwind_Context *
						   context,
						   void *stop_parameter);

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef _Unwind_Reason_Code(*_Unwind_Stop_Fn) (int version,
						   _Unwind_Action actions,
						   _Unwind_Exception_Class
						   exceptionClass,
						   struct _Unwind_Exception
						   * exceptionObject,
						   struct _Unwind_Context *
						   context,
						   void *stop_parameter);

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef _Unwind_Reason_Code(*_Unwind_Stop_Fn) (int version,
						   _Unwind_Action actions,
						   _Unwind_Exception_Class
						   exceptionClass,
						   struct _Unwind_Exception
						   * exceptionObject,
						   struct _Unwind_Context *
						   context,
						   void *stop_parameter);

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef _Unwind_Reason_Code(*_Unwind_Stop_Fn) (int version,
						   _Unwind_Action actions,
						   _Unwind_Exception_Class
						   exceptionClass,
						   struct _Unwind_Exception
						   * exceptionObject,
						   struct _Unwind_Context *
						   context,
						   void *stop_parameter);

#endif
#if defined __ia64__
/* IA64 */
    typedef _Unwind_Reason_Code(*_Unwind_Stop_Fn) (int version,
						   _Unwind_Action actions,
						   _Unwind_Exception_Class
						   exceptionClass,
						   struct _Unwind_Exception
						   * exceptionObject,
						   struct _Unwind_Context *
						   context,
						   void *stop_parameter);

#endif
#if defined __i386__
/* IA32 */
    typedef _Unwind_Reason_Code(*_Unwind_Stop_Fn) (int version,
						   _Unwind_Action actions,
						   _Unwind_Exception_Class
						   exceptionClass,
						   struct _Unwind_Exception
						   * exceptionObject,
						   struct _Unwind_Context *
						   context,
						   void *stop_parameter);

#endif
#endif				// __LSB_VERSION__ >= 3.0


#if __LSB_VERSION__ >= 30
#if defined __ia64__
/* IA64 */
    typedef _Unwind_Reason_Code(*_Unwind_Trace_Fn) (struct _Unwind_Context
						    *, void *);

#endif
#if defined __i386__
/* IA32 */
    typedef _Unwind_Reason_Code(*_Unwind_Trace_Fn) (struct _Unwind_Context
						    *, void *);

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef _Unwind_Reason_Code(*_Unwind_Trace_Fn) (struct _Unwind_Context
						    *, void *);

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef _Unwind_Reason_Code(*_Unwind_Trace_Fn) (struct _Unwind_Context
						    *, void *);

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef _Unwind_Reason_Code(*_Unwind_Trace_Fn) (struct _Unwind_Context
						    *, void *);

#endif
#if defined __x86_64__
/* x86-64 */
    typedef _Unwind_Reason_Code(*_Unwind_Trace_Fn) (struct _Unwind_Context
						    *, void *);

#endif
#if defined __s390x__
/* S390X */
    typedef _Unwind_Reason_Code(*_Unwind_Trace_Fn) (struct _Unwind_Context
						    *, void *);

#endif
#endif				// __LSB_VERSION__ >= 3.0


// Function prototypes

#if __LSB_VERSION__ >= 13
#if defined __ia64__
/* IA64 */
    extern void _Unwind_DeleteException(struct _Unwind_Exception *);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    extern void _Unwind_DeleteException(struct _Unwind_Exception *);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    extern void _Unwind_DeleteException(struct _Unwind_Exception *);
#endif
#if defined __s390x__
/* S390X */
    extern void _Unwind_DeleteException(struct _Unwind_Exception *);
#endif
#if defined __i386__
/* IA32 */
    extern void _Unwind_DeleteException(struct _Unwind_Exception *);
#endif
#if defined __i386__
/* IA32 */
    extern _Unwind_Ptr _Unwind_ForcedUnwind(struct _Unwind_Exception *,
					    _Unwind_Stop_Fn, void *);
#endif
#if defined __ia64__
/* IA64 */
    extern _Unwind_Ptr _Unwind_ForcedUnwind(struct _Unwind_Exception *,
					    _Unwind_Stop_Fn, void *);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    extern _Unwind_Ptr _Unwind_ForcedUnwind(struct _Unwind_Exception *,
					    _Unwind_Stop_Fn, void *);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    extern _Unwind_Ptr _Unwind_ForcedUnwind(struct _Unwind_Exception *,
					    _Unwind_Stop_Fn, void *);
#endif
#if defined __s390x__
/* S390X */
    extern _Unwind_Ptr _Unwind_ForcedUnwind(struct _Unwind_Exception *,
					    _Unwind_Stop_Fn, void *);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    extern _Unwind_Ptr _Unwind_GetDataRelBase(struct _Unwind_Context *);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    extern _Unwind_Ptr _Unwind_GetDataRelBase(struct _Unwind_Context *);
#endif
#if defined __s390x__
/* S390X */
    extern _Unwind_Ptr _Unwind_GetDataRelBase(struct _Unwind_Context *);
#endif
#if defined __i386__
/* IA32 */
    extern _Unwind_Ptr _Unwind_GetDataRelBase(struct _Unwind_Context *);
#endif
#if defined __i386__
/* IA32 */
    extern _Unwind_Word _Unwind_GetGR(struct _Unwind_Context *, int);
#endif
#if defined __ia64__
/* IA64 */
    extern _Unwind_Word _Unwind_GetGR(struct _Unwind_Context *, int);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    extern _Unwind_Word _Unwind_GetGR(struct _Unwind_Context *, int);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    extern _Unwind_Word _Unwind_GetGR(struct _Unwind_Context *, int);
#endif
#if defined __s390x__
/* S390X */
    extern _Unwind_Word _Unwind_GetGR(struct _Unwind_Context *, int);
#endif
#if defined __i386__
/* IA32 */
    extern _Unwind_Ptr _Unwind_GetIP(struct _Unwind_Context *);
#endif
#if defined __ia64__
/* IA64 */
    extern _Unwind_Ptr _Unwind_GetIP(struct _Unwind_Context *);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    extern _Unwind_Ptr _Unwind_GetIP(struct _Unwind_Context *);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    extern _Unwind_Ptr _Unwind_GetIP(struct _Unwind_Context *);
#endif
#if defined __s390x__
/* S390X */
    extern _Unwind_Ptr _Unwind_GetIP(struct _Unwind_Context *);
#endif
#if defined __i386__
/* IA32 */
    extern _Unwind_Ptr _Unwind_GetLanguageSpecificData(struct
						       _Unwind_Context *,
						       unsigned int);
#endif
#if defined __ia64__
/* IA64 */
    extern _Unwind_Ptr _Unwind_GetLanguageSpecificData(struct
						       _Unwind_Context *,
						       unsigned int);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    extern _Unwind_Ptr _Unwind_GetLanguageSpecificData(struct
						       _Unwind_Context *,
						       unsigned int);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    extern _Unwind_Ptr _Unwind_GetLanguageSpecificData(struct
						       _Unwind_Context *,
						       unsigned int);
#endif
#if defined __s390x__
/* S390X */
    extern _Unwind_Ptr _Unwind_GetLanguageSpecificData(struct
						       _Unwind_Context *,
						       unsigned int);
#endif
#if defined __i386__
/* IA32 */
    extern _Unwind_Ptr _Unwind_GetRegionStart(struct _Unwind_Context *);
#endif
#if defined __ia64__
/* IA64 */
    extern _Unwind_Ptr _Unwind_GetRegionStart(struct _Unwind_Context *);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    extern _Unwind_Ptr _Unwind_GetRegionStart(struct _Unwind_Context *);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    extern _Unwind_Ptr _Unwind_GetRegionStart(struct _Unwind_Context *);
#endif
#if defined __s390x__
/* S390X */
    extern _Unwind_Ptr _Unwind_GetRegionStart(struct _Unwind_Context *);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    extern _Unwind_Ptr _Unwind_GetTextRelBase(struct _Unwind_Context *);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    extern _Unwind_Ptr _Unwind_GetTextRelBase(struct _Unwind_Context *);
#endif
#if defined __s390x__
/* S390X */
    extern _Unwind_Ptr _Unwind_GetTextRelBase(struct _Unwind_Context *);
#endif
#if defined __i386__
/* IA32 */
    extern _Unwind_Ptr _Unwind_GetTextRelBase(struct _Unwind_Context *);
#endif
#if defined __i386__
/* IA32 */
    extern _Unwind_Reason_Code _Unwind_RaiseException(struct
						      _Unwind_Exception *);
#endif
#if defined __ia64__
/* IA64 */
    extern _Unwind_Reason_Code _Unwind_RaiseException(struct
						      _Unwind_Exception *);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    extern _Unwind_Reason_Code _Unwind_RaiseException(struct
						      _Unwind_Exception *);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    extern _Unwind_Reason_Code _Unwind_RaiseException(struct
						      _Unwind_Exception *);
#endif
#if defined __s390x__
/* S390X */
    extern _Unwind_Reason_Code _Unwind_RaiseException(struct
						      _Unwind_Exception *);
#endif
#if defined __i386__
/* IA32 */
    extern void _Unwind_Resume(struct _Unwind_Exception *);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    extern void _Unwind_Resume(struct _Unwind_Exception *);
#endif
#if defined __s390x__
/* S390X */
    extern void _Unwind_Resume(struct _Unwind_Exception *);
#endif
#if defined __ia64__
/* IA64 */
    extern void _Unwind_Resume(struct _Unwind_Exception *);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    extern void _Unwind_Resume(struct _Unwind_Exception *);
#endif
#if defined __ia64__
/* IA64 */
    extern void _Unwind_SetGR(struct _Unwind_Context *, int, u_int64_t);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    extern void _Unwind_SetGR(struct _Unwind_Context *, int, u_int64_t);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    extern void _Unwind_SetGR(struct _Unwind_Context *, int, u_int64_t);
#endif
#if defined __s390x__
/* S390X */
    extern void _Unwind_SetGR(struct _Unwind_Context *, int, u_int64_t);
#endif
#if defined __i386__
/* IA32 */
    extern void _Unwind_SetGR(struct _Unwind_Context *, int, u_int64_t);
#endif
#if defined __i386__
/* IA32 */
    extern void _Unwind_SetIP(struct _Unwind_Context *, unsigned int);
#endif
#if defined __ia64__
/* IA64 */
    extern void _Unwind_SetIP(struct _Unwind_Context *, unsigned int);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    extern void _Unwind_SetIP(struct _Unwind_Context *, unsigned int);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    extern void _Unwind_SetIP(struct _Unwind_Context *, unsigned int);
#endif
#if defined __s390x__
/* S390X */
    extern void _Unwind_SetIP(struct _Unwind_Context *, unsigned int);
#endif
#if __LSB_VERSION__ < 20
    extern _Unwind_Ptr _Unwind_ForcedUnwind(struct _Unwind_Exception *,
					    _Unwind_Stop_Fn, void *);
#endif				// __LSB_VERSION__ < 2.0

#if __LSB_VERSION__ < 30
    extern _Unwind_Ptr _Unwind_GetDataRelBase(struct _Unwind_Context *);
    extern _Unwind_Word _Unwind_GetGR(struct _Unwind_Context *, int);
    extern _Unwind_Ptr _Unwind_GetIP(struct _Unwind_Context *);
    extern _Unwind_Ptr _Unwind_GetLanguageSpecificData(struct
						       _Unwind_Context *,
						       unsigned int);
    extern _Unwind_Ptr _Unwind_GetRegionStart(struct _Unwind_Context *);
    extern _Unwind_Reason_Code _Unwind_RaiseException(struct
						      _Unwind_Exception *);
    extern void _Unwind_SetIP(struct _Unwind_Context *, unsigned int);
#endif				// __LSB_VERSION__ < 3.0

#endif				// __LSB_VERSION__ >= 1.3

#if __LSB_VERSION__ >= 20
#if defined __powerpc64__
/* PPC64 */
    extern void _Unwind_DeleteException(struct _Unwind_Exception *);
#endif
#if defined __x86_64__
/* x86-64 */
    extern void _Unwind_DeleteException(struct _Unwind_Exception *);
#endif
#if defined __powerpc64__
/* PPC64 */
    extern _Unwind_Ptr _Unwind_ForcedUnwind(struct _Unwind_Exception *,
					    _Unwind_Stop_Fn, void *);
#endif
#if defined __x86_64__
/* x86-64 */
    extern _Unwind_Ptr _Unwind_ForcedUnwind(struct _Unwind_Exception *,
					    _Unwind_Stop_Fn, void *);
#endif
#if defined __powerpc64__
/* PPC64 */
    extern _Unwind_Ptr _Unwind_GetDataRelBase(struct _Unwind_Context *);
#endif
#if defined __x86_64__
/* x86-64 */
    extern _Unwind_Ptr _Unwind_GetDataRelBase(struct _Unwind_Context *);
#endif
#if defined __powerpc64__
/* PPC64 */
    extern _Unwind_Word _Unwind_GetGR(struct _Unwind_Context *, int);
#endif
#if defined __x86_64__
/* x86-64 */
    extern _Unwind_Word _Unwind_GetGR(struct _Unwind_Context *, int);
#endif
#if defined __powerpc64__
/* PPC64 */
    extern _Unwind_Ptr _Unwind_GetIP(struct _Unwind_Context *);
#endif
#if defined __x86_64__
/* x86-64 */
    extern _Unwind_Ptr _Unwind_GetIP(struct _Unwind_Context *);
#endif
#if defined __powerpc64__
/* PPC64 */
    extern _Unwind_Ptr _Unwind_GetLanguageSpecificData(struct
						       _Unwind_Context *,
						       unsigned int);
#endif
#if defined __x86_64__
/* x86-64 */
    extern _Unwind_Ptr _Unwind_GetLanguageSpecificData(struct
						       _Unwind_Context *,
						       unsigned int);
#endif
#if defined __powerpc64__
/* PPC64 */
    extern _Unwind_Ptr _Unwind_GetRegionStart(struct _Unwind_Context *);
#endif
#if defined __x86_64__
/* x86-64 */
    extern _Unwind_Ptr _Unwind_GetRegionStart(struct _Unwind_Context *);
#endif
#if defined __powerpc64__
/* PPC64 */
    extern _Unwind_Ptr _Unwind_GetTextRelBase(struct _Unwind_Context *);
#endif
#if defined __x86_64__
/* x86-64 */
    extern _Unwind_Ptr _Unwind_GetTextRelBase(struct _Unwind_Context *);
#endif
#if defined __powerpc64__
/* PPC64 */
    extern _Unwind_Reason_Code _Unwind_RaiseException(struct
						      _Unwind_Exception *);
#endif
#if defined __x86_64__
/* x86-64 */
    extern _Unwind_Reason_Code _Unwind_RaiseException(struct
						      _Unwind_Exception *);
#endif
#if defined __powerpc64__
/* PPC64 */
    extern void _Unwind_Resume(struct _Unwind_Exception *);
#endif
#if defined __x86_64__
/* x86-64 */
    extern void _Unwind_Resume(struct _Unwind_Exception *);
#endif
#if defined __powerpc64__
/* PPC64 */
    extern void _Unwind_SetGR(struct _Unwind_Context *, int, u_int64_t);
#endif
#if defined __x86_64__
/* x86-64 */
    extern void _Unwind_SetGR(struct _Unwind_Context *, int, u_int64_t);
#endif
#if defined __powerpc64__
/* PPC64 */
    extern void _Unwind_SetIP(struct _Unwind_Context *, unsigned int);
#endif
#if defined __x86_64__
/* x86-64 */
    extern void _Unwind_SetIP(struct _Unwind_Context *, unsigned int);
#endif
#if __LSB_VERSION__ < 30
    extern void _Unwind_DeleteException(struct _Unwind_Exception *);
    extern _Unwind_Ptr _Unwind_GetTextRelBase(struct _Unwind_Context *);
    extern void _Unwind_Resume(struct _Unwind_Exception *);
    extern void _Unwind_SetGR(struct _Unwind_Context *, int, u_int64_t);
#endif				// __LSB_VERSION__ < 3.0

#endif				// __LSB_VERSION__ >= 2.0

#if __LSB_VERSION__ >= 30
#if defined __i386__
/* IA32 */
    extern _Unwind_Reason_Code _Unwind_Backtrace(_Unwind_Trace_Fn, void *);
#endif
#if defined __ia64__
/* IA64 */
    extern _Unwind_Reason_Code _Unwind_Backtrace(_Unwind_Trace_Fn, void *);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    extern _Unwind_Reason_Code _Unwind_Backtrace(_Unwind_Trace_Fn, void *);
#endif
#if defined __powerpc64__
/* PPC64 */
    extern _Unwind_Reason_Code _Unwind_Backtrace(_Unwind_Trace_Fn, void *);
#endif
#if defined __x86_64__
/* x86-64 */
    extern _Unwind_Reason_Code _Unwind_Backtrace(_Unwind_Trace_Fn, void *);
#endif
#if defined __s390x__
/* S390X */
    extern _Unwind_Reason_Code _Unwind_Backtrace(_Unwind_Trace_Fn, void *);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    extern _Unwind_Reason_Code _Unwind_Backtrace(_Unwind_Trace_Fn, void *);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    extern void *_Unwind_FindEnclosingFunction(void *);
#endif
#if defined __i386__
/* IA32 */
    extern void *_Unwind_FindEnclosingFunction(void *);
#endif
#if defined __ia64__
/* IA64 */
    extern void *_Unwind_FindEnclosingFunction(void *);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    extern void *_Unwind_FindEnclosingFunction(void *);
#endif
#if defined __powerpc64__
/* PPC64 */
    extern void *_Unwind_FindEnclosingFunction(void *);
#endif
#if defined __x86_64__
/* x86-64 */
    extern void *_Unwind_FindEnclosingFunction(void *);
#endif
#if defined __s390x__
/* S390X */
    extern void *_Unwind_FindEnclosingFunction(void *);
#endif
#if defined __ia64__
/* IA64 */
    extern _Unwind_Word _Unwind_GetBSP(struct _Unwind_Context *);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    extern _Unwind_Reason_Code _Unwind_GetCFA(struct _Unwind_Context *);
#endif
#if defined __i386__
/* IA32 */
    extern _Unwind_Reason_Code _Unwind_GetCFA(struct _Unwind_Context *);
#endif
#if defined __ia64__
/* IA64 */
    extern _Unwind_Reason_Code _Unwind_GetCFA(struct _Unwind_Context *);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    extern _Unwind_Reason_Code _Unwind_GetCFA(struct _Unwind_Context *);
#endif
#if defined __powerpc64__
/* PPC64 */
    extern _Unwind_Reason_Code _Unwind_GetCFA(struct _Unwind_Context *);
#endif
#if defined __x86_64__
/* x86-64 */
    extern _Unwind_Reason_Code _Unwind_GetCFA(struct _Unwind_Context *);
#endif
#if defined __s390x__
/* S390X */
    extern _Unwind_Reason_Code _Unwind_GetCFA(struct _Unwind_Context *);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    extern _Unwind_Reason_Code _Unwind_Resume_or_Rethrow(struct
							 _Unwind_Exception
							 *);
#endif
#if defined __i386__
/* IA32 */
    extern _Unwind_Reason_Code _Unwind_Resume_or_Rethrow(struct
							 _Unwind_Exception
							 *);
#endif
#if defined __ia64__
/* IA64 */
    extern _Unwind_Reason_Code _Unwind_Resume_or_Rethrow(struct
							 _Unwind_Exception
							 *);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    extern _Unwind_Reason_Code _Unwind_Resume_or_Rethrow(struct
							 _Unwind_Exception
							 *);
#endif
#if defined __powerpc64__
/* PPC64 */
    extern _Unwind_Reason_Code _Unwind_Resume_or_Rethrow(struct
							 _Unwind_Exception
							 *);
#endif
#if defined __x86_64__
/* x86-64 */
    extern _Unwind_Reason_Code _Unwind_Resume_or_Rethrow(struct
							 _Unwind_Exception
							 *);
#endif
#if defined __s390x__
/* S390X */
    extern _Unwind_Reason_Code _Unwind_Resume_or_Rethrow(struct
							 _Unwind_Exception
							 *);
#endif
#endif				// __LSB_VERSION__ >= 3.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
