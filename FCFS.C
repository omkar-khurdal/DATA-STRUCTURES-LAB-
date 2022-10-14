#include<stdio.h>

int main()

{
int process,AT[10],BT[10],CT[10],TAT[10],WT[10],i,sum=0;

printf("Enter the no of process");
scanf("%d",&process);
printf("\n");

for (i=0;i<process;i++)
{
	


printf("Enter the process no %d ",i);
printf("\n");

printf("Enter the Arrival time ");
scanf("%d",&AT[i]);


printf("Enter the Burst time ");
scanf("%d",&BT[i]);

}

for (i=0;i<process;i++)
{
	sum=sum+BT[i];
	printf("CT:%d\n",sum);}
		
		
for (i=1;i<process;i++){
	
	TAT[i]=sum-AT[i];
	printf("TAT: %d\n",TAT[i]);
	}
for (i=1;i<process;i++){	
WT[i]=TAT[i]-BT[i];
printf("WT:%d",WT[i]);
}
