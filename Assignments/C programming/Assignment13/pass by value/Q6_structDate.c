#include<stdio.h>

typedef struct Date
{
	int date;
	int month;
	int year;
}Date;

Date storeDate(Date);
void displayDate(Date);

void main()
{
	Date dt;
	dt = storeDate(dt);
	displayDate(dt);
}

Date storeDate(Date dt)
{
	printf("Enter the date : ");
	scanf("%d",&dt.date);
	
	printf("Enter the month : ");
	scanf("%d",&dt.month);
	
	printf("Enter the year : ");
	scanf("%d",&dt.year);
	
	return dt;
}

void displayDate(Date dt)
{
	printf("Date Details\n");
	printf("Date = %d/%d/%d\n",dt.date,dt.month,dt.year);
}
