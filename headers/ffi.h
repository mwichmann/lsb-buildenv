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


    typedef struct _ffi_type ffi_type;

    typedef enum {
	FFI_OK,
	FFI_BAD_TYPEDEF,
	FFI_BAD_ABI
    } ffi_status;

    typedef union ffi_raw ffi_java_raw;

    struct ffi_cif {
	ffi_abi abi;
	unsigned int nargs;
	ffi_type **arg_types;
	ffi_type *rtype;
	unsigned int bytes;
	unsigned int flags;
    };

    union ffi_raw {
	ffi_sarg sint;
	ffi_arg uint;
	float flt;
	char data[FFI_SIZEOF_ARG];
	void *ptr;
    };

    struct ffi_closure {
	char tramp[FFI_TRAMPOLINE_SIZE];
	struct ffi_cif *cif;
	void (*fun) (struct ffi_cif *, void *, void **, void *);
	void *user_data;
    };

    struct ffi_raw_closure {
	char tramp[FFI_TRAMPOLINE_SIZE];
	struct ffi_cif *cif;
	void (*translate_args) (struct ffi_cif *, void *, void **, void *);
	void *this_closure;
	void (*fun) (struct ffi_cif *, void *, union ffi_raw *, void *);
	void *user_data;
    };

    struct ffi_java_raw_closure {
	char tramp[FFI_TRAMPOLINE_SIZE];
	struct ffi_cif *cif;
	void (*translate_args) (struct ffi_cif *, void *, void **, void *);
	void *this_closure;
	void (*fun) (struct ffi_cif *, void *, ffi_java_raw *, void *);
	void *user_data;
    };

    struct _ffi_type {
	size_t size;
	unsigned short alignment;
	unsigned short type;
	struct _ffi_type **elements;
    };


/* Function prototypes */

    extern void ffi_call(struct ffi_cif *cif, void (*fn) (void),
			 void *rvalue, void **avalue);
    extern void *ffi_closure_alloc(size_t size, void **code);
    extern void ffi_closure_free(void *);
    extern void ffi_java_ptrarray_to_raw(struct ffi_cif *cif, void **args,
					 ffi_java_raw * raw);
    extern void ffi_java_raw_call(struct ffi_cif *cif, void (*fn) (void),
				  void *rvalue, ffi_java_raw * avalue);
    extern size_t ffi_java_raw_size(struct ffi_cif *cif);
    extern void ffi_java_raw_to_ptrarray(struct ffi_cif *cif,
					 ffi_java_raw * raw, void **args);
    extern ffi_status ffi_prep_cif(struct ffi_cif *cif, ffi_abi abi,
				   unsigned int nargs, ffi_type * rtype,
				   ffi_type * *atypes);
    extern ffi_status ffi_prep_cif_var(struct ffi_cif *cif, ffi_abi abi,
				       unsigned int nfixedargs,
				       unsigned int ntotalargs,
				       ffi_type * rtype,
				       ffi_type * *atypes);
    extern ffi_status ffi_prep_closure(struct ffi_closure *,
				       struct ffi_cif *,
				       void (*fun) (struct ffi_cif *,
						    void *, void **,
						    void *),
				       void *user_data);
    extern ffi_status ffi_prep_closure_loc(struct ffi_closure *,
					   struct ffi_cif *,
					   void (*fun) (struct ffi_cif *,
							void *, void **,
							void *),
					   void *user_data, void *codeloc);
    extern ffi_status ffi_prep_java_raw_closure(struct ffi_java_raw_closure
						*, struct ffi_cif *cif,
						void (*fun) (struct ffi_cif
							     *, void *,
							     ffi_java_raw
							     *, void *),
						void *user_data);
    extern ffi_status ffi_prep_java_raw_closure_loc(struct
						    ffi_java_raw_closure *,
						    struct ffi_cif *cif,
						    void (*fun) (struct
								 ffi_cif *,
								 void *,
								 ffi_java_raw
								 *,
								 void *),
						    void *user_data,
						    void *codeloc);
    extern ffi_status ffi_prep_raw_closure(struct ffi_raw_closure *,
					   struct ffi_cif *cif,
					   void (*fun) (struct ffi_cif *,
							void *,
							union ffi_raw *,
							void *),
					   void *user_data);
    extern ffi_status ffi_prep_raw_closure_loc(struct ffi_raw_closure *,
					       struct ffi_cif *cif,
					       void (*fun) (struct ffi_cif
							    *, void *,
							    union ffi_raw
							    *, void *),
					       void *user_data,
					       void *codeloc);
    extern void ffi_ptrarray_to_raw(struct ffi_cif *cif, void **args,
				    union ffi_raw *raw);
    extern void ffi_raw_call(struct ffi_cif *cif, void (*fn) (void),
			     void *rvalue, union ffi_raw *avalue);
    extern size_t ffi_raw_size(struct ffi_cif *cif);
    extern void ffi_raw_to_ptrarray(struct ffi_cif *cif,
				    union ffi_raw *raw, void **args);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
