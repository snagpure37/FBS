#include<stdio.h>

typedef struct Time
{
	int hour;
	int min;
	int sec;
}Time;

void storeTime(Time*);
void displayTime(Time*);

void main()
{
	Time time;
	storeTime(&time);
	displayTime(&time);
}

void storeTime(Time* time)
{
	printf("Enter Time\n");
	printf("Enter hour : ");
	scanf("%d",&time->hour);
	
	printf("Enter minutes : ");
	scanf("%d",&time->min);
	
	printf("Enter second : ");
	scanf("%d",&time->sec);
}

void displayTime(Time* time)
{
	printf("Details of Time\n");
	printf("Time = %d:%d:%d\n",time->hour, time->min, time->sec);
}
