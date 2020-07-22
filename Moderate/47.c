// Program to swap two numbers without using third variable
#include<stdio.h>
int main()
{
	int n,a,b;
	printf("Enter the numbers a and b\n");
	scanf("%d\t%d",&a,&b);
	printf("The Values before swapping are %d and %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nThe Values after swapping are %d and %d",a,b);
}
