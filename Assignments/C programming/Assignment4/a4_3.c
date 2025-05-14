#include<stdio.h>
void main()
{
	int start,num,sum = 0;
	printf("Enter a number for starting : ");
	scanf("%d",&start);
	printf("Enter a number for last number : ");
	scanf("%d",&num);
	
	printf("perfect numbers from %d to %d are \n",start,num);
	
	int i,j;	
	for(i = start; i<=num; i++)
	{
		sum = 0;
		for(j = 1; j<i;j++)
		{
			if(i%j ==0)
				sum = sum + j;
		}
		if(sum == i)
			printf("%d ",i);
	}
}
