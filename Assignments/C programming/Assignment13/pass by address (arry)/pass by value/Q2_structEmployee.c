#include<stdio.h>

typedef struct Employee
{
	int id;
	char name[30];
	double salary;
}Employee;

Employee storeEmployee(Employee);
void displayEmployee(Employee);

void main()
{
	Employee emp;
	emp = storeEmployee(emp);
	displayEmployee(emp);
}

Employee storeEmployee(Employee emp)
{
	printf("Enter the Id : ");
	scanf("%d",&emp.id);
	
	printf("Enter the name : ");
	scanf("%s",emp.name);
	
	printf("Enter the salary : ");
	scanf("%lf",&emp.salary);
	
	return emp;
}

void displayEmployee(Employee emp)
{
	printf("Employee Details\n");
	printf("Id = %d\n",emp.id);
	printf("Name = %s\n",emp.name);
	printf("Salary = %.2lf\n",emp.salary);
}
