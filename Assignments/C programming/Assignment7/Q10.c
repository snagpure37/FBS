#include<stdio.h>
void main()
{
	int size;
	printf("Enter the size of an array :");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter %d elemnts in an array : ",size);
	int i;
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int j;
	for(i=0;i<size;i++)
	{
		for(j=0; j<size-i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("Sorted array : ");
	for(i=0;i<size;i++)
	{
		printf("%d ", arr[i]);
	}
}

