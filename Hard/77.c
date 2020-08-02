//Program to sort the strings
#include<stdio.h>
int main()
{
	char string[20][20],temp[20];
	int i,n,j;
	printf("Enter no. of the string");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",string[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(string[i],string[j])>0)
			{
				strcpy(temp,string[i]);
				strcpy(string[i],string[j]);
				strcpy(string[j],temp);
			}		
		}

	}
	for(i=0;i<n;i++)	
		printf("\nThe Sorted String is \t%s",string[i]);
}
