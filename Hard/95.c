/*Given a String with numbers and operators. Perform the operation on the numbers in their respective order. Operator precedence need not be considered. The input string will have the numbers followed by the operators. 

Input: "12345 * + - + " 	
Result: 6 [Explanation: 1 * 2 + 3 - 4 + 5 = 6]

Input: "374291 - - * + -" 	
Result: -8 [Explanation: 3 - 7 - 4 * 2 + 9 - 1 = -8]

Input: "67542 - / + -" 		
Result: 2*/
#include<stdio.h>
int main()
{
	char input_string[20],char_array[20];
	int i,int_array[20],int_count=0,char_count=0;
	scanf("%s",input_string);
	for(i=0;input_string[i];i++)
	{
		if(input_string[i]>=48 && input_string[i]<=57)
		{
			int_array[int_count++]=input_string[i]-'0';
		}
		else
		{
			char_array[char_count++]=input_string[i];
		}
	}
	if(int_count==char_count+1)
	{
		int value=int_array[0];
		for(i=0;i<char_count;i++)
		{
			if(char_array[i]=='+')
			{
				value+=int_array[i+1];
			}
			else if(char_array[i]=='-')
			{
				value-=int_array[i+1];
			}
			else if(char_array[i]=='*')
			{
				value*=int_array[i+1];
			}
			else if(char_array[i]=='/')
			{
				value/=int_array[i+1];
			}
			else if(char_array[i]=='%')
			{
				value=value%int_array[i+1];
			}

		}
		printf("%d",value);
	}
}
