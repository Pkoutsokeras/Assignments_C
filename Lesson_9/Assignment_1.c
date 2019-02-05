#include <stdio.h>
#define LESSONS 3
#define STUDENTS 5
int main()
{
int i,j;
float grade,stud_grade,class_grade;
class_grade = 0;
for (i=0; i< STUDENTS; i++)
{
	printf("***** Student %d\n",i+1);
	stud_grade=0;
	}	
for (j = 0; j < LESSONS; j++)
{
	printf("enter grade for lesson %d:",j+1);
	scanf("%f",&grade);
	stud_grade += grade;
	class_grade += grade;
}
printf("average  grade for student %d is %.2f\n",i+1,stud_grade/LESSONS);
printf("\n*****Average class grade is %.2f\n",class_grade/(STUDENTS*LESSONS));
return 0;
}
