#include<stdio.h>
void main()
{
	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter %d elements for array : ",size);
	int i;
	for(i=0; i<size; i++)
		scanf("%d",&arr[i]);
	
	int res = sum(arr,size);
	printf("Sum of all the elements in array = %d",res);
	
}

int sum(int* ptr, int size)
{
	int i, res = 0;
	for(i=0; i<size; i++)
		res = res + ptr[i];
	return res;
}
