#include<stdio.h>
#include<stdlib.h>

void storeInput(int* ,int );
void array_sort(int* , int );

void main()
{
	int size;
	printf("Enter the size of an array :");
	scanf("%d",&size);
	
	int* arr = (int*)malloc(sizeof(int)*size);
	
	storeInput(arr,size);
	
	array_sort(arr, size);
	free(arr);
}

void storeInput(int* arr,int size)
{
	printf("Enter %d element in an array : ",size);
	int i;
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
}

void array_sort(int* arr, int size)
{
	int i,j;
	for(i=0;i<size-1;i++)		//reprsents passes	i=0 1 2 3 4f
	{
		for(j=0; j<size-1-i; j++)		//j=0 1 2 3f
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
