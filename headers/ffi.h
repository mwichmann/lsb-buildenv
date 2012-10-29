#if (__LSB_VERSION__ >= 50 )
#ifndef _FFI_H_
#define _FFI_H_

#include <limits.h>
#include <stddef.h>
#include <ffitarget.h>

#ifdef __cplusplus
extern "C" {
#endif


#define FFI_64_BIT_MAX	9223372036854775807
#if LONG_MAX == 2147483647
#  define FFI_SIZEOF_ARG        4
#elif LONG_MAX == FFI_64_BIT_MAX
#  define FFI_SIZEOF_ARG        8
#endif
#define FFI_SIZEOF_JAVA_RAW	FFI_SIZEOF_ARG


    typedef struct {
	size_t size;
	unsigned short alignment;
	unsigned short type;
	_ffi_type **elements;
    } _ffi_type;

    typedef _ffi_type ffi_type;

    typedef enum {
	FFI_OK,
	FFI_BAD_TYPEDEF,
	FFI_BAD_ABI
    } ffi_status;

    typedef struct {
	ffi_abi abi;
	unsigned int nargs;
	ffi_type **arg_types;
	ffi_type *rtype;
	unsigned int bytes;
	unsigned int flags;
    } ffi_cif;

    typedef union {
	ffi_sarg sint;
	ffi_arg uint;
	float flt;
	char data[FFI_SIZEOF_ARG];
	void *ptr;
    } ffi_raw;

    typedef ffi_raw ffi_java_raw;

    typedef struct {
	char tramp[FFI_TRAMPOLINE_SIZE];
	ffi_cif *cif;
	void (*fun) (ffi_cif *, void *, void **, void *);
	void *user_data;
    } ffi_closure;

    typedef struct {
	char tramp[FFI_TRAMPOLINE_SIZE];
	ffi_cif *cif;
	void (*translate_args) (ffi_cif *, void *, void **, void *);
	void *this_closure;
	void (*fun) (ffi_cif *, void *, ffi_raw *, void *);
	void *user_data;
    } ffi_raw_closure;

    typedef struct {
	char tramp[FFI_TRAMPOLINE_SIZE];
	ffi_cif *cif;
	void (*translate_args) (ffi_cif *, void *, void **, void *);
	void *this_closure;
	void (*fun) (ffi_cif *, void *, ffi_java_raw *, void *);
	void *user_data;
    } ffi_java_raw_closure;


/* Function prototypes */

    extern void ffi_call(ffi_cif * cif, void (*fn) (void), void *rvalue,
			 void **avalue);
    extern void *ffi_closure_alloc(size_t size, void **code);
    extern void ffi_closure_free(void *);
    extern void ffi_java_ptrarray_to_raw(ffi_cif * cif, void **args,
					 ffi_java_raw * raw);
    extern void ffi_java_raw_call(ffi_cif * cif, void (*fn) (void),
				  void *rvalue, ffi_java_raw * avalue);
    extern size_t ffi_java_raw_size(ffi_cif * cif);
    extern void ffi_java_raw_to_ptrarray(ffi_cif * cif, ffi_java_raw * raw,
					 void **args);
    extern ffi_status ffi_prep_cif(ffi_cif * cif, ffi_abi abi,
				   unsigned int nargs, ffi_type * rtype,
				   ffi_type * *atypes);
    extern ffi_status ffi_prep_cif_var(ffi_cif * cif, ffi_abi abi,
				       unsigned int nfixedargs,
				       unsigned int ntotalargs,
				       ffi_type * rtype,
				       ffi_type * *atypes);
    extern ffi_status ffi_prep_closure(ffi_closure *, ffi_cif *,
				       void (*fun) (ffi_cif *, void *,
						    void **, void *),
				       void *user_data);
    extern ffi_status ffi_prep_closure_loc(ffi_closure *, ffi_cif *,
					   void (*fun) (ffi_cif *, void *,
							void **, void *),
					   void *user_data, void *codeloc);
    extern ffi_status ffi_prep_java_raw_closure(ffi_java_raw_closure *,
						ffi_cif * cif,
						void (*fun) (ffi_cif *,
							     void *,
							     ffi_java_raw
							     *, void *),
						void *user_data);
    extern ffi_status ffi_prep_java_raw_closure_loc(ffi_java_raw_closure *,
						    ffi_cif * cif,
						    void (*fun) (ffi_cif *,
								 void *,
								 ffi_java_raw
								 *,
								 void *),
						    void *user_data,
						    void *codeloc);
    extern ffi_status ffi_prep_raw_closure(ffi_raw_closure *,
					   ffi_cif * cif,
					   void (*fun) (ffi_cif *, void *,
							ffi_raw *, void *),
					   void *user_data);
    extern ffi_status ffi_prep_raw_closure_loc(ffi_raw_closure *,
					       ffi_cif * cif,
					       void (*fun) (ffi_cif *,
							    void *,
							    ffi_raw *,
							    void *),
					       void *user_data,
					       void *codeloc);
    extern void ffi_ptrarray_to_raw(ffi_cif * cif, void **args,
				    ffi_raw * raw);
    extern void ffi_raw_call(ffi_cif * cif, void (*fn) (void),
			     void *rvalue, ffi_raw * avalue);
    extern size_t ffi_raw_size(ffi_cif * cif);
    extern void ffi_raw_to_ptrarray(ffi_cif * cif, ffi_raw * raw,
				    void **args);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
