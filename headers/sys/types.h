#ifndef _SYS_TYPES_H_
#define _SYS_TYPES_H_


typedef unsigned int __kernel_size_t;

typedef unsigned int __u_int;

typedef unsigned long long __u_quad_t;

typedef long long __quad_t;

typedef long __kernel_suseconds_t;

typedef char *__kernel_caddr_t;


typedef __u_int __mode_t;

typedef __u_int __gid_t;

typedef __quad_t __loff_t;

typedef __loff_t loff_t;

typedef int __key_t;


typedef __kernel_size_t size_t;

typedef __gid_t gid_t;

typedef __mode_t mode_t;

typedef __kernel_caddr_t caddr_t;


typedef int int32_t;

typedef int __ssize_t;

typedef long __off_t;

typedef __loff_t __off64_t;

typedef int __int32_t;

typedef void *va_list;

typedef int ptrdiff_t;

typedef __u_int __uid_t;

typedef __uid_t uid_t;

typedef int __pid_t;

typedef void *__gnuc_va_list;

typedef __key_t key_t;

typedef __u_quad_t __dev_t;

typedef __u_int __id_t;

typedef long __time_t;

typedef __kernel_suseconds_t suseconds_t;

typedef long fd_mask;

typedef struct
{
  unsigned long fds_bits[1];
}
fd_set;

#define NULL	((void*)0)

#endif
