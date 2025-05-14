#include<stdio.h>

struct Date
{
	int date;
	int month;
	int year;
};

void main()
{
	struct Date dt;
	printf("Enter details of Date : \n");
	printf("Enter date : ");
	scanf("%d",&dt.date);
	
	printf("Enter month : ");
	scanf("%d",&dt.month);
	
	printf("Enter year : ");
	scanf("%d",&dt.year);
	
	printf("\nDate details : \n");
	printf("Entered date = %d/%d/%d",dt.date,dt.month,dt.year);
	
//	store(&stud);
//	display(stud);
}

