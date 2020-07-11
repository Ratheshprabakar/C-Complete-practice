//Program to accept a number from user and print it's square & cube
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number\t");
	scanf("%d",&n);
	printf("The Square of %d is %d\nThe Cube of %d is %d\n",n,(n*n),n,(n*n*n));
}
