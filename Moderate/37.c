//Program to find largest among 3 numbers using ternary operator.
#include<stdio.h>
int main()
{
	int a,b,c,x;
	printf("Enter the three numbers\n");
	scanf("%d\t%d\t%d",&a,&b,&c);	
	x=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("The Largest of three numbers are %d",x);
}
