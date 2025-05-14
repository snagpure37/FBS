#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	fibonacci_series(&num);
}

void fibonacci_series(int* num)
{
	int fib1 = 0, fib2 = 1, fib;
	
	int i,j;
	for(i = 0;i<*num;i++)
	{
		if(i<=1)
		{
			fib = i;		//prints 1st value as 0 and next as 1 then this if statement returns false then next else block executed
		}
		else{
			fib = fib1+fib2;
			fib1= fib2;
			fib2 = fib;
		}
		printf("%d ",fib);
	}
	printf("\n");
	
}
