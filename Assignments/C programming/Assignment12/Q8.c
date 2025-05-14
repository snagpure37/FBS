#include<stdio.h>
#include<stdlib.h>

void storeInput(int* ,int );
void mergeArrays(int* , int , int* , int );

void main()
{
	int size1;
	printf("Enter a size of an array : ");
	scanf("%d",&size1);
	
	int* arr = (int*)malloc(sizeof(int)*size1);
	
	storeInput(arr,size1);
	
	int size2;
	printf("Enter a size of an array : ");
	scanf("%d",&size2);
	
	int* brr = (int*)malloc(sizeof(int)*size2);
	
	storeInput(brr,size2);
	
	mergeArrays(arr, size1,brr, size2);
	free(arr);
	free(brr);
}

void mergeArrays(int* arr, int size1, int* brr, int size2)
{
	int mergeSize = size1 + size2;
	int mArr[mergeSize];
	
	int i;
	for(i=0; i<size1; i++)
	{
		mArr[i] = arr[i];
	}
	for(i=0;i<size2; i++)
	{
		mArr[i+size1] = brr[i];
	}
	printf("Merged Array = [");
	for(i=0; i<mergeSize; i++)
		printf("%d ",mArr[i]);
	printf("\b]");
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
