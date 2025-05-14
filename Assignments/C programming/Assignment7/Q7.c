#include<stdio.h>
void main()
{
	int arr[5];
	read_arr(arr,5);
	
	int brr[5];
	read_arr(brr,5);
	
	int i,sum[5];
	for(i=0;i<5;i++)
		sum[i] = arr[i] + brr[i]; 
	
	printf("sum of two arrays : ");
	for(i=0;i<5;i++)
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
