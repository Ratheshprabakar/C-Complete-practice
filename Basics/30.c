//Program to calculate Square of 'n' numbers.
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the value of N\t");
	scanf("%d",&n);
	printf("The First %d Square Numbers are\n",n);
	for(i=1;i<=n;i++)
	{
		printf("\nThe Square of %d is %d",i,i*i);	
	}
}
