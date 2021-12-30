#include<iostream>
using namespace std;
#include<stdlib.h>
#include<stdio.h>
int main()
{
cout<<"The Kernal version is : \n";
system("cat /proc/sys/kernel/osrelease");
cout<<"\nThe CPU space :\n";
system("cat /proc/cpuinfo |awk 'NR == 3,NR==4{print}' \n");
cout<<"\nAmount of CPU time since system was last booted is :\n";
system("cat /proc/uptime \n");
cout<<"\nThe configured memmory is : \n";
system("cat /proc/meminfo | awk 'NR==1{print $2}' \n");
cout<<"\nAmount of free memory : \n";
system("cat /proc/meminfo  | awk 'NR==2{print $2}' \n");
cout<<"\nAmount of used memory is : \n";
system("cat /proc/meminfo | awk '{if (NR==1) a=$2; if(NR==2) b=$2} END {print a-b}' \n");
cout<<endl;
return 0;
}