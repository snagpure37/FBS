#include<stdio.h>
#include<stdlib.h>

void storeInput(int*,int);
void printAlternateNumbers(int*,int);

void main()
{
	int size;
	printf("Enter a size of an array : ");
	scanf("%d",&size);
	
	int* arr = (int*)malloc(sizeof(int)*size);
	
	storeInput(arr,size);
	
	printAlternateNumbers(arr, size);
	free(arr);
}

void printAlternateNumbers(int* arr,int size)
{
	printf("Alternate Numbers : ");
	int i;
	for(i=1; i<size; i+=2)
	{
		printf("%d ",arr[i]);
	}
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
