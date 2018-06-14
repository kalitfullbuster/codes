#include<stdio.h>
#include<unistd.h>
int main(){
	pid_t pid;
	int fd[2];
	pipe(fd);
	char buff[11];
	pid=fork();
	if(pid>0){
		close(fd[0]);
		write(fd[1],"Hello World",11);
		}
	else if(pid==0){
		close(fd[1]);
		read(fd[0],buff,11);
		
		}
	}


