#include<stdio.h>
#include<stdlib.h>

void storeInput(int* ,int );
void sumOfTwoArray(int* , int , int* );

void main()
{
	int size;
	printf("Enter a size of an array : ");
	scanf("%d",&size);
	int* arr = (int*)malloc(sizeof(int)*size);
	
	storeInput(arr,size);
	
	int* brr = (int*) malloc(sizeof(int)*size);
	
	storeInput(brr,size);
	
	sumOfTwoArray(arr,size,brr);
	free(arr);
	free(brr);
}

void sumOfTwoArray(int* arr, int size, int* brr)
{
	int sum[size];
	int i;
	for(i=0; i<size; i++)
	{
		sum[i] = arr[i] + brr[i];
	}
	printf("elements in sum array : ");
	for(i=0; i<size; i++)
	{
		printf("%d ",sum[i]);
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
