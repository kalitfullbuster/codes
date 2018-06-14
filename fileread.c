#include<stdio.h>
#include<unistd.h>
#define MAX 255
void main(){
	pid_t pid;
	int fd[2],n,d; 
	pipe(fd);
	char buff[MAX];
	char readBuff[MAX];
	pid=fork();
	if(pid==0){
		close(fd[0]);
		d=open("file1.txt",0,RDONLY);
		n=read(d,readBuff,MAX);
		write(fd[1],readBuff,n);
		}
	else if(pid>0){
		
		close(fd[1]);
		n=read(fd[0],buff,MAX);
		write(1,buff,n);
		}
	 
	}
		

	
