#ifndef _SYS_TYPES_H_
#define _SYS_TYPES_H_

#include <time.h>

#if defined(__ia64__)
#define __FDSET_LONGS	16
#endif
#if defined(__i386__)
#define __FDSET_LONGS	32
#endif


typedef unsigned int __kernel_size_t;

typedef unsigned int __u_int;

typedef unsigned long long __u_quad_t;

typedef long long __quad_t;

typedef long __kernel_suseconds_t;

typedef char *__kernel_caddr_t;

typedef struct
{
  unsigned long fds_bits[__FDSET_LONGS];
}
fd_set;




typedef __u_int __mode_t;

typedef __u_int __gid_t;

typedef unsigned int __u32;

typedef __quad_t __loff_t;

typedef __loff_t loff_t;

typedef int __key_t;




typedef int ino_t;

typedef __gid_t gid_t;

typedef __dev_t dev_t;

typedef __mode_t mode_t;

typedef int nlink_t;

typedef __kernel_caddr_t caddr_t;


#define NULL	((void*)0)


typedef int int32_t;

typedef int int64_t;

typedef __kernel_size_t size_t;

typedef int __ssize_t;

typedef long __off_t;

typedef __loff_t __off64_t;

typedef int __int32_t;

typedef int ptrdiff_t;

typedef int ssize_t;

typedef __u_int __uid_t;

typedef __uid_t uid_t;

typedef int __pid_t;

typedef int pid_t;

typedef unsigned long off_t;

typedef __key_t key_t;

typedef __u_quad_t __dev_t;

typedef __clock_t clock_t;

typedef __u_int __id_t;

typedef long __time_t;

typedef __time_t time_t;

typedef __kernel_suseconds_t suseconds_t;

typedef __u32 uint32_t;

typedef long fd_mask;

typedef long long uint64_t;

typedef int timer_t;

typedef int clockid_t;


#endif
