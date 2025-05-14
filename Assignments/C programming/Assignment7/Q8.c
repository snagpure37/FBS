#include<stdio.h>
void main()
{
	int arrSize;
	printf("Enter array size : ");
	scanf("%d",&arrSize);
	int arr[arrSize];
	read_arr(arr,arrSize);
	
	int brrSize;
	printf("Enter array size : ");
	scanf("%d",&brrSize);
	int brr[brrSize];
	read_arr(brr,brrSize);
	
	int crrSize = arrSize+brrSize;
	int crr[crrSize];

	int i,j;
	for(i=0; i<arrSize; i++)
	{
		crr[i] = arr[i];
	}
		
	for(i=0; i<brrSize; i++)
	{
		crr[i+arrSize] = brr[i];
	}
	
	printf("Third array = [");
	
	for(i=0;i<crrSize; i++)
	printf("%d ",crr[i]);	
	
	printf("\b]");
	
}

void read_arr(int* arr, int size)
{
	printf("Enter %d element in array : ", size);
	int i;
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
}

