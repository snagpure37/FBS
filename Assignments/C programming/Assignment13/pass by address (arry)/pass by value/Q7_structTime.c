#include<stdio.h>

typedef struct Time
{
	int hour;
	int min;
	int sec;
}Time;

Time storeTime(Time);
void displayTime(Time);

void main()
{
	Time time;
	time = storeTime(time);
	displayTime(time);
}

Time storeTime(Time time)
{
	printf("Enter the hour, minutes, second for the time : ");
	scanf("%d%d%d",&time.hour,&time.min,&time.sec);
	
	return time;
}

void displayTime(Time time)
{
	printf("Time Details\n");
	printf("time = %d:%d:%d\n", time.hour, time.min, time.sec);
}
