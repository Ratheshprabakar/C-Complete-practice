//Program to accept two number and print largest among them
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter Two Numbers\n");
	scanf("%d\n%d",&a,&b);
	(a>b)?printf("The largest number is \t%d",a):printf("The largest number is \t%d",b);
}
