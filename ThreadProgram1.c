#include <stdio.h>       /* standard I/O routines                 */
#include <pthread.h>     /* pthread functions and data structures */
#include <unistd.h>
/* function to be executed by the new thread */
void*
do_loop(void* data)
{
    int i;			/* counter, to print numbers */
    int j;			/* counter, for delay        */
    int me = *((int*)data);     /* thread identifying number */
    printf("I am %d, mypid is %d\n", me, getpid());
    for (i=0; i<10; i++) {
	for (j=0; j<5000; j++) /* delay loop */
	    ;
        printf("'%d' - Got '%d'\n", me, i);
    }

    /* exit the thread */
    pthread_exit(NULL);
}

/* like any C program, program's execution begins in main */
int
main(int argc, char* argv[])
{
    int        thr_id;         /* thread ID for the newly created thread */
    pthread_t  p_thread1, p_thread2;       /* thread's structure                     */
    int        a         = 1;  /* thread 1 identifying number            */
    int        b         = 2;  /* thread 2 identifying number            */
    int        c         = 3;  /* thread 2 identifying number            */

    /* create a new thread that will execute 'do_loop()' */
    thr_id = pthread_create(&p_thread1, NULL, do_loop, (void*)&a);
    thr_id = pthread_create(&p_thread2, NULL, do_loop, (void*)&b);
    /* run 'do_loop()' in the main thread as well */
    do_loop((void*)&c);
    pthread_join(p_thread1, NULL);    
    /* NOT REACHED */
    return 0;
}
