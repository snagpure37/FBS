#include<stdio.h>
void main()
{
	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter %d elements in array : ",size);
	int i;
	for(i=0; i<size; i++)
		scanf("%d",&arr[i]);
		
	prime_nums(arr,size);	
}

void prime_nums(int* ptr, int size)
{
	printf("Prime numbers : ");
	int i;
	for(i=0; i<size; i++)
	{
		int flag = 0;
		int j;
		for(j=2; j<ptr[i]; j++)
		{
			if(ptr[i] == 1 || ptr[i] == 0)
				flag = 1;
			if(ptr[i]%j==0)
			{
				flag=1;
				break;
			}				
		}
	
		if(flag == 0)
			printf("%d ",ptr[i]);
		
	}
}
