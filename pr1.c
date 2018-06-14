#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	pid=fork();
	pid=fork();
	printf("pid=%d\n",getpid());
	printf("parent pid=%d \n" ,getppid());
}
