#include<stdio.h>

typedef struct Date
{
	int date;
	int month;
	int year;
}Date;

void storeDate(Date*,int);
void displayDate(Date*, int);

void main()
{
	int size;
	printf("Enter the size : ");
	scanf("%d",&size);
	Date dt[size];
	storeDate(dt,size);
	displayDate(dt,size);
}

void storeDate(Date* dt,int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("Enter %d Date\n", i+1);
		printf("Enter date : ");
		scanf("%d",&dt[i].date);
		
		printf("Enter month : ");
		scanf("%d",&dt[i].month);
		
		printf("Enter year : ");
		scanf("%d",&dt[i].year);
	}
}

void displayDate(Date* dt, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("Details of %d Date\n", i+1);
		printf("date = %d/%d/%d\n",dt[i].date, dt[i].month, dt[i].year);
	}
}
