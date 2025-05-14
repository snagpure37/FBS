#include<stdio.h>

typedef struct Time
{
	int hour;
	int min;
	int sec;
}Time;

void storeTime(Time*,int);
void displayTime(Time*, int);

void main()
{
	int size;
	printf("Enter the size : ");
	scanf("%d",&size);
	Time time[size];
	storeTime(time,size);
	displayTime(time,size);
}

void storeTime(Time* time,int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("Enter %d Time\n", i+1);
		printf("Enter hour : ");
		scanf("%d",&time[i].hour);
		
		printf("Enter minutes : ");
		scanf("%d",&time[i].min);
		
		printf("Enter second : ");
		scanf("%d",&time[i].sec);
	}
}

void displayTime(Time* time, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("Details of %d Time\n", i+1);
		printf("Time = %d:%d:%d\n",time[i].hour, time[i].min, time[i].sec);
	}
}
