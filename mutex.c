#include <stdio.h>
#include <semaphore.h>
#include <pthread.h>
int Counter=1;
sem_t mutex;
int sem_wait(sem_t *sem);
int sem_post(sem_t *sem);
void* thread1(){
		
		sem_wait(&mutex);
		Counter++;	
		printf("I am Processed 2nd \t Counter=%d\n" ,Counter);
				
	     }
void* thread2(){
		
		Counter--;
		printf("I am Processed 1st \t Counter=%d\n" ,Counter);
		sem_post(&mutex);
	    }


	void main()
	{
		
		pthread_t tid1;
		pthread_t tid2;
		pthread_create(&tid1, NULL, thread1, NULL);
		pthread_create(&tid2, NULL, thread2, NULL);
		pthread_join(tid1,NULL);
		pthread_join(tid2,NULL);
		sem_destroy(&mutex);
	}


