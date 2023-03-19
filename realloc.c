#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *a_pointer;
	int num;
	printf("Enter the size of array:");
	scanf("%d",&num);
	
	a_pointer = (int*)calloc(num,sizeof(int));
	
	for(int i=0;i<num;i++)
	{
		printf("Enter the %d element of array:",i);
		scanf("%d",&a_pointer[i]);
	}
	for(int i=0;i<num;i++)
	{
		printf("%d element of array is : %d\n",i,a_pointer[i]);
	}
	
	printf("Enter the size of new array :");
	scanf("%d",&num);
	
	a_pointer = (int*)realloc(a_pointer,num*sizeof(int));
	
	for(int i=0;i<num;i++)
	{
		printf("Enter the %d new element is:",i);
		scanf("%d",&a_pointer[i]);
	}
	for(int i=0;i<num;i++)
	{
		printf("%d new element of array is:%d\n",i,a_pointer[i]);
	}
	free(a_pointer);
	return 0;
}