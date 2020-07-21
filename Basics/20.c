//Program to take number from user and print table of that number.
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the table number\t");
	scanf("%d",&n);
	for(i=1;i<=100;i++)
	{
		printf("%d*%d=%d\n",i,n,i*n);	
	}
}

