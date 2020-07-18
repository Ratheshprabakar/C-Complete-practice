//Program to accept a number and add the digits of that number.
#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter the Number\t");
	scanf("%d",&n);
	while(n>0)
	{
		sum=sum+(n%10);
		n/=10;	
	}
	printf("The Sum of Digits of the Number is %d",sum);
}
