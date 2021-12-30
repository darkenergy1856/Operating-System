#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
pid_t p, pid;
p = fork();
pid = getpid();
if(p<0)
{
printf("Fork Failed");
return 1;
}
printf("Out of fork id  : %d \n",p);
printf("Process id is : %d \n" ,pid);
return 0;
}