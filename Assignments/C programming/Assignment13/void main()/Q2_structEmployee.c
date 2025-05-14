#include<stdio.h>

struct Employee
{
	int id;
	char name[30];
	double salary;
};

void main()
{
	struct Employee emp;
	printf("Enter details of employee : \n");
	printf("Enter Id : ");
	scanf("%d",&emp.id);
	
	printf("Enter name : ");
	scanf("%s",&emp.name);
	
	printf("Enter salary : ");
	scanf("%lf",&emp.salary);
	
	printf("\nEmployee details : \n");
	printf("Employee Id = %d\nName = %s\nSalary = %.2lf",emp.id,emp.name,emp.salary);
	
//	store(&stud);
//	display(stud);
}

