#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	pid=fork();
	if(pid>0)
	{
		sleep(1000);
		printf("I eat Brains");
	}	
	else if(pid==0)
		printf("My parents turned into  Zombies,I think his pid is %d plz check his status using top command",getpid()-1);
	while(1==1)
	{
		printf("10");
	}
}
	
