//Program to copy char array / copy string.
#include<stdio.h>
int main()
{
	char string1[100],temp_string[100];
	printf("Enter the string\t");
	gets(string1);
	strcpy(temp_string,string1);
	printf("The Copied string is \t%s",temp_string);
}
