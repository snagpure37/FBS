#include<stdio.h>

typedef struct HR
{
	int id;
	char name[30];
	double salary;
	double commission;
}HR;

void storeHR(HR*);
void displayHR(HR*);

void main()
{
	HR hr;
	storeHR(&hr);
	displayHR(&hr);
}

void storeHR(HR* hr)
{
	printf("Enter HR\n");
	printf("Enter the id : ");
	scanf("%d",&hr->id);
	
	printf("Enter name : ");
	fflush(stdin);
	gets(hr->name);
	
	printf("Enter salary : ");
	scanf("%lf",&hr->salary);
	
	printf("Enter commission : ");
	scanf("%lf",&hr->commission);
}

void displayHR(HR* hr)
{
	printf("Details of HR\n");
	printf("Id = %d\n",hr->id);
	printf("Name = %s\n",hr->name);
	printf("Salary = %.2lf\n",hr->salary);
	printf("Commission = %.2lf\n",hr->commission);
}
