#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number for the ending : ");
	scanf("%d",&num);
	perfect_nums(&num);
}

void perfect_nums(int* num)
{
	int i,j,sum;
	for(i=1; i<=*num; i++)
	{
		sum=0;
		for(j=1;j<i; j++)
		{
			if(i%j==0)
				sum=sum+j;
		}
		if(sum == i)
			printf("%d ",i);
	}
}
