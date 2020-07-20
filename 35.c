// Program to find power of number.
#include<stdio.h>
int main()
{
	int a,b,i,value=1;
	printf("Enter the base value\t");
	scanf("%d",&a);
	printf("Enter the exponent value\t");
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
		value=value*a;	
	}
	printf("The Value is \t%d",value);
	
}

