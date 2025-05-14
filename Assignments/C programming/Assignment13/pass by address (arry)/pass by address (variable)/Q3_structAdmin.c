#include<stdio.h>

typedef struct Admin
{
	int id;
	char name[30];
	double salary;
	double allowance;
}Admin;

void storeAdmin(Admin*);
void displayAdmin(Admin*);

void main()
{
	Admin admin;
	storeAdmin(&admin);
	displayAdmin(&admin);
}

void storeAdmin(Admin* admin)
{
	printf("Enter admin\n");
	printf("Enter the id : ");
	scanf("%d",&admin->id);
	
	printf("Enter name : ");
	fflush(stdin);
	gets(admin->name);
	
	printf("Enter salary : ");
	scanf("%lf",&admin->salary);
	
	printf("Enter allowance : ");
	scanf("%lf",&admin->allowance);
}

void displayAdmin(Admin* admin)
{
	printf("Details of admin\n");
	printf("Id = %d\n",admin->id);
	printf("Name = %s\n",admin->name);
	printf("Salary = %.2lf\n",admin->salary);
	printf("Allowance = %.2lf\n",admin->allowance);
}
