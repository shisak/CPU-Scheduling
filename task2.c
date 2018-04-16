#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
 
int main()
{
	int burst[20],wait[20],turnaround[20],availwt=0,availtat=0;
	int n,i,j;
	printf("*********************************************************************");
	printf("****************************CPU Scheduling***************************");
	printf("*********************************************************************");
	printf("Enter total number of processes: ");
    	scanf("\nYou have entered :%d",&n);
 	printf("\nEnter Burst Time: ");
    	for(i=0;i<n;i++)
    	{
        	printf("P[%d]:",i+1);
        	scanf("%d",&burst[i]);
    	}
 	wait[0]=0; 
	for(i=1;i<n;i++)
	{
        	wait[i]=0;
	        for(j=0;j<i;j++)
        	wait[i]+=burst[j];
	}
 	printf("\nProcess	Burst Time	Waiting Time	Turnaround Time");
 	for(i=0;i<n;i++)
  	{
        	turnaround[i]=brust[i]+wait[i];
        	availwt+=wait[i];
       		availtat+=turnaround[i];
        	printf("\nP[%d]		%d	%d	%d", i+1, burst[i], wait[i], turnaroud[i]);
	}
 	availwt/=i;
    	availtat/=i;
    	printf("\nAverage Waiting Time: %d",availwt);
    	printf("\nAverage Turnaround Time: %d",availtat);
    	return 0;
}