#include<stdio.h>

typedef struct Date
{
	int date;
	int month;
	int year;
}Date;

void storeDate(Date*);
void displayDate(Date*);

void main()
{
	Date dt;
	storeDate(&dt);
	displayDate(&dt);
}

void storeDate(Date* dt)
{
	printf("Enter Date\n");
	printf("Enter date : ");
	scanf("%d",&dt->date);
	
	printf("Enter month : ");
	scanf("%d",&dt->month);
	
	printf("Enter year : ");
	scanf("%d",&dt->year);
}

void displayDate(Date* dt)
{
		printf("Details of Date\n");
		printf("date = %d/%d/%d\n",dt->date, dt->month, dt->year);
}
