//Program to accept two integer numbers and print the GCD(Greatest Common Divisor)
#include<stdio.h>
int main()
{
	int a,b,max=100,i;
	printf("Enter the value of a and b\n");
	scanf("%d\t%d",&a,&b);
	if(a>b)
		max=a;
	else
		max=b;
	for(i=max;i>=1;i--)
	{
		if(a%i==0 && b%i==0)
		{
			printf("The GCD of two numbers are \t%d",i);
			break;	
		}		
	}
	
}
