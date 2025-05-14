#include<stdio.h>

struct Time
{
	int hour;
	int minute;
	int second;
};

void main()
{
	struct Time time;
	printf("Enter details of Time : \n");
	printf("Enter Hour : ");
	scanf("%d",&time.hour);
	
	printf("Enter minute : ");
	scanf("%d",&time.minute);
	
	printf("Enter second : ");
	scanf("%d",&time.second);
	
	printf("\nTime details : \n");
	printf("Entered time = %d:%d:%d",time.hour,time.minute,time.second);
	
//	store(&stud);
//	display(stud);
}

