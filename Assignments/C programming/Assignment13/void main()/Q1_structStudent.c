#include<stdio.h>

struct Student
{
	int id;
	char name[30];
	double marks;
};

void main()
{
	struct Student stud;
	printf("Enter details of student : \n");
	printf("Enter roll number : ");
	scanf("%d",&stud.id);
	
	printf("Enter name : ");
	scanf("%s",&stud.name);
	
	printf("Enter marks : ");
	scanf("%lf",&stud.marks);
	
	printf("\nStudent details : \n");
	printf("Roll number = %d\nName = %s\nMarks = %.2lf",stud.id,stud.name,stud.marks);
	
//	store(&stud);
//	display(stud);
}

