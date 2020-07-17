//Program to accept a number and print that number in reverse order.
//Ex:- 1024
//Output:- 4201
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number\t");
	scanf("%d",&n);
	while(n>0)
	{
		printf("%d",n%10);
		n/=10;	
	}
}
