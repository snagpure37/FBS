#include<stdio.h>
void main()
{
	int choice;
	printf("Enter your choice : ");
	scanf("%d",&choice);
	if(choice == 1)
	{
		int num;
		printf("Enter a number : ");
		scanf("%d",&num);
		even_odd(&num);
	}
	else
		if(choice == 2)
		{
			float basicSal;
			printf("Enter basic salary : ");
			scanf("%f",&basicSal);
			basic_sal(&basicSal);
		}
}

void basic_sal(float* sal)
{
	float da,ta,hra;
	if(*sal > 5000)
	{
		da = *sal * 0.10;
		ta = *sal * 0.20;
		hra = *sal * 0.25;
	}
	else
	{
		da = *sal * 0.15;
		ta = *sal * 0.25;
		hra = *sal * 0.30;
	}
	float totalSal = *sal + da + ta + hra;
	printf("Total Salary = %.2f ",totalSal);
}

void even_odd(int* num)
{
	if(*num % 2 == 0)
		printf("%d is even number ",*num);
	else 
		printf("%d is odd number ",*num);

}
