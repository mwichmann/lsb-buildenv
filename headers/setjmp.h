typedef int __jmp_buf;

/*
 * 40 Default HeaderGroup for setjmp.h
 */
typedef struct __jmp_buf_tag {
    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
} jmp_buf;

typedef jmp_buf sigjmp_buf;


int __sigsetjmp(jmp_buf, int);
void longjmp(jmp_buf, int);
void siglongjmp(sigjmp_buf, int);
void _longjmp(jmp_buf, int);
