// Program to accept a number and print Fibonacci sequence.
#include<stdio.h>
int main()
{
	int n,a=0,b=1,c,i;
	printf("Enter the value of N\t");
	scanf("%d",&n);
	printf("0\n1\n");
	for(i=2;i<n;i++)
	{
		c=b;
		b=a+b;
		a=c;
		printf("%d\n",b);		
	}
	
}
