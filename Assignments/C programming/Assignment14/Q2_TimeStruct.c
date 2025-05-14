#include<stdio.h>

typedef struct Time
{
	int hrs;
	int min;
	int sec;
}Time;

void acceptTime(Time*);
void displayTime(Time*);
Time sumofTime(Time*, Time*);

void main()
{
	Time time_1, time_2;
	acceptTime(&time_1);
	displayTime(&time_1);
	acceptTime(&time_2);
	displayTime(&time_2);
	
	Time sum = sumofTime(&time_1,&time_2);
	displayTime(&sum);
}

void acceptTime(Time* time)
{
	printf("Enter the time\n");
	printf("Enter the hours : ");
	scanf("%d",&time->hrs);
	
	printf("Enter the minutes : ");
	scanf("%d",&time->min);
	
	printf("Enter the second : ");
	scanf("%d",&time->sec);
}

void displayTime(Time* time)
{
	printf("Entered time\n");
	printf("time = %d:%d:%d\n",time->hrs,time->min,time->sec);
}

Time sumofTime(Time* t1, Time* t2)
{
	Time res;
	res.sec = t1->sec + t2->sec;
	res.min = t1->min + t2->min + (res.sec/60);
	res.hrs = t1->hrs + t2->hrs + (res.min/60);
	
	res.sec = res.sec%60;
	res.min = res.min%60;
	
	return res;
}
