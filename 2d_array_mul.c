#include<stdio.h>

int main()
{
	int i,j,mat1[2][3] = {{11,12,13},{10,10,10}},mat2[2][3] = {{11,12,13},{10,10,10}},mat3[2][3];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("the value of mat1[%d] = %d\n",i,mat1[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("the value of mat1[%d] = %d\n",i,mat2[i][j]);
		}
	}
	// Multiplication
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			mat3[i][j] = mat1[i][j] * mat2[i][j];
		}
	}
	printf("The Result is \n ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",mat3[i][j]);
		}

	}
	
	
}