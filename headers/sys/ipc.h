


#define IPC_PRIVATE	((key_t)0)
#define IPC_RMID	0
#define IPC_CREAT	00001000
#define IPC_EXCL	00002000
#define IPC_NOWAIT	00004000
#define IPC_SET	1
#define IPC_STAT	2
key_t ftok (char *, int);
