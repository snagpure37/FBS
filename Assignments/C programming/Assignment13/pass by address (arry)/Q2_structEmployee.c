#include<stdio.h>

typedef struct Employee
{
	int id;
	char name[30];
	double salary;
}Employee;

void storeEmployee(Employee*,int);
void displayEmployee(Employee*, int);

void main()
{
	int size;
	printf("Enter the size : ");
	scanf("%d",&size);
	Employee emp[size];
	storeEmployee(emp,size);
	displayEmployee(emp,size);
}

void storeEmployee(Employee* emp,int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("Enter %d employee\n", i+1);
		printf("Enter the id : ");
		scanf("%d",&emp[i].id);
		
		printf("Enter name : ");
		fflush(stdin);
		gets(emp[i].name);
		
		printf("Enter salary : ");
		scanf("%lf",&emp[i].salary);
	}
}

void displayEmployee(Employee* emp, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("Details of %d employee\n", i+1);
		printf("Id = %d\n",emp[i].id);
		printf("Name = %s\n",emp[i].name);
		printf("Salary = %.2lf\n",emp[i].salary);
	}
}
