#include<stdio.h>
#include<stdlib.h>

void storeInput(int*,int);
void searchNumber(int*, int);

void main()
{
	int size;
	printf("Enter a size of an array : ");
	scanf("%d",&size);
	int* arr = (int*)malloc(sizeof(int)*size);
	
	storeInput(arr,size);
	
	searchNumber(arr,size);
	free(arr);
}

void searchNumber(int* arr, int size)
{
	int elem;
	printf("Enter an element you want to search : ");
	scanf("%d",&elem);
	
	int i;
	for(i=0; i<size; i++)
	{
		if(elem == arr[i])
		{
			printf("Element found at index %d\nElement found at position %d\n",i,i+1);
			return;
		}
	}
	printf("Element not found...\n");
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
