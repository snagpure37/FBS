#include<stdio.h>
void main()
{
	int num, sum=0;
	int i;
	printf("Enter number : ");
	scanf("%d", &num);
	
	for(i = 1; i< num; i++)
		if(num%i == 0)
			sum = sum+i;
			
	if(sum == num)
		printf("perfect number");
	else
		printf("not perfect number");
}
