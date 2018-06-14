#include<pthread.h>
#include<stdio.h>


void* runner(){
			int i;
			for(i=0;i<10;i++)
				printf("Hello World\n");
				pthread_exit(0);
				}
	void main()
	{
		pthread_t tid;
		pthread_create(&tid, NULL, runner, NULL);
		pthread_join(tid,NULL);
		
		
		
	}
	
