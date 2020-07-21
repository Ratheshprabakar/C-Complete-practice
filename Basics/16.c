//Program to print first n even numbers.
#include<stdio.h>
int main()
{
	int n;
	int i=2;
	printf("Enter the value of N\t");
	scanf("%d",&n);
	printf("The First %d even numbers are\n",n);
	while(i<=(2*n))
	{
		printf("%d\n",i);
		i=i+2;
	}
}
