#include<stdio.h>

typedef struct HR
{
	int id;
	char name[30];
	double salary;
	double commission;
}HR;

void storeHR(HR*,int);
void displayHR(HR*, int);

void main()
{
	int size;
	printf("Enter the size : ");
	scanf("%d",&size);
	HR hr[size];
	storeHR(hr,size);
	displayHR(hr,size);
}

void storeHR(HR* hr,int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("Enter %d HR\n", i+1);
		printf("Enter the id : ");
		scanf("%d",&hr[i].id);
		
		printf("Enter name : ");
		fflush(stdin);
		gets(hr[i].name);
		
		printf("Enter salary : ");
		scanf("%lf",&hr[i].salary);
		
		printf("Enter commission : ");
		scanf("%lf",&hr[i].commission);
	}
}

void displayHR(HR* hr, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("Details of %d HR\n", i+1);
		printf("Id = %d\n",hr[i].id);
		printf("Name = %s\n",hr[i].name);
		printf("Salary = %.2lf\n",hr[i].salary);
		printf("Commission = %.2lf\n",hr[i].commission);
	}
}
