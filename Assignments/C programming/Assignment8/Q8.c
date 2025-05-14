#include<stdio.h>
void main()
{
	int arr[5];
	read_arr(arr,5);
	int brr[6];
	read_arr(brr,6);
	
	merge_array(arr,5,brr,6);
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

void merge_array(int* arr, int arrSize, int* brr, int brrSize)
{
	int crrSize = arrSize+brrSize;
	int crr[crrSize];

	int i,j;
	for(i=0; i<arrSize; i++)
	{
		crr[i] = arr[i];
//		printf("%d, ",crr[i]);
	}
		
	for(i=0; i<brrSize; i++)
	{
		crr[i+arrSize] = brr[i];
//		printf("%d, ",crr[i+arrSize]);
	}
	
	printf("Third array = [");
	
	for(i=0;i<crrSize; i++)
	printf("%d, ",crr[i]);	
	
	printf("\b\b]");

}
