#ifndef _UNWIND_H_
#define _UNWIND_H_


#ifdef __cplusplus
extern "C"
{
#endif




  struct dwarf_eh_base
  {
    void *tbase;
    void *dbase;
    void *func;
  }
   ;

  struct _Unwind_Context;




  typedef unsigned int _Unwind_Ptr;

  typedef unsigned int _Unwind_Word;


/* The unwind interface uses reason codes in several contexts to
   identify the reasons for failures or other actions.*/


  typedef enum
  {
    _URC_NO_REASON = 0,
    _URC_FOREIGN_EXCEPTION_CAUGHT = 1,
    _URC_FATAL_PHASE2_ERROR = 2,
    _URC_FATAL_PHASE1_ERROR = 3,
    _URC_NORMAL_STOP = 4,
    _URC_END_OF_STACK = 5,
    _URC_HANDLER_FOUND = 6,
    _URC_INSTALL_CONTEXT = 7,
    _URC_CONTINUE_UNWIND = 8
  }
  _Unwind_Reason_Code;




  typedef void (*_Unwind_Exception_Cleanup_Fn) (enum,
						struct _Unwind_Exception *);


/* The unwind interface uses a pointer to an exception header object
   as its representation of an exception being thrown. In general, the
   full representation of an exception object is language- and
   implementation-specific, but it will be prefixed by a header
   understood by the unwind interface.*/


  struct _Unwind_Exception
  {
    _Unwind_Exception_Class;
    _Unwind_Exception_Cleanup_Fn;
    _Unwind_Word;
    _Unwind_Word;
  }
   ;

  typedef unsigned int _Unwind_Exception_Class;


/* The ACTIONS argument to the personality routine is a bitwise OR of one
   or more of the following constants.*/
#define _UA_SEARCH_PHASE	1
#define _UA_END_OF_STACK	16
#define _UA_CLEANUP_PHASE	2
#define _UA_HANDLER_FRAME	4
#define _UA_FORCE_UNWIND	8


  typedef int _Unwind_Action;


#if __i386__
/* IA32 */
  extern void _Unwind_DeleteException (struct _Unwind_Exception *);
#endif
#if __i386__
/* IA32 */
  extern fde *_Unwind_Find_FDE (void);
#endif
#if __ia64__
/* IA64 */
  extern void _Unwind_DeleteException (void);
#endif
#if __ia64__
/* IA64 */
  extern _Unwind_Ptr _Unwind_ForcedUnwind (void);
#endif
#if __ia64__
/* IA64 */
  extern _Unwind_Word _Unwind_GetGR (void);
#endif
#if __ia64__
/* IA64 */
  extern _Unwind_Ptr _Unwind_GetIP (void);
#endif
#if __ia64__
/* IA64 */
  extern _Unwind_Ptr _Unwind_GetLanguageSpecificData (void);
#endif
#if __ia64__
/* IA64 */
  extern _Unwind_Ptr _Unwind_GetRegionStart (void);
#endif
#if __ia64__
/* IA64 */
  extern _Unwind_Reason_Code _Unwind_RaiseException (void);
#endif
#if __ia64__
/* IA64 */
  extern void _Unwind_Resume (void);
#endif
#if __ia64__
/* IA64 */
  extern void _Unwind_SetGR (void);
#endif
#if __ia64__
/* IA64 */
  extern void _Unwind_SetIP (void);
#endif
#if __arm__
/* ARM */
  extern void _Unwind_DeleteException (void);
#endif
#if __arm__
/* ARM */
  extern fde *_Unwind_Find_FDE (void);
#endif
#if __arm__
/* ARM */
  extern _Unwind_Ptr _Unwind_ForcedUnwind (void);
#endif
#if __arm__
/* ARM */
  extern _Unwind_Ptr _Unwind_GetDataRelBase (void);
#endif
#if __arm__
/* ARM */
  extern _Unwind_Word _Unwind_GetGR (void);
#endif
#if __arm__
/* ARM */
  extern _Unwind_Ptr _Unwind_GetIP (void);
#endif
#if __arm__
/* ARM */
  extern _Unwind_Ptr _Unwind_GetLanguageSpecificData (void);
#endif
#if __arm__
/* ARM */
  extern _Unwind_Ptr _Unwind_GetRegionStart (void);
#endif
#if __arm__
/* ARM */
  extern _Unwind_Ptr _Unwind_GetTextRelBase (void);
#endif
#if __arm__
/* ARM */
  extern _Unwind_Reason_Code _Unwind_RaiseException (void);
#endif
#if __arm__
/* ARM */
  extern void _Unwind_Resume (void);
#endif
#if __arm__
/* ARM */
  extern void _Unwind_SetGR (void);
#endif
#if __arm__
/* ARM */
  extern void _Unwind_SetIP (void);
#endif
#if __mc68000__
/* M68K */
  extern void _Unwind_DeleteException (void);
#endif
#if __mc68000__
/* M68K */
  extern fde *_Unwind_Find_FDE (void);
#endif
#if __mc68000__
/* M68K */
  extern _Unwind_Ptr _Unwind_ForcedUnwind (void);
#endif
#if __mc68000__
/* M68K */
  extern _Unwind_Ptr _Unwind_GetDataRelBase (void);
#endif
#if __mc68000__
/* M68K */
  extern _Unwind_Word _Unwind_GetGR (void);
#endif
#if __mc68000__
/* M68K */
  extern _Unwind_Ptr _Unwind_GetIP (void);
#endif
#if __mc68000__
/* M68K */
  extern _Unwind_Ptr _Unwind_GetLanguageSpecificData (void);
#endif
#if __mc68000__
/* M68K */
  extern _Unwind_Ptr _Unwind_GetRegionStart (void);
#endif
#if __mc68000__
/* M68K */
  extern _Unwind_Ptr _Unwind_GetTextRelBase (void);
#endif
#if __mc68000__
/* M68K */
  extern _Unwind_Reason_Code _Unwind_RaiseException (void);
#endif
#if __mc68000__
/* M68K */
  extern void _Unwind_Resume (void);
#endif
#if __mc68000__
/* M68K */
  extern void _Unwind_SetGR (void);
#endif
#if __mc68000__
/* M68K */
  extern void _Unwind_SetIP (void);
#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  extern void _Unwind_DeleteException (void);
#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  extern fde *_Unwind_Find_FDE (void);
#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  extern _Unwind_Ptr _Unwind_ForcedUnwind (void);
#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  extern _Unwind_Ptr _Unwind_GetDataRelBase (void);
#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  extern _Unwind_Word _Unwind_GetGR (void);
#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  extern _Unwind_Ptr _Unwind_GetIP (void);
#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  extern _Unwind_Ptr _Unwind_GetLanguageSpecificData (void);
#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  extern _Unwind_Ptr _Unwind_GetRegionStart (void);
#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  extern _Unwind_Ptr _Unwind_GetTextRelBase (void);
#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  extern _Unwind_Reason_Code _Unwind_RaiseException (void);
#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  extern void _Unwind_Resume (void);
#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  extern void _Unwind_SetGR (void);
#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  extern void _Unwind_SetIP (void);
#endif
#if __alpha__
/* Alpha */
  extern void _Unwind_DeleteException (void);
#endif
#if __alpha__
/* Alpha */
  extern fde *_Unwind_Find_FDE (void);
#endif
#if __alpha__
/* Alpha */
  extern _Unwind_Ptr _Unwind_ForcedUnwind (void);
#endif
#if __alpha__
/* Alpha */
  extern _Unwind_Ptr _Unwind_GetDataRelBase (void);
#endif
#if __alpha__
/* Alpha */
  extern _Unwind_Word _Unwind_GetGR (void);
#endif
#if __alpha__
/* Alpha */
  extern _Unwind_Ptr _Unwind_GetIP (void);
#endif
#if __alpha__
/* Alpha */
  extern _Unwind_Ptr _Unwind_GetLanguageSpecificData (void);
#endif
#if __alpha__
/* Alpha */
  extern _Unwind_Ptr _Unwind_GetRegionStart (void);
#endif
#if __alpha__
/* Alpha */
  extern _Unwind_Ptr _Unwind_GetTextRelBase (void);
#endif
#if __alpha__
/* Alpha */
  extern _Unwind_Reason_Code _Unwind_RaiseException (void);
#endif
#if __alpha__
/* Alpha */
  extern void _Unwind_Resume (void);
#endif
#if __alpha__
/* Alpha */
  extern void _Unwind_SetGR (void);
#endif
#if __alpha__
/* Alpha */
  extern void _Unwind_SetIP (void);
#endif
#if __i386__
/* IA32 */
  extern _Unwind_Ptr _Unwind_ForcedUnwind (void);
#endif
#if __i386__
/* IA32 */
  extern _Unwind_Ptr _Unwind_GetDataRelBase (void);
#endif
#if __i386__
/* IA32 */
  extern _Unwind_Word _Unwind_GetGR (void);
#endif
#if __i386__
/* IA32 */
  extern _Unwind_Ptr _Unwind_GetIP (void);
#endif
#if __i386__
/* IA32 */
  extern _Unwind_Ptr _Unwind_GetLanguageSpecificData (void);
#endif
#if __i386__
/* IA32 */
  extern _Unwind_Ptr _Unwind_GetRegionStart (void);
#endif
#if __i386__
/* IA32 */
  extern _Unwind_Ptr _Unwind_GetTextRelBase (void);
#endif
#if __i386__
/* IA32 */
  extern _Unwind_Reason_Code _Unwind_RaiseException (void);
#endif
#if __i386__
/* IA32 */
  extern void _Unwind_Resume (void);
#endif
#if __i386__
/* IA32 */
  extern void _Unwind_SetGR (void);
#endif
#if __i386__
/* IA32 */
  extern void _Unwind_SetIP (void);
#endif
#if __powerpc64__
/* PPC64 */
  extern void _Unwind_DeleteException (void);
#endif
#if __powerpc64__
/* PPC64 */
  extern fde *_Unwind_Find_FDE (void);
#endif
#if __powerpc64__
/* PPC64 */
  extern _Unwind_Ptr _Unwind_ForcedUnwind (void);
#endif
#if __powerpc64__
/* PPC64 */
  extern _Unwind_Ptr _Unwind_GetDataRelBase (void);
#endif
#if __powerpc64__
/* PPC64 */
  extern _Unwind_Word _Unwind_GetGR (void);
#endif
#if __powerpc64__
/* PPC64 */
  extern _Unwind_Ptr _Unwind_GetIP (void);
#endif
#if __powerpc64__
/* PPC64 */
  extern _Unwind_Ptr _Unwind_GetLanguageSpecificData (void);
#endif
#if __powerpc64__
/* PPC64 */
  extern _Unwind_Ptr _Unwind_GetRegionStart (void);
#endif
#if __powerpc64__
/* PPC64 */
  extern _Unwind_Ptr _Unwind_GetTextRelBase (void);
#endif
#if __powerpc64__
/* PPC64 */
  extern _Unwind_Reason_Code _Unwind_RaiseException (void);
#endif
#if __powerpc64__
/* PPC64 */
  extern void _Unwind_Resume (void);
#endif
#if __powerpc64__
/* PPC64 */
  extern void _Unwind_SetGR (void);
#endif
#if __powerpc64__
/* PPC64 */
  extern void _Unwind_SetIP (void);
#endif
#if __s390__ && !__s390x__
/* S390 */
  extern void _Unwind_DeleteException (void);
#endif
#if __s390__ && !__s390x__
/* S390 */
  extern fde *_Unwind_Find_FDE (void);
#endif
#if __s390__ && !__s390x__
/* S390 */
  extern _Unwind_Ptr _Unwind_ForcedUnwind (void);
#endif
#if __s390__ && !__s390x__
/* S390 */
  extern _Unwind_Ptr _Unwind_GetDataRelBase (void);
#endif
#if __s390__ && !__s390x__
/* S390 */
  extern _Unwind_Word _Unwind_GetGR (void);
#endif
#if __s390__ && !__s390x__
/* S390 */
  extern _Unwind_Ptr _Unwind_GetIP (void);
#endif
#if __s390__ && !__s390x__
/* S390 */
  extern _Unwind_Ptr _Unwind_GetLanguageSpecificData (void);
#endif
#if __s390__ && !__s390x__
/* S390 */
  extern _Unwind_Ptr _Unwind_GetRegionStart (void);
#endif
#if __s390__ && !__s390x__
/* S390 */
  extern _Unwind_Ptr _Unwind_GetTextRelBase (void);
#endif
#if __s390__ && !__s390x__
/* S390 */
  extern _Unwind_Reason_Code _Unwind_RaiseException (void);
#endif
#if __s390__ && !__s390x__
/* S390 */
  extern void _Unwind_Resume (void);
#endif
#if __s390__ && !__s390x__
/* S390 */
  extern void _Unwind_SetGR (void);
#endif
#if __s390__ && !__s390x__
/* S390 */
  extern void _Unwind_SetIP (void);
#endif
#if __x86_64__
/* x86-64 */
  extern void _Unwind_DeleteException (void);
#endif
#if __x86_64__
/* x86-64 */
  extern fde *_Unwind_Find_FDE (void);
#endif
#if __x86_64__
/* x86-64 */
  extern _Unwind_Ptr _Unwind_ForcedUnwind (void);
#endif
#if __x86_64__
/* x86-64 */
  extern _Unwind_Ptr _Unwind_GetDataRelBase (void);
#endif
#if __x86_64__
/* x86-64 */
  extern _Unwind_Word _Unwind_GetGR (void);
#endif
#if __x86_64__
/* x86-64 */
  extern _Unwind_Ptr _Unwind_GetIP (void);
#endif
#if __x86_64__
/* x86-64 */
  extern _Unwind_Ptr _Unwind_GetLanguageSpecificData (void);
#endif
#if __x86_64__
/* x86-64 */
  extern _Unwind_Ptr _Unwind_GetRegionStart (void);
#endif
#if __x86_64__
/* x86-64 */
  extern _Unwind_Ptr _Unwind_GetTextRelBase (void);
#endif
#if __x86_64__
/* x86-64 */
  extern _Unwind_Reason_Code _Unwind_RaiseException (void);
#endif
#if __x86_64__
/* x86-64 */
  extern void _Unwind_Resume (void);
#endif
#if __x86_64__
/* x86-64 */
  extern void _Unwind_SetGR (void);
#endif
#if __x86_64__
/* x86-64 */
  extern void _Unwind_SetIP (void);
#endif
#if __s390x__
/* S390X */
  extern void _Unwind_DeleteException (void);
#endif
#if __s390x__
/* S390X */
  extern fde *_Unwind_Find_FDE (void);
#endif
#if __s390x__
/* S390X */
  extern _Unwind_Ptr _Unwind_ForcedUnwind (void);
#endif
#if __s390x__
/* S390X */
  extern _Unwind_Ptr _Unwind_GetDataRelBase (void);
#endif
#if __s390x__
/* S390X */
  extern _Unwind_Word _Unwind_GetGR (void);
#endif
#if __s390x__
/* S390X */
  extern _Unwind_Ptr _Unwind_GetIP (void);
#endif
#if __s390x__
/* S390X */
  extern _Unwind_Ptr _Unwind_GetLanguageSpecificData (void);
#endif
#if __s390x__
/* S390X */
  extern _Unwind_Ptr _Unwind_GetRegionStart (void);
#endif
#if __s390x__
/* S390X */
  extern _Unwind_Ptr _Unwind_GetTextRelBase (void);
#endif
#if __s390x__
/* S390X */
  extern _Unwind_Reason_Code _Unwind_RaiseException (void);
#endif
#if __s390x__
/* S390X */
  extern void _Unwind_Resume (void);
#endif
#if __s390x__
/* S390X */
  extern void _Unwind_SetGR (void);
#endif
#if __s390x__
/* S390X */
  extern void _Unwind_SetIP (void);
#endif
#ifdef __cplusplus
}
#endif
#endif
