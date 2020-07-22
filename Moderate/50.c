//Program to add two numbers using pointer
#include<stdio.h>
int main()
{
	int a,b,sum=0;
	int *ptr1,*ptr2;
	printf("Enter two numbers\n");
	scanf("%d\t%d",&a,&b);
	ptr1=&a;
	ptr2=&b;
	sum=(*ptr1)+(*ptr2);
	printf("The Sum of two numbers %d and %d are %d",a,b,sum);
}
