#include<stdio.h>

typedef struct Employee
{
	int id;
	char name[30];
	double salary;
}Employee;

void storeEmployee(Employee*);
void displayEmployee(Employee*);

void main()
{
	Employee emp;
	storeEmployee(&emp);
	displayEmployee(&emp);
}

void storeEmployee(Employee* emp)
{
	printf("Enter employee\n");
	printf("Enter the id : ");
	scanf("%d",&emp->id);
	
	printf("Enter name : ");
	fflush(stdin);
	gets(emp->name);
	
	printf("Enter salary : ");
	scanf("%lf",&emp->salary);
}

void displayEmployee(Employee* emp)
{
	printf("Details of employee\n");
	printf("Id = %d\n",emp->id);
	printf("Name = %s\n",emp->name);
	printf("Salary = %.2lf\n",emp->salary);
}
