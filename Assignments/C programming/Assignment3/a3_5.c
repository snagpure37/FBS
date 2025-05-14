#include<stdio.h>
void main()
{
	int num, sum = 0,count =0;
	int rem;
	printf("Enter a number : ");
	scanf("%d", &num);
	
	int temp = num;
	while(num > 0)			//loop that returns count of digits
	{
		count++;
		num = num/10;
	}

	num = temp;			//reassigns original num to temp as temp becomes 0 while counting digits
	while(temp > 0)
	{
		rem = temp %10;		//gets last digit i.e. remainder
		int res = 1;
		int i;
		for(i = 1; i <= count; i++)
			res = res*rem;
		sum = sum + res;		
		temp = temp/10;
	}
	if(sum == num)
		printf("%d is Armstrong number", num);
	else
		printf("%d is not armstrong number", num);
}
