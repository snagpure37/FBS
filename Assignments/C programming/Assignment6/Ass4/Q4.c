#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	strong_nums(&num);
}

void strong_nums(int* num)
{
	int i, sum, fact;
	for(i=1; i<=*num; i++)
	{
		sum=0;
		int temp = i;
		while(temp>0)
		{
			int rem = temp%10;
			fact=1;
			while(rem>0)
			{	
				fact=fact*rem;
				rem--;
			}
			sum = sum+fact;
			temp/=10;
		}
		if(sum==i)
			printf("%d ",i);
	}
}
