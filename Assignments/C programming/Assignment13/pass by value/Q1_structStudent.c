#include<stdio.h>

typedef struct Student
{
	int rollNo;
	char name[30];
	double marks;
}Student;

Student storeStudent(Student);
void displayStudent(Student);

void main()
{
	Student stud;
	stud = storeStudent(stud);
	displayStudent(stud);
}

Student storeStudent(Student stud)
{
	printf("Enter the roll number : ");
	scanf("%d",&stud.rollNo);
	
	printf("Enter name : ");
	scanf("%s",stud.name);
	
	printf("Enter marks : ");
	scanf("%lf",&stud.marks);
	
	return stud;
}

void displayStudent(Student stud)
{
	printf("Student Details\n");
	printf("Roll Number = %d\n",stud.rollNo);
	printf("Name = %s\n",stud.name);
	printf("Marks = %.2lf\n",stud.marks);
}
