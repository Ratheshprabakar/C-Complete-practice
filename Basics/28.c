// Program to accept a number and add the digits of that number using recursion.
#include<stdio.h>
int total(int n);
int main()
{
	int n;
	printf("Enter the value of N\t");
	scanf("%d",&n);
	printf("%d",total(n));
}
int total(int num)
{
	static sum=0;
	if(num==0)
	{
		return 0;	
	}
	else
	{
		return num%10 + total(num/10);	
	}
}
