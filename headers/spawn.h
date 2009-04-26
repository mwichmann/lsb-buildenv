#if (__LSB_VERSION__ >= 32 )
#ifndef _SPAWN_H_
#define _SPAWN_H_

#include <sched.h>
#include <signal.h>
#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif


#define POSIX_SPAWN_RESETIDS	0x01
#define POSIX_SPAWN_SETPGROUP	0x02
#define POSIX_SPAWN_SETSIGDEF	0x04
#define POSIX_SPAWN_SETSIGMASK	0x08
#define POSIX_SPAWN_SETSCHEDPARAM	0x10
#define POSIX_SPAWN_SETSCHEDULER	0x20


    typedef struct {
	int __allocated;
	int __used;
	struct __spawn_action *__actions;
	int __pad[16];
    } posix_spawn_file_actions_t;

    typedef struct {
	short __flags;
	pid_t __pgrp;
	sigset_t __sd;
	sigset_t __ss;
	struct sched_param __sp;
	int __policy;
	int __pad[16];
    } posix_spawnattr_t;


/* Function prototypes */

    extern int posix_spawn(pid_t * __pid, const char *__path,
			   const posix_spawn_file_actions_t *
			   __file_actions,
			   const posix_spawnattr_t * __attrp,
			   char *const argv[], char *const envp[]);
    extern int posix_spawn_file_actions_addclose(posix_spawn_file_actions_t
						 * __file_actions,
						 int __fd);
    extern int posix_spawn_file_actions_adddup2(posix_spawn_file_actions_t
						* __file_actions, int __fd,
						int __newfd);
    extern int posix_spawn_file_actions_addopen(posix_spawn_file_actions_t
						* __file_actions, int __fd,
						const char *__path,
						int __oflag,
						mode_t __mode);
    extern int posix_spawn_file_actions_destroy(posix_spawn_file_actions_t
						* __file_actions);
    extern int posix_spawn_file_actions_init(posix_spawn_file_actions_t *
					     __file_actions);
    extern int posix_spawnattr_destroy(posix_spawnattr_t * __attr);
    extern int posix_spawnattr_getflags(const posix_spawnattr_t * __attr,
					short int *__flags);
    extern int posix_spawnattr_getpgroup(const posix_spawnattr_t * __attr,
					 pid_t * __pgroup);
    extern int posix_spawnattr_getschedparam(const posix_spawnattr_t *
					     __attr,
					     struct sched_param
					     *__schedparam);
    extern int posix_spawnattr_getschedpolicy(const posix_spawnattr_t *
					      __attr, int *__schedpolicy);
    extern int posix_spawnattr_getsigdefault(const posix_spawnattr_t *
					     __attr,
					     sigset_t * __sigdefault);
    extern int posix_spawnattr_getsigmask(const posix_spawnattr_t * __attr,
					  sigset_t * __sigmask);
    extern int posix_spawnattr_init(posix_spawnattr_t * __attr);
    extern int posix_spawnattr_setflags(posix_spawnattr_t * _attr,
					short int __flags);
    extern int posix_spawnattr_setpgroup(posix_spawnattr_t * __attr,
					 pid_t __pgroup);
    extern int posix_spawnattr_setschedparam(posix_spawnattr_t * __attr,
					     const struct sched_param
					     *__schedparam);
    extern int posix_spawnattr_setschedpolicy(posix_spawnattr_t * __attr,
					      int __schedpolicy);
    extern int posix_spawnattr_setsigdefault(posix_spawnattr_t * __attr,
					     const sigset_t *
					     __sigdefault);
    extern int posix_spawnattr_setsigmask(posix_spawnattr_t * __attr,
					  const sigset_t * __sigmask);
    extern int posix_spawnp(pid_t * __pid, const char *__file,
			    const posix_spawn_file_actions_t *
			    __file_actions,
			    const posix_spawnattr_t * __attrp,
			    char *const argv[], char *const envp[]);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
