//Program to calculate HCF & LCM.
#include<stdio.h>
int main()
{
	int a,b,x,y,temp;
	printf("Enter two numbers\n");
	scanf("%d\t%d",&a,&b);
	x=a;
	y=b;
	while(y!=0)
	{
		temp=y;
		y=x%y;
		x=temp;		
	}
	printf("The HCF of %d and %d are %d\n",a,b,x);
	printf("The LCM of %d and %d are %d\n",a,b,(a*b)/x);
	
}
