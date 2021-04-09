#include<stdio.h>
#include<string.h>
int main()
{
	char input_string[100];
	int mid,i,k,j;
	scanf("%s",input_string);
	mid=strlen(input_string)/2;
	for(i=1;i<=strlen(input_string);i++)
	{
		int temp=(i*2)-1,count=0;
		for(j=2*strlen(input_string)-1;j>=i;j--)
		{
			if(abs(temp)==j)
			{
				for(k=temp;count<i;k++)
				{
					if(count>=7)
					{
						printf("%c",input_string[(mid+count)%10]);
					}
					else
					{
						printf("%c",input_string[(mid+count)%strlen(input_string)]);
					}
					count++;
				}
			}
		}
		printf("\n");
	}
}
