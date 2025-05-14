#include<stdio.h>
void main()
{
	float basicSal;
	printf("Enter basic salary : ");
	scanf("%f",&basicSal);
	calculate_sal(&basicSal);
}

void calculate_sal(float* sal)
{
	float da,ta,hra;
	if(*sal <= 5000)
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
	printf("Total Salary = %.2f",totalSal);
}
