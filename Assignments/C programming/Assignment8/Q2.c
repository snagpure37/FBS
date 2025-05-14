#include<stdio.h>
void main()
{
	int size;
	printf("Enter the size of an array : ");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter %d elements in the array : ",size);
	int i;
	for(i=0; i<size; i++)
		scanf("%d",&arr[i]);
	
	int num;
	printf("Enter the number you want to search : ");
	scanf("%d",&num);
		
	int res = search_Entered_num(size,arr,num);
	if(res == -1)
		printf("Element not found");
	else 
		printf("%d found at index %d\n",num,res);
}


int search_Entered_num(int size,int* ptr,int num)
{
	int i;
	for(i=0; i<=size; i++)
	{
		if(ptr[i] == num)
			return i;
	}
	return -1;
}














