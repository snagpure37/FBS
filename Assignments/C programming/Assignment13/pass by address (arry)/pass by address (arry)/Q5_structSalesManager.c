#include<stdio.h>

typedef struct SalesManager
{
	int id;
	char name[30];
	double salary;
	double incentive;
	double target;
}SalesManager;

void storeSalesManager(SalesManager*,int);
void displaySalesManager(SalesManager*, int);

void main()
{
	int size;
	printf("Enter the size : ");
	scanf("%d",&size);
	SalesManager sm[size];
	storeSalesManager(sm,size);
	displaySalesManager(sm,size);
}

void storeSalesManager(SalesManager* sm,int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("Enter %d Sales Manager\n", i+1);
		printf("Enter the id : ");
		scanf("%d",&sm[i].id);
		
		printf("Enter name : ");
		fflush(stdin);
		gets(sm[i].name);
		
		printf("Enter salary : ");
		scanf("%lf",&sm[i].salary);
		
		printf("Enter incentive : ");
		scanf("%lf",&sm[i].incentive);
		
		printf("Enter target : ");
		scanf("%lf",&sm[i].target);
	}
}

void displaySalesManager(SalesManager* sm, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("Details of %d Sales Manager\n", i+1);
		printf("Id = %d\n",sm[i].id);
		printf("Name = %s\n",sm[i].name);
		printf("Salary = %.2lf\n",sm[i].salary);
		printf("Incentive = %.2lf\n",sm[i].incentive);
		printf("Target = %.2lf\n",sm[i].target);
	}
}
