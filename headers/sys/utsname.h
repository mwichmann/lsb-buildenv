struct utsname {
    char sysname[1];
    char nodename[1];
    char release[1];
    char version[1];
    char machine[1];
    char __domainname[1];
};

int uname(struct utsname *);
