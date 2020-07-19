//Program to take an alphabet from user and check whether it is a vowel or not.
#include<stdio.h>
int main()
{
	char a;
	printf("Enter the Char\t");
	scanf("%c",&a);
	if(a=='A' || a=='a' || a=='E' || a=='e' || a=='I' || a=='i' || a=='O' || a=='o' || a=='U' || a=='u')
	{
		printf("\n%c is a vowel",a);	
	}
	else
		printf("\n%c is not a vowel",a);
}
