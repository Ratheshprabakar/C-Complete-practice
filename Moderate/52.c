// Program to find area of triangle using Heron's formula.
#include<stdio.h>
int main()
{
	int a,b,c,s;
	printf("Enter tthe three sides of the triangle\n");
	scanf("%d\t%d\t%d",&a,&b,&c);
	s=(a+b+c)/2;
	printf("\nThe Area of triangle is %.2f",sqrt(s*(s-a)*(s-b)*(s-c)));
		
}
