//Program to print numbers from 1 to n using while loop.
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter the value of N\t");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",i);
		i++;
	}
}
