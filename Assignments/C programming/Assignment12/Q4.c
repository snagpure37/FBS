#include<stdio.h>
#include<stdlib.h>

void storeInput(int* ,int );
void findOddEvenNumbers(int* ,int );

void main()
{
	int size;
	printf("Enter the size of an array : ");
	scanf("%d",&size);
	
	int* arr = (int*)malloc(sizeof(int)*size);
	
	storeInput(arr,size);
	
	findOddEvenNumbers(arr,size);
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

void findOddEvenNumbers(int* arr,int size)
{
	int i;
	printf("\nEven numbers : \n");
	for(i=0; i<size; i++)
	{
		if(arr[i]%2 == 0)
			printf("%d ",arr[i]);
	}
	
	printf("\nOdd numbers : \n");
	for(i=0; i<size; i++)
	{
		if(arr[i]%2 != 0)
			printf("%d ",arr[i]);
	}
}
