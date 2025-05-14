#include<stdio.h>
void main()
{
	int size;
	printf("Enter the size of an array : ");
	scanf("%d",&size);
	int arr[size];
	read_arr(arr,size);
	
	reverse_array(arr,size);
	
}
void read_arr(int* arr, int size)
{
	printf("Enter %d elements in array : ",size);
	int i;
	for(i=0; i<size; i++)
		scanf("%d",&arr[i]);
		
	for(i=0; i<size; i++)
		printf("%d ",arr[i]);
		printf("\n");
}

void reverse_array(int* arr, int size)
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
