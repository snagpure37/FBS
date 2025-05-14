#include<stdio.h>

struct HR
{
	int id;
	char name[30];
	double salary;
	double commission;
};

void main()
{
	struct HR hr;
	printf("Enter details of HR : \n");
	printf("Enter Id : ");
	scanf("%d",&hr.id);
	
	printf("Enter name : ");
	scanf("%s",&hr.name);
	
	printf("Enter salary : ");
	scanf("%lf",&hr.salary);
	
	printf("Enter Commission : ");
	scanf("%lf",&hr.commission);
	
	printf("\nHR details : \n");
	printf("Id = %d\nName = %s\nSalary = %.2lf\nCommission = %.2lf",hr.id,hr.name,hr.salary,hr.commission);
	
}

