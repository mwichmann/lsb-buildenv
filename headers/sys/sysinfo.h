#if (__LSB_VERSION__ >= 41 )
#ifndef _SYS_SYSINFO_H_
#define _SYS_SYSINFO_H_


#ifdef __cplusplus
extern "C" {
#endif


    struct sysinfo {
	long int uptime;	/* Seconds since boot */
	unsigned long int loads[3];	/* 1, 5, and 15 minute load averages */
	unsigned long int totalram;	/* Total usable main memory size */
	unsigned long int freeram;	/* Available memory size */
	unsigned long int sharedram;	/* Amount of shared memory */
	unsigned long int bufferram;	/* Memory used by buffers */
	unsigned long int totalswap;	/* Total swap space size */
	unsigned long int freeswap;	/* Swap space still available */
	unsigned short procs;	/* Number of current processes */
	unsigned short pad;	/* Padding for m68k */
	unsigned long int totalhigh;	/* Total high memory size */
	unsigned long int freehigh;	/* Available high memory size */
	unsigned int mem_unit;	/* Memory unit size in bytes */
	char _f[20 - 2 * sizeof(long) - sizeof(int)];	/* Padding for libc5 */
    };


/* Function prototypes */

    extern int sysinfo(struct sysinfo *info);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
