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
		
	printf("Prime numbers : ");
	for(i=0; i<size; i++)
	{
		int flag = 0;
		int j;
		for(j=2; j<arr[i]; j++)
		{
			if(arr[i] == 1 || arr[i] == 0)
				flag = 1;
			if(arr[i]%j==0)
			{
				flag=1;
				break;
			}				
		}
		if(flag == 0)
			printf("%d ",arr[i]);
	}	
}

