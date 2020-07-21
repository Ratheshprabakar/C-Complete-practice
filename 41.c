// Program to check whether the number is palindrome or not
#include<stdio.h>
int main()
{
	int n,temp,num=0;
	printf("Enter the Number\t");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		num*=10;
		num+=(n%10);
		n/=10;	
	}
	(temp==num)?printf("Palindrome\n"):printf("Not a Palindrome\n");
}
