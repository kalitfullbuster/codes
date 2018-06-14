#include<stdio.h>
#include<unistd.h>
int global_var=60;
int main()
{
	pid_t pid;
	pid=fork();
	int var;
	var=70;
	if(pid>0)
		sleep(2);
	if(pid==0)
	{
		var++;
		global_var++;
	}
	printf("pid=%d,global_var=%d,var=%d\n" ,getpid(),global_var,var);
	return(0);
}
