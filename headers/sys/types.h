#ifndef _sys_type_h_
#define _sys_type_h_
/*
 * 112 Stuff really in asm/posix_types.h
 */
typedef unsigned int __kernel_size_t;

/*
 * 114 Stuff that really in bits/types.h
 */
typedef int __key_t;

typedef unsigned int __u_int;

typedef unsigned long long __u_quad_t;

typedef long long __quad_t;

/*
 * 113 Stuff really in linux/types.h
 */
typedef __kernel_size_t size_t;

typedef __quad_t __loff_t;

/*
 * 45 Default HeaderGroup for sys/types.h
 */
typedef int int32_t;

typedef int __ssize_t;

typedef long __off_t;

typedef __loff_t __off64_t;

typedef int __int32_t;

typedef void *va_list;

typedef __u_int __mode_t;

typedef __u_int __gid_t;

typedef __u_int __uid_t;

typedef int __pid_t;

typedef void *__gnuc_va_list;

typedef __key_t key_t;

typedef __u_quad_t __dev_t;

typedef __u_int __id_t;

typedef long __time_t;



#endif
