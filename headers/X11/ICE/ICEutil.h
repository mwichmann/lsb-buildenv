/*
 * 8 Default HeaderGroup for X11/ICE/ICEutil.h
 */
typedef struct {
    char *protocol_name;
    unsigned short protocol_data_length;
    char *protocol_data;
    char *network_id;
    char *auth_name;
    unsigned short auth_data_length;
    char *auth_data;
} IceAuthFileEntry;

typedef struct {
    char *protocol_name;
    char *network_id;
    char *auth_name;
    unsigned short auth_data_length;
    char *auth_data;
} IceAuthDataEntry;


char *IceAuthFileName(void);
void IceFreeAuthFileEntry(IceAuthFileEntry *);
char *IceGenerateMagicCookie(int);
IceAuthFileEntry *IceGetAuthFileEntry(char *, char *, char *);
int IceLockAuthFile(char *, int, int, long);
IceAuthFileEntry *IceReadAuthFileEntry(FILE *);
void IceSetPaAuthData(int, IceAuthDataEntry *);
void IceUnlockAuthFile(char *);
int IceWriteAuthFileEntry(FILE *, IceAuthFileEntry *);
