//Program to accept number and print it's factorial.
#include<stdio.h>
int main()
{
	int n,value=1,i;
	printf("Enter the Value of N\t");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		value*=i;	
	}
	printf("The Factorial of %d is %d",n,value);
	
}
