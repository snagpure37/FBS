#include<stdio.h>

struct Admin
{
	int id;
	char name[30];
	double salary;
	double allowance;
};

void main()
{
	struct Admin admn;
	printf("Enter details of Admin : \n");
	printf("Enter Id : ");
	scanf("%d",&admn.id);
	
	printf("Enter name : ");
	scanf("%s",&admn.name);
	
	printf("Enter salary : ");
	scanf("%lf",&admn.salary);
	
	printf("Enter Allowance : ");
	scanf("%lf",&admn.allowance);
	
	printf("\nAdmin details : \n");
	printf("Id = %d\nName = %s\nSalary = %.2lf\nAllowance = %.2lf",admn.id,admn.name,admn.salary,admn.allowance);
	
//	store(&stud);
//	display(stud);
}

