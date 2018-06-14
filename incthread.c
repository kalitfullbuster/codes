#include<pthread.h>
#include<stdio.h>

int i=0;
void* runner1(){
			while(i<11){
			i++;
			printf("\n%d\n",i);
			}
			pthread_exit(0);
		
	}
void* runner2(){
		while(i>1){
			--i;
			printf("\n%d\n",i);
			}
			pthread_exit(0);
		}
	

	void main()
	{
		pthread_t tid1;
		pthread_t tid2;
		pthread_create(&tid1, NULL, runner1, NULL);
		pthread_join(tid1,NULL);
		pthread_create(&tid2, NULL, runner2, NULL);
		pthread_join(tid2,NULL);
		
		
		
		
	}
	
