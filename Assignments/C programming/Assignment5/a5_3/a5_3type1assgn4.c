#include<stdio.h>
//function declaration
void armstrongNums();
void primeNums();
void perfectNums();
void strongNums();
void fibonacci();

void main()
{
//	function call
	armstrongNums();		//Q1
	
	primeNums();		//Q2
	
	perfectNums();		//Q3
	
	strongNums();		//Q4
	
	fibonacci();		//Q5
	
}

//function definition:
void fibonacci()
{
	int fib1=0, fib2=1, fib, num;
	printf("Enter a num : ");
	scanf("%d",&num);
	
	int i,j;
	for(i=0;i<num;i++)
	{
		if(i<=1)
			fib = i;
		else
		{
			fib = fib1 + fib2;
			fib1=fib2;
			fib2=fib;
		}
		printf("%d ",fib);
	}
	printf("\n\n");	
}

void strongNums()
{
	int start, end;
	int temp, rem;
	printf("Enter a number for starting : ");
	scanf("%d",&start);
	
	printf("Enter a number for range : ");
	scanf("%d", &end);
	
	printf("strong numbers from %d to %d : \n",start, end);
	
	int i;
	for(i=start;i<=end;i++)
	{
		temp = i;
		int sum=0;
		while(temp > 0)
		{
			int rem = temp%10;
			int fact = 1;
			while(rem>0)
			{
				fact = fact*rem;
				rem--;
			}
			sum = sum + fact;
			temp /= 10;
			
		}
		if(sum == i)
			printf("%d ",i);
	}
	printf("\n\n");	
}

void perfectNums()
{
	int start, end, sum;
	
	printf("Enter a number for starting : ");
	scanf("%d",&start);
	
	printf("Enter a number for range : ");
	scanf("%d", &end);
	
	printf("perfect numbers from %d to %d : \n",start, end);
	
	int i,j;
	for(i = start; i<=end ; i++)
	{
		sum = 0;
		
		for(j = 1; j<i;j++)
		{
			if(i%j == 0)
				sum = sum + j;
		}
		if(i == sum)
			printf("%d ",i);
	}
	printf("\n\n");
}

void primeNums()
{
	int start, end, count;
	
	printf("Enter a number for starting : ");
	scanf("%d",&start);
	
	printf("Enter a number for range : ");
	scanf("%d", &end);
	
	printf("prime numbers from %d to %d : \n",start, end);
	
	int i,j;
	for(i= start;i<=end;i++)
	{
		count = 0;
		for(j=1;j<=i;j++)
		{
			if(i%j == 0)
				count++;
		}
		if(count == 2)
			printf("%d ",i);
	}
	printf("\n\n");
}

void armstrongNums()
{		
	int start, num, sum, count, mul;
	int temp, rem;
	int tempCount;
	printf("Enter a number for starting : ");
	scanf("%d",&start);
	
	printf("Enter a number for range : ");
	scanf("%d", &num);
	
	printf("armstrong numbers from %d to %d : \n",start, num);
	int i;
	for(i=start; i<=num; i++)
	{
		sum = 0;
		temp = i;
		count = 0;
		while(temp >0)
		{
			count++;
			temp = temp/10;
		}
		temp = i;
		while(temp>0)
		{
			rem = temp%10;
			tempCount = count;
			mul = 1;
			while(tempCount >0)
			{
				mul = mul * rem;
				tempCount--;
			}
			sum = sum + mul;
			temp = temp/10;
		}
		if(sum == i)
			printf("%d ", i);
	}
	printf("\n\n");		
}
