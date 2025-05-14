#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number for the ending : ");
	scanf("%d",&num);
	armstrong_nums(&num);
}

void armstrong_nums(int* num)
{
	int i;
	for(i=1; i<=*num; i++)
	{
		int temp = i,rem,sum=0;
		int count = 0;
		while(temp>0)
		{
			count++;
			temp/=10;
		}
		temp = i;
		while(temp>0)
		{
			rem = temp%10;
			int res=1;
			int j;
			for(j=1; j<=count; j++)
				res = res*rem;
			sum = sum+ res;
			temp/=10;
		}
		if(sum == i)
			printf("%d ",i);
	}
}
