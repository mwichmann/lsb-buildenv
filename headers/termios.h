
cfgetispeed (struct termios *);
cfgetospeed (struct termios *);
int cfsetispeed (struct termios *,);
int cfsetospeed (struct termios *,);
int tcflow (int, int);
int tcflush (int, int);
__pid_t tcgetsid (int);
int tcsendbreak (int, int);
int tcsetattr (int, int, struct termios *);
int tcdrain (int);
int tcgetattr (int, struct termios *);
