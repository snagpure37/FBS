#include<stdio.h>
void main()
{
	int start,end;
	printf("Enter a range : ");
	scanf("%d%d",&start,&end);
	sumOfNum(&start,&end);
}

void sumOfNum(int* s,int* e)
{
	int i, sum = 0;
	for(i=*s;i<=*e;i++)
		sum = sum + i;
	printf("Sum of numbers between %d and %d = %d ",*s,*e,sum);
}

