//Program to swap two numbers using bitwise XOR.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers\n");
	scanf("%d\t%d",&a,&b);
	printf("The Values before swapping are %d and %d",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\nThe Values after swapping are %d and %d",a,b);
}
