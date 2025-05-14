#include<stdio.h>

typedef struct SalesManager
{
	int id;
	char name[30];
	double salary;
	double incentive;
	int target;
}SalesManager;

void storeSalesManager(SalesManager*);
void displaySalesManager(SalesManager*);

void main()
{
	SalesManager sm;
	storeSalesManager(&sm);
	displaySalesManager(&sm);
}

void storeSalesManager(SalesManager* sm)
{
	printf("Enter Sales Manager\n");
	printf("Enter the id : ");
	scanf("%d",&sm->id);
	
	printf("Enter name : ");
	fflush(stdin);
	gets(sm->name);
	
	printf("Enter salary : ");
	scanf("%lf",&sm->salary);
	
	printf("Enter incentive : ");
	scanf("%lf",&sm->incentive);
	
	printf("Enter target : ");
	scanf("%d",&sm->target);
}

void displaySalesManager(SalesManager* sm)
{
	printf("Details of Sales Manager\n");
	printf("Id = %d\n",sm->id);
	printf("Name = %s\n",sm->name);
	printf("Salary = %.2lf\n",sm->salary);
	printf("Incentive = %.2lf\n",sm->incentive);
	printf("Target = %d\n",sm->target);
}
