//Program to find the roots of a quardratic equation.
#include<stdio.h>
int main()
{
	int a,b,c;
	float r1,r2,det;
	printf("Enter the cofficients of a,b,c\t");
	scanf("%d\n%d\n%d",&a,&b,&c);
	det=(b*b)-(4*a*c);
	if(det>0)
	{
		r1=(-b+(sqrt(det)))/(2*a);
		r2=(-b-(sqrt(det)))/(2*a);
		printf("Roots are %f and %f",r1,r2);
	}
	else
	{
		r1=r2=-b/(2*a);	
		printf("Roots are %f and %f",r1,r2);
	}
}
