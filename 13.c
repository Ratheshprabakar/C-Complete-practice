//Program to accept rollnumber and marks of three subjects from user and print total marks, average and grade.
#include<stdio.h>
int main()
{
	int rollno,total=0,i;
	int *marks;
	float avg;
	char grade;
	marks=(int *)malloc(3*sizeof(int));
	printf("Enter the roll number\t");
	scanf("%d",&rollno);
	printf("Enter the Marks of three subjects\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&marks[i]);
		total+=marks[i];
	}
	avg=total/3;
	if(avg>90)
	{
		grade='O';	
	}
	else if(avg>80)
	{
		grade='A';	
	}
	else if(avg>70)
	{
		grade='B';	
	}
	else if(avg>50)
	{
		grade='c';	
	}
	else
	{
		grade='D';	
	}

	printf("\nReg No.\tTotal\tAverage\tGrade\n%d\t%d\t%.2f\t%c",rollno,total,avg,grade);
	free(marks);
}
