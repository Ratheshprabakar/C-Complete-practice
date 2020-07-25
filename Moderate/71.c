//Program to calculate the length of string without using strlen() function
#include<stdio.h>
int main()
{
	char string[100];
	int i;
	printf("Enter the string\t");
	gets(string);
	for(i=0;string[i]!='\0';i++);
	printf("The Length of the string is \t%d ",i);
}
