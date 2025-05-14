#include<stdio.h>
#include<stdlib.h>

void storeInput(int*,int);
void sumOfAllElements(int*,int);

void main()
{
	int size;
	printf("Enter a size of an array : ");
	scanf("%d",&size);
	
	int* arr = (int*)malloc(sizeof(int)*size);
	
	storeInput(arr,size);
	
	sumOfAllElements(arr,size);
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

void sumOfAllElements(int* arr,int size)
{
	int sum = 0;
	int i;
	for(i=0; i<size; i++)
	{
		sum = sum + arr[i];
	}
	printf("Sum of all element in an array = %d\n", sum);
}
