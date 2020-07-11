//Program to print simple interest
#include<stdio.h>
int main()
{
	float p,r;
	int n;
	printf("Enter the Principle value\t");
	scanf("%f",&p);
	printf("Enter No, of years\t");
	scanf("%d",&n);
	printf("Enter Rate of interest\t");
	scanf("%f",&r);
	printf("The Simple Interest\t%f",(p*n*r)/100);
}
