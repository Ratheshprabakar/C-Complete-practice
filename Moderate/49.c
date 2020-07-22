//Program to swap two numbers using pointer
#include<stdio.h>
int main()
{
	int a,b;
	int *ptr1,*ptr2,*temp;
	printf("Enter two numbers\n");
	scanf("%d\t%d",&a,&b);
	printf("The Value before swapping are %d and %d",a,b);
	ptr1=&a;
	ptr2=&b;
	*temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=*temp;
	printf("\nThe Value after swapping are %d and %d",a,b);
	
	
}
