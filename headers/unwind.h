#ifndef _UNWIND_H_
#define _UNWIND_H_


#ifdef __cplusplus
extern "C"
{
#endif




  struct dwarf_eh_base;

  struct _Unwind_Context;

  struct _Unwind_Exception;

  typedef void *_Unwind_Ptr;

  typedef int _Unwind_Word;

  enum _Unwind_Reason_Code;


  extern void _Unwind_DeleteException (struct _Unwind_Exception *);
  extern _Unwind_Ptr _Unwind_ForcedUnwind (void);
  extern _Unwind_Ptr _Unwind_GetDataRelBase (struct _Unwind_Context *);
  extern _Unwind_Word _Unwind_GetGR (struct _Unwind_Context *, int);
  extern _Unwind_Ptr _Unwind_GetIP (struct _Unwind_Context *);
  extern _Unwind_Ptr _Unwind_GetLanguageSpecificData (struct _Unwind_Context
						      *, unsigned int);
  extern _Unwind_Ptr _Unwind_GetRegionStart (struct _Unwind_Context *);
  extern _Unwind_Ptr _Unwind_GetTextRelBase (struct _Unwind_Context);
  extern _Unwind_Reason_Code _Unwind_RaiseException (struct _Unwind_Exception
						     *);
  extern void _Unwind_Resume (struct _Unwind_Exception *);
  extern void _Unwind_SetGR (struct _Unwind_Context *, int, unsigned int);
  extern void _Unwind_SetIP (struct _Unwind_Context *, unsigned int);
#ifdef __cplusplus
}
#endif
#endif
