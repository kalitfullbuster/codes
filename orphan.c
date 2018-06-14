#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	pid=fork();
	if(pid>0)
	{
		while(1==1);
		printf("I Died");
	}	
	else if(pid==0)
		printf("I am orphan" );
	while(1==1)
	{
		printf("%d",getppid());
	}
}
	
