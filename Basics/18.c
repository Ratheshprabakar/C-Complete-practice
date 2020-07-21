// Program to accept a number and print sum of it’s digits
#include<stdio.h>
int main()
{
	int n,total=0,rem;
	printf("Enter the number\t");
	scanf("%d",&n);
	while(n>0)
	{	
		rem=n%10;
		total+=rem;
		n/=10;	
	}
	printf("The Sum of the digits are %d",total);
}
