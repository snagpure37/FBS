#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	isArmstrong(&num);
}

void isArmstrong(int* no)
{
	int temp = *no,count =0;
	while(temp > 0)
	{
		count++;
		temp/=10;
	}
//	printf("Count = %d",count);
	temp = *no;
	int sum = 0;
	int rem;
	while(temp > 0)
	{
		rem = temp % 10;
		int res = 1;
		int i;
		for(i = 1; i<= count; i++)
			res = res * rem;
		sum = sum + res;
		temp /= 10;	
	}
	if(*no == sum)
	{
		printf("%d is armstrong number",*no);
	}
	else
	{
		printf("%d is not armstrong number ",*no);
	}
}
