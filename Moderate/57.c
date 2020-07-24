//Program to find nCr & nPr
#include<stdio.h>
int factorial(int n);
int result=1;
int main()
{
	int n,r;
	long ncr,npr;
	printf("Enter the value of n and r\n");
	scanf("%d\t%d",&n,&r);
	npr=factorial(n)/factorial(n-r);
	ncr=factorial(n)/(factorial(n-r)*factorial(r));
	printf("The ncr and npr are %ld and %ld",ncr,npr);

}
int factorial(int n)
{
	int i;
	result=1;
	for(i=n;i>=1;i--)
	{
		result*=i;	
	}
	return result;
}
