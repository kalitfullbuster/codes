#include<stdio.h>

int main(){
	char buff[11];
	int n;
	while((n=read(0,buff,5))>0)
		write(1,buff,n);

		
	}


