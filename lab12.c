#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

typedef struct {
	int year;
	char department[11];
	int no;
}std_num_format;

typedef union{
	std_num_format number;
	int social_number;
}student_ident;

typedef struct{
	student_ident std_identifer;
	int IdType;
	char name[10];
	char surname[10];
	int midterm1;
	int midterm2;
	int final;
	double grade;
}Student;

void create(Student *student);
void calc_grade(Student *student);
void print(Student student);

int main()
{
	srand(time(NULL));
	int size,i;
	Student *std = (Student*)calloc(size,sizeof(Student)); ;
	printf("please enter how many students which you create:");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		create(&std[i]);
		calc_grade(&std[i]);	
	}
	printf("\n");
	for(i=0;i<size;i++)
	{
		printf("std %d:\n",i+1);
		print(std[i]);
		printf("\n");
	}
	return 0;
}

void create(Student *student)
{	
	int flag = rand()%2+1;
	printf("enter name of student:\n");
	scanf("%s",student->name);
	printf("enter surname of student:\n");
	scanf("%s",student->surname);
	student->midterm1=  rand() % 100+1;
	student->midterm2 = rand() % 100+1;
	student->final = rand() % 100+1;
	if(flag==1)
	{
		student->std_identifer.social_number=rand();
	}
	else if(flag==2)
	{
		student->std_identifer.number.year=2018;
		strcpy(student->std_identifer.number.department,"CS");
		student->std_identifer.number.no = rand()%100;	
	}

	if(flag==1)
	{
		student->IdType = 1;
	}
	else if(flag==2)
	{
		student->IdType = 0;
	}	
}

void print(Student student)
{
	printf("Name: %s\n",student.name);
	printf("Surname: %s\n",student.surname);
	printf("Mid1: %d\n",student.midterm1);
	printf("Mid2: %d\n",student.midterm2);
	printf("Final: %d\n",student.final);
	printf("Avg: %lf\n",student.grade);	
	printf("Id Type: %d\n",student.IdType);
	if(student.IdType==1)
	{
		printf("Social Number: %d\n",student.std_identifer.social_number);
	}
	else if(student.IdType==0)
	{	
		printf("Identity: %d-%s-%d\n",student.std_identifer.number.year,student.std_identifer.number.department,student.std_identifer.number.no);
	}
}

void calc_grade(Student *student)
{
	student->grade = (student->midterm1/4)+(student->midterm2/4)+(student->final/2);
}
