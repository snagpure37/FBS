#include<stdio.h>
void main()
{
	int num, rem;
	int sum = 0, fact;
	
	printf("Enter a number : ");
	scanf("%d", &num);
	int temp = num;
	
	while(num > 0)
	{
		fact = 1;
		rem = num%10;		//remainder
		while(rem>0)
		{
			fact = fact * rem;
			rem--;
		}
		sum = sum + fact;
		num = num/10;		//quotient
	}
	if(sum ==  temp)
		printf("%d is strong number", temp);
	else
		printf("%d is not strong number", temp);
}
