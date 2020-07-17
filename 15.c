//Program to print numbers from n to 1 using Do While loop.
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter the value of N\t");
	scanf("%d",&n);
	do{
		printf("%d\n",i);
		i++;	
	}while(i<=n);	
}
