#include<pthread.h>
#include<stdio.h>


void* runner(){
			int i;
			for(i=1;i<11;i++)
				printf("\n%d",i);
				
				pthread_exit(0);
				
				}


	void main()
	{
		pthread_t tid1;
		pthread_t tid2;
		pthread_t tid3;
		pthread_create(&tid1, NULL, runner, NULL);
		pthread_join(tid1,NULL);
		pthread_create(&tid2, NULL, runner, NULL);
		pthread_join(tid2,NULL);
		pthread_create(&tid3, NULL, runner, NULL);
		pthread_join(tid3,NULL);
		
		
		
	}
	
