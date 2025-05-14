#include<stdio.h>

typedef struct SalesManager
{
	int id;
	char name[30];
	double salary;
	int target;
	double incentive;
}SalesManager;

SalesManager storeSalesManager(SalesManager);
void displaySalesManager(SalesManager);

void main()
{
	SalesManager sm;
	sm = storeSalesManager(sm);
	displaySalesManager(sm);
}

SalesManager storeSalesManager(SalesManager sm)
{
	printf("Enter Id : ");
	scanf("%d",&sm.id);
	
	printf("Enter name : ");
	scanf("%s",sm.name);
	
	printf("Enter salary : ");
	scanf("%lf",&sm.salary);
	
	printf("Enter target : ");
	scanf("%d",&sm.target);
	
	printf("Enter incentive : ");
	scanf("%lf",&sm.incentive);
	
	return sm;
}

void displaySalesManager(SalesManager sm)
{
	printf("Sales Manager Details\n");
	printf("Id = %d\n",sm.id);
	printf("name  = %s\n",sm.name);
	printf("salary = %.2lf\n",sm.salary);
	printf("target = %d\n",sm.target);
	printf("incentive = %.2lf\n",sm.incentive);
}
