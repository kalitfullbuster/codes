#include <stdio.h>
#include <unistd.h>
	int main()
	{
		int i,pid_t,pid;
		pid=fork();
		if(pid<0)
			printf("Error");
		if(pid>0)
		{
			
			for(i=0;i<20;i++)
			printf("I am from Parent Process id= %d\n",getpid());
		}
		else if (pid==0)
		{
			for(i=0;i<20;i++)
			printf("I am from Child process id=%d\n",getpid());
		}
	}
