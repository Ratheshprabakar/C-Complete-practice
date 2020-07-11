//Program to accept a number and check whether the number is positive, negative or zero
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number\t");
	scanf("%d",&n);
	if(n>0)
	{
		printf("The Number is positive\n");		
	}
	else if(n==0)
	{
		printf("The Number is zero\n");	
	}
	else
		printf("The Number is negative\n");

}

