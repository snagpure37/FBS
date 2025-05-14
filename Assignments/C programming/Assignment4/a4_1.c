#include<stdio.h>
void main()
{
	int start, end, sum, count, mul;
	int temp, rem;
	int tempCount;
	printf("Enter a number for starting : ");
	scanf("%d",&start);
	
	printf("Enter a number for end : ");
	scanf("%d", &end);
	
	printf("armstrong numbers from %d to %d : \n",start, end);
	int i;
	for(i=start; i<=end; i++)
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
	printf("\n");	
}
