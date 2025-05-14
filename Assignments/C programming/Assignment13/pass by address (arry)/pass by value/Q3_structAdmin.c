#include<stdio.h>

typedef struct Admin
{
	int id;
	char name[30];
	double salary;
	double allowance;
}Admin;

Admin storeAdmin(Admin);
void displayAdmin(Admin);

void main()
{
	Admin admn;
	admn = storeAdmin(admn);
	displayAdmin(admn);
}

Admin storeAdmin(Admin admn)
{
	printf("Enter the Id : ");
	scanf("%d",&admn.id);
	
	printf("Enter the name : ");
	scanf("%s",admn.name);
	
	printf("Enter the salary : ");
	scanf("%lf",&admn.salary);
	
	printf("Enter the allowance : ");
	scanf("%lf",&admn.allowance);
	
	return admn;
}

void displayAdmin(Admin admn)
{
	printf("Admin Details\n");
	printf("Id = %d\n",admn.id);
	printf("Name = %s\n",admn.name);
	printf("Salary = %.2lf\n",admn.salary);
	printf("Allowance = %.2lf\n",admn.allowance);
}
