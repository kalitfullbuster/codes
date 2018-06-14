#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
	int main()
	{
		pid_t pid;
		int fib,num,i=0;
		char buff[5];
		int fd[2];
		pipe(fd);
		pid=fork();
		if(pid>0){
			close(fd[0]);
			printf("enter n:");
			scanf("%d" ,&num);
			
			buff[i]=itoa(num);
			
			
			write(fd[1],buff,10);
		}
		else if(pid==0){
			wait();
			int first=0,second=1,next,i;
			close(fd[1]);
			read(fd[0],buff,10);
			fib=atoi(buff);
			for(i=0;i<fib;i++)
			{
				if(i<=1)
					next=i;
				else{
					next=first+second;
					first=second;
					second=next;
				}			
				printf("%d\n",next);
				}
			
		}
		return 0;
	}
