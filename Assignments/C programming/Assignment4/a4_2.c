#include<stdio.h>
void main()
{
	int num,flag;
	
	printf("Enter a number for the limit : ");
	scanf("%d",&num);
	
	printf("prime numbers between 1 and %d are \n",num);
	int i,j;
	for(i=2;i<=num;i++)
	{
		flag = 0;
		for(j=2;j<=i/2;j++)
		{
			if(i% j ==0)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
			printf("%d ",i);
	}
	
}
