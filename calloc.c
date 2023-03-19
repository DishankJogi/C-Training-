#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	printf("Enter the size of number: ");
	scanf("%d",&num);
	int *c_pointer;
	c_pointer = (int*)calloc(num,sizeof(int*));
	
	// for(int i=0;i<num;i++)
	// {
		// printf("Enter the %d element of array: ",i);
		// scanf("%d",&c_pointer[i]);
	// }
	for(int i=0;i<num;i++)
	{
		printf("%d element of array is : %d \n",i,c_pointer[i]);
	}
	return 0;
}