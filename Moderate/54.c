//Program to convert Decimal numbers to Binary
#include<stdio.h>
int main()
{
	int n,c,k;
	printf("Enter the Decimal Number\t");
	scanf("%d",&n);
	printf("The Binary Notation of %d is\t",n);
	for(c=7;c>=0;c--)
	{
		k=n>>c;
		(k&1)?printf("1"):printf("0");
	}
}
