struct group {
    char *gr_name;
    char *gr_passwd;
    __gid_t gr_gid;
    char **gr_mem;
};

void endgrent(void);
struct group *getgrent(void);
struct group *getgrgid(__gid_t);
struct group *getgrnam(char *);
void setgrent(void);
