//Program to accept two values of a & b and swap their values
#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter two number\n");
	scanf("%d\n%d",&a,&b);
	printf("The Value before swapped is %d\t%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("The Value after swapped is %d\t%d\n",a,b);
}
