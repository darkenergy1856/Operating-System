#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>

int main()
{
int pid;
pid = fork();

if (pid<0)
{
printf("\n Error");
exit(1);
}

else if(pid == 0)
{
printf("\n I am child process ");
printf("\n My pid is %d ",getpid());
exit(0);
}

else if(pid>0)
{
printf("\n I am parent process ");
printf("\n My actual pid is %d \n", getpid());
wait(NULL);
exit(1);
}
return 0;
}