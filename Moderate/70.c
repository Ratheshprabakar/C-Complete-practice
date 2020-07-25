//Program to calculate the length of string
#include<stdio.h>
int main()
{
	char string[100];
	printf("Enter the string\t");
	gets(string);
	printf("\nThe Length of the string is \t%d",strlen(string));
}
