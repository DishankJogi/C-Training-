#include<stdio.h>

int main()
{
	int array1[4];
	int i;
	for(i=0;i<4;i++)
	{
		printf("Enter the value of array element= array[%d] : ",i);
		scanf("%d",&array1[i]);
	}
	printf("Print the array elements :\n");
	for(i=0;i<4;i++)
	{
		printf("%d\t",array1[i]);
	}
}