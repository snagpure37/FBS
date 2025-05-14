#include<stdio.h>

struct Distance
{
	int feet;
	int inch;
};

void main()
{
	struct Distance dist;
	printf("Enter details of Distance : \n");
	printf("Enter Feet : ");
	scanf("%d",&dist.feet);
	
	printf("Enter Inch : ");
	scanf("%d",&dist.inch);
	
	printf("\nDistance details : \n");
	printf("Entered distance = %d feet %d inch",dist.feet,dist.inch);
	
//	store(&stud);
//	display(stud);
}

