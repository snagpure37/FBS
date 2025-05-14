#include<stdio.h>
#include<stdlib.h>

void storeInput(int* ,int );
void reverseArray(int* , int );

void main()
{
	int size;
	printf("Enter a size of an array : ");
	scanf("%d",&size);
	int* arr = (int*)malloc(sizeof(int)*size);
	
	storeInput(arr,size);
	
	reverseArray(arr,size);
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

void reverseArray(int* arr, int size)
{
	printf("Reversed array : ");
	int i,end=size-1;
	for(i=0; i<end; i++)
	{
			int temp = arr[i];
			arr[i]= arr[end];
			arr[end] = temp;
			end--;	
	}
	
	for(i=0; i<size;i++)
		printf("%d ",arr[i]);
	
}
