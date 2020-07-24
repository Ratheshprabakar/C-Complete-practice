// Program to calculate the sum of even numbers from 1 to n.
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the value of N\t");
	scanf("%d",&n);
	for(i=2;i<=n;i=i+2)
	{
		sum+=i;
	}
	printf("The Sum of even numbers from 1 to n is %d",sum);
}
