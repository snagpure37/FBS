#include<stdio.h>
void main()
{
	int start,end;
	printf("Enter the starting : ");
	scanf("%d",&start);
	
	printf("Enter the ending : ");
	scanf("%d",&end);
	
	printf("strong numbers from %d to %d : \n",start, end);
	
	int i,temp;
	for(i = start ; i <= end ; i++)
	{
		temp = i;
		int sum=0;
		while(temp>0)
		{
			int rem = temp%10;
			int fact = 1;
			while(rem > 0)
			{
				fact = fact * rem;
				rem--;
			}
			sum = sum + fact;
			temp = temp/10;			
		}
		if(sum == i)
			printf("%d ",i);
	}
}
