#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number for the ending : ");
	scanf("%d",&num);
	prime_nums(&num);
}

void prime_nums(int* num)
{
	int i,j;
	for(i=1; i<=*num; i++)
	{
		int flag=0;
		for(j=2; j<=i/2; j++)
		{
			if(i%j==0)
			{
				flag = 1;
				break;
			}
		}
		
		if(flag == 0)
			printf("%d ",i);
	}
}
