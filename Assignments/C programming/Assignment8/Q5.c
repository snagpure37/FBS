#include<stdio.h>
void main()
{
	int arr[6];
	printf("Enter 6 elements of array : ");
	int i;
	for(i=0; i<6; i++)
		scanf("%d",&arr[i]);
		
	alternate_Nums(arr,6);
}

void alternate_Nums(int* ptr, int size)
{
	int i;
	for(i=1; i<size; i++)
	{
		printf("%d at index %d\n",ptr[i],i);
		i++;
	}
}
