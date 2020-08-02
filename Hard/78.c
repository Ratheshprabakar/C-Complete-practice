//Program to swap two strings
#include<stdio.h>
int main()
{
	char string1[20],string2[20];
	char *temp;
	printf("Enter the first string\t");
	gets(string1);
	printf("\nEnter the second string\t");
	gets(string2);
	if(strlen(string1)>strlen(string2))
		temp=(char*)malloc((strlen(string1)+1)*sizeof(char));
	else
		temp=(char*)malloc((strlen(string2)+1)*sizeof(char));
	printf("\nBefore Swapping\t%s and %s",string1,string2);
	strcpy(temp,string1);
	strcpy(string1,string2);
	strcpy(string2,temp);
	printf("\nAfter Swapping \t%s and %s",string1,string2);
	free(temp);		
}
