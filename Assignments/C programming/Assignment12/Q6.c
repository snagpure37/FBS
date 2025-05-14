#include<stdio.h>
#include<stdlib.h>

void storeInput(int*,int);
void printPrimeNumbers(int*, int);

void main()
{
	int size;
	printf("Enter a size of an array : ");
	scanf("%d",&size);
	
	int* arr = (int*)malloc(sizeof(int)*size);
	
	storeInput(arr,size);
	
	printPrimeNumbers(arr,size);
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

void printPrimeNumbers(int* arr, int size)
{
	printf("Prime Numbers : ");
	int i,j;
	int flag;
	for(i=0; i<size; i++)
	{
		flag = 0;
		for(j=2; j<arr[i]; j++)
		{
			if(arr[i]%j==0)
			{
				flag = 1;
				break;
			}

		}
		
		if(flag == 0)
		{
			printf("%d ",arr[i]);
		}
	}
}
