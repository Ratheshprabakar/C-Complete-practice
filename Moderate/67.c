//Program to copy string without using strcpy() function.
#include<stdio.h>
int main()
{
	char string1[100];
	char *temp_string;
	int i;
	printf("Enter the string\t");
	scanf("%s",string1);
	temp_string=(char *)malloc((strlen(string1)+1)*sizeof(char));
	for(i=0;i<strlen(string1);i++)
	{
		temp_string[i]=string1[i];
	}
	printf("The copied string is\t%s",temp_string);
	free(temp_string);
}
