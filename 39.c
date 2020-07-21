//Program to check whether the number is neon number or not.
#include<stdio.h>
int main()
{
	int n,temp,sum=0;
	printf("Enter the number\t");
	scanf("%d",&n);
	temp=n*n;
	while(temp>0)
	{
		sum+=(temp%10);
		temp/=10;
	}
	(sum==n)?printf("Neon Number\n"):printf("Not a Neon Number\n");
}
