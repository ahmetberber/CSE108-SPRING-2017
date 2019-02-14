#include <stdio.h>
#include <string.h>

void gradeCalculator();
void function();

union store
{
	int rollNo;
	char name[100];
	int age;
	char adress[200];
};

typedef struct {
	char name[100];
	char surname[100];
	double quiz1;
	double quiz2;
	double midterm;
	double final;
}exams;

int main()
{
	int choice;
	printf("enter part number:");
	scanf("%d",&choice);
	if(choice==1)
	{
		function();
	}
	else if(choice==2)
	{
		gradeCalculator();		
	}
	else
	{
		printf("wrong number!");
	}
	return 0;
}

void gradeCalculator()
{
	double avg_quiz1=0,avg_quiz2=0,avg_midterm=0,avg_final=0,avg_total=0;		
	char choice;	
	int counter=0;	
	do
	{
		double avg;
		exams std;
		printf("\nEnter the student's name:\n");
		scanf("%s %s",std.name,std.surname);
		do
		{
			printf("Enter the student's grade for quiz #1:\n");
			scanf("%lf",&std.quiz1);	
		}while(std.quiz1>=10);
		do
		{
			printf("Enter the student's grade for quiz #2:\n");
			scanf("%lf",&std.quiz2);	
		}while(std.quiz2>=10);
		do
		{
			printf("Enter the student's grade for midterm\n");
			scanf("%lf",&std.midterm);
		}while(std.midterm>=100);
		do
		{
			printf("Enter the student's grade for final\n");
			scanf("%lf",&std.final);
		}while(std.final>=100);
		avg = (std.final/2)+((std.quiz1*10+std.quiz2*10	)/8)+(std.midterm/4);
		avg_total+=avg;
		avg_final+=std.final;
		avg_midterm+=std.midterm;
		avg_quiz1+=std.quiz1;
		avg_quiz2+=std.quiz2;
		counter++;
		printf("%s 's numeric score for the entire course is %.2f\n\n",std.name,avg);
		printf("Would you like to enter another student record? y(yes) or n(no)?\n\n");
		scanf(" %c",&choice);
	}while(choice!='n');
	printf("\nThe class statistics:\n");
	printf("The average score on quiz1 is %.2f\n",avg_quiz1/counter);
	printf("The average score on quiz2 is %.2f\n",avg_quiz2/counter);
	printf("The average score on midterm is %.2f\n",avg_midterm/counter);
	printf("The average score on final is %.2f\n",avg_final/counter);
	printf("The average score for the entire course is %.3f\n",avg_total/counter);
}

void function()
{
	union store std1;
	union store std2;	
	union store std3;
	union store std4;

	std1.rollNo=6;
	printf("%d\n",std1.rollNo);
	std2.rollNo=8;
	printf("%d\n",std2.rollNo);
	std3.rollNo=10;
	printf("%d\n",std3.rollNo);
	std4.rollNo=5;
	printf("%d\n\n",std4.rollNo);

	strcpy(std1.name,"Ahmet");
	printf("%s\n",std1.name);
	strcpy(std2.name,"Mehmet");
	printf("%s\n",std2.name);
	strcpy(std3.name,"Dogus");
	printf("%s\n",std3.name);
	strcpy(std4.name,"Kerem");
	printf("%s\n\n",std4.name);

	std1.age=36;
	printf("%d\n",std1.age);
	std2.age=34;
	printf("%d\n",std2.age);
	std3.age=56;
	printf("%d\n",std3.age);
	std4.age=26;
	printf("%d\n\n",std4.age);

	strcpy(std1.adress,"Maltepe");
	printf("%s\n",std1.adress);
	strcpy(std2.adress,"Kucukyali");
	printf("%s\n",std2.adress);
	strcpy(std3.adress,"Kocaeli");
	printf("%s\n",std3.adress);
	strcpy(std4.adress,"Cayirova");
	printf("%s\n",std4.adress);
}
