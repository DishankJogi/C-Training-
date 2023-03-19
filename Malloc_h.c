#include<stdio.h>
#include<stdlib.h> // calloc,malloc,realloc include in this library. 

int main()
{
	//use of malloc
	
	int* ptr;
	ptr = (int*)malloc(10*sizeof(int));
	
	for(int i = 0;i < 4;i++)
	{
		printf("Enter the %d element of array:",i);
		scanf("%d",&ptr[i]);
	}
	
	for(int i = 0;i < 4;i++)
	{
		printf("%d element of array is :%d \n",i,ptr[i]);
	}
	
	return 0;
	
}