#include<stdio.h>
void main()
{
	int arr[5];
	read_arr(arr,5);
//	write_arr(arr,5);
	int brr[5];
	read_arr(brr,5);
//	write_arr(brr,5);
	
	addition_of_two_array(arr,brr,5);
	
}

void addition_of_two_array(int* arr, int* brr, int size)
{
	int i,sum[size];
	for(i=0;i<size;i++)
		sum[i] = arr[i] + brr[i]; 
	
	printf("sum of two arrays : ");
	for(i=0;i<size;i++)
		printf("%d ",sum[i]);
}

void read_arr(int* ptr, int size)
{
	printf("Enter %d elements in array : ");
	int i;
	for(i=0; i<size; i++)
		scanf("%d",&ptr[i]);
}

void write_arr(int* ptr, int size)
{
	int i;
	for(i=0;i<5;i++)
		printf("%d ",ptr[i]);
	printf("\n");
}
