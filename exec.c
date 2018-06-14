#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	pid_t pid;
	pid=fork();
	if(pid==0)
	{
		
		execlp("/bin/ls","ls",NULL);
	}
	else if(pid>0)
	{
		printf("pid=%d" ,getpid());
		wait(NULL);
		exit(0);
	}
}
