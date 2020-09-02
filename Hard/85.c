// Program to calculate the determinant of 3×3 matrix.
#include<stdio.h>
int main()
{
	int i,j,determinant;
	int array[3][3];
	printf("Enter the element of the matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	determinant = (array[0][0] * ((array[1][1]*array[2][2])-(array[1][2]*array[2][1]))) - (array[1][0] * ((array[0][1]*array[2][2]) - (array[0][2]*array[2][1]))) + (array[2][0] * ((array[0][1]* array[1][2])- (array[1][1]*array[0][2])));
	printf("The Determinant value is %d",determinant);
}
