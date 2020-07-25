//Program to check the palindrome of word using array
#include<stdio.h>
int main()
{
	char string[100];
	int i,j;
	printf("Enter the string\t");
	gets(string);
	for(i=0,j=strlen(string)-1;i<strlen(string)/2;i++,j--)
	{
		if(string[i]!=string[j])
		{
			printf("\nNot a palindrome");
			break;	
		}
	}
	if(i==strlen(string)/2 || i==j)
	{
		printf("\nPalindrome");
	}

	
}
