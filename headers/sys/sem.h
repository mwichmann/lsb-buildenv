
struct sembuf
{
  short sem_num;
  short sem_op;
  short sem_flg;
}
 ;

int semctl (int, int, int, ...);
int semget (key_t, int, int);
int semop (int, struct sembuf *, unsigned int);
