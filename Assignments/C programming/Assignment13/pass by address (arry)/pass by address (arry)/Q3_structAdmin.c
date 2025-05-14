#include<stdio.h>

typedef struct Admin
{
	int id;
	char name[30];
	double salary;
	double allowance;
}Admin;

void storeAdmin(Admin*,int);
void displayAdmin(Admin*, int);

void main()
{
	int size;
	printf("Enter the size : ");
	scanf("%d",&size);
	Admin admin[size];
	storeAdmin(admin,size);
	displayAdmin(admin,size);
}

void storeAdmin(Admin* admin,int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("Enter %d admin\n", i+1);
		printf("Enter the id : ");
		scanf("%d",&admin[i].id);
		
		printf("Enter name : ");
		fflush(stdin);
		gets(admin[i].name);
		
		printf("Enter salary : ");
		scanf("%lf",&admin[i].salary);
		
		printf("Enter allowance : ");
		scanf("%lf",&admin[i].allowance);
	}
}

void displayAdmin(Admin* admin, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("Details of %d admin\n", i+1);
		printf("Id = %d\n",admin[i].id);
		printf("Name = %s\n",admin[i].name);
		printf("Salary = %.2lf\n",admin[i].salary);
		printf("Allowance = %.2lf\n",admin[i].allowance);
	}
}
