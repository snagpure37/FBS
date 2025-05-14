#include<stdio.h>

typedef struct HR
{
	int id;
	char name[30];
	double salary;
	double commission;
}HR;

HR storeHR(HR);
void displayHR(HR);

void main()
{
	HR hr;
	hr = storeHR(hr);
	displayHR(hr);
}

HR storeHR(HR hr)
{
	printf("Enter the Id : ");
	scanf("%d",&hr.id);
	
	printf("Enter the name : ");
	scanf("%s",hr.name);
	
	printf("Enter the salary : ");
	scanf("%lf",&hr.salary);
	
	printf("Enter the commission : ");
	scanf("%lf",&hr.commission);
	
	return hr;
}

void displayHR(HR hr)
{
	printf("HR Details\n");
	printf("Id = %d\n",hr.id);
	printf("Name = %s\n",hr.name);
	printf("Salary = %.2lf\n",hr.salary);
	printf("Commission = %.2lf\n",hr.commission);
}
