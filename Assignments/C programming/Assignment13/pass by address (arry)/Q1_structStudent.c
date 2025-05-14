#include<stdio.h>

typedef struct Student
{
	int rollNo;
	char name[30];
	double marks;
}Student;

void storeStudent(Student*,int);
void displayStudent(Student*, int);

void main()
{
	int size;
	printf("Enter the size : ");
	scanf("%d",&size);
	Student stud[size];
	storeStudent(stud,size);
	displayStudent(stud,size);
}

void storeStudent(Student* stud,int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("Enter %d student\n", i+1);
		printf("Enter the roll number : ");
		scanf("%d",&stud[i].rollNo);
		
		printf("Enter name : ");
		fflush(stdin);
		gets(stud[i].name);
		
		printf("Enter marks : ");
		scanf("%lf",&stud[i].marks);
	}
}

void displayStudent(Student* stud, int size)
{
	
	int i;
	for(i=0; i<size; i++)
	{
		printf("Details of %d student\n", i+1);
		printf("Roll Number = %d\n",stud[i].rollNo);
		printf("Name = %s\n",stud[i].name);
		printf("Marks = %.2lf\n",stud[i].marks);
	}
	

}
