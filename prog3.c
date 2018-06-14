#include<stdio.h>
#include<unistd.h>
	int main()
	{
		int a=70;
		int pid=fork();
		int i;
		if(pid>0)
		{
			wait();
			for(i=0;i<70;i++)
			{
			a++;
			printf("The Value of a is = %d\n" ,a);
			}
		}
		if(pid==0)
		{
		 	for(i=0;i<70;i++)
			{
			a--;
			printf("The Value of a is = %d\n" ,a);
			}	
		}
		
		
	}
