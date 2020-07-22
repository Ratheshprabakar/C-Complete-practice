//Program to add first and last digit of a number.
#include<stdio.h>
int main()
{
	int n,sum=0,second;
	printf("Enter the number\t");
	scanf("%d",&n);
	sum=n%10;
	while(n>0)
	{
		second=n%10;
		n/=10;	
	}
	printf("\nThe sum of first and last digit is %d",sum+second);
		
}
