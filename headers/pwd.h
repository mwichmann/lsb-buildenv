struct passwd {
    char *pw_name;
    char *pw_passwd;
    __uid_t pw_uid;
    __gid_t pw_gid;
    char *pw_gecos;
    char *pw_dir;
    char *pw_shell;
};

void endpwent(void);
struct passwd *getpwent(void);
struct passwd *getpwnam(char *);
struct passwd *getpwuid(__uid_t);
void setpwent(void);
