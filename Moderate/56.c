// Program to check the leap year.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the year\t");
	scanf("%d",&n);
	(n%4==0 || n%400==0)?printf("A leap year\n"):printf("Not a leap year\n");
	
}
