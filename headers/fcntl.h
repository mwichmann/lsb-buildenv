#ifndef _FCNTL_H_
#define _FCNTL_H_


#define O_RDONLY	00
#define O_ACCMODE	0003
#define O_WRONLY	01
#define O_CREAT	0100
#define O_TRUNC	01000
#define O_SYNC	010000
#define O_RDWR	02
#define O_EXCL	0200
#define O_APPEND	02000
#define O_ASYNC	020000
#define O_NOCTTY	0400
#define O_NDELAY	04000
#define O_NONBLOCK	04000



#define F_RDLCK	0
#define F_DUPFD	0
#define F_GETFD	1
#define F_WRLCK	1
#define F_SETFD	2
#define F_UNLCK	2
#define F_GETFL	3
#define F_SETFL	4
#define F_GETLK	5
#define F_SETLK	6
#define F_SETLKW	7
#define F_SETOWN	8
#define F_GETOWN	9

int fcntl (int, int, ...);
#endif
