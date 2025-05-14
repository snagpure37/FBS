#include<stdio.h>

struct SalesManager
{
	int id;
	char name[30];
	double salary;
	double incentive;
	double target;
};

void main()
{
	struct SalesManager salesMngr;
	printf("Enter details of SalesManager : \n");
	printf("Enter Id : ");
	scanf("%d",&salesMngr.id);
	
	printf("Enter name : ");
	scanf("%s",&salesMngr.name);
	
	printf("Enter salary : ");
	scanf("%lf",&salesMngr.salary);
	
	printf("Enter Incentive : ");
	scanf("%lf",&salesMngr.incentive);
	
	printf("Enter the target : ");
	scanf("%lf",&salesMngr.target);
	
	printf("\nSales Manager details : \n");
	printf("Id = %d\nName = %s\nSalary = %.2lf\nIncentive = %.2lf\nTarget = %.2lf",salesMngr.id,salesMngr.name,salesMngr.salary,salesMngr.incentive,salesMngr.target);
	
//	store(&stud);
//	display(stud);
}

