#include<stdio.h>
struct process
	{
	
	int pid;
	int BT;
	int priority;
	}p[10],temp;
struct result{
		float wtime;
		float ttime;
};

void main()
	{
		int i,j,k,n,ttur,twat;
		float  awat,atur;
		printf("enter the no. of process:");
		scanf("%d" ,&n);
		for(i=0;i<n;i++)
		{
			printf("Burst time for process p %d(in ms):",(i+1));
			scanf("%d" ,&p[i].BT);
			printf("Priority of process p:%d" ,(i+1));
			scanf("%d" ,&p[i].priority);
			p[i].pid=i+1;
		}
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if((p[i].priority>p[j].priority)||(p[i].priority==p[j].priority&&p[i].pid>p[j].pid))
				{
		
		


