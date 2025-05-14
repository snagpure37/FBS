#include<stdio.h>

typedef struct Student
{
	int rollNumber;
	char name[30];
	double marks;
}Student;

void storeStudent(Student*);
void displayStudent(Student*);

void main()
{
	Student stud;
	storeStudent(&stud);
	displayStudent(&stud);
}

void storeStudent(Student* stud)
{
	printf("Enter Student\n");
	printf("Enter roll number : ");
	scanf("%d",&stud->rollNumber);
	
	printf("Enter name : ");
	fflush(stdin);
	gets(stud->name);
	
	printf("Enter marks : ");
	scanf("%lf",&stud->marks);
}

void displayStudent(Student* stud)
{
	printf("Details of Student\n");
	printf("Roll number = %d\n",stud->rollNumber);
	printf("Name = %s\n",stud->name);
	printf("Marks = %.2lf\n",stud->marks);
	
}
