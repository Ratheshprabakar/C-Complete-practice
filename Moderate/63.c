// Program to compare two strings
#include<stdio.h>
int main()
{
	char string1[100],string2[100];
	printf("Enter the first string\t");
	gets(string1);
	printf("Enter the second string\t");
	gets(string2);
	(!strcmp(string1,string2))?printf("\nTwo Strings are equal\n"):printf("\nTwo strings are not equal\n");
		
}
