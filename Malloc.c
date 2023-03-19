#include<stdio.h>
#include<stdlib.h>

int main()
{	
	int num,a=num+5;	
	int *a_pointer;
	
	a_pointer = (int*)malloc(5*sizeof(int));
	
	for(int i=0;i<5;i++)
	{
		printf("Enter the %d element of array:",i);
		scanf("%d",&a_pointer[i]);
	}
	for(int i=0;i<5;i++)
	{
		printf("%d element of array is %d \n",i,a_pointer[i]);
	}
	printf("Enter the new size of array:");
	scanf("%d",&num);
	
	a_pointer = (int*)realloc(a_pointer,num*sizeof(int));
	
	for(int i=0;i<num;i++)
	{
		printf("Enter the %d new element :",i);
		scanf("%d",&a_pointer[i]);
	}
	for(int i=0;i<num;i++)
	{
		printf("%d new element is %d \n",i,a_pointer[i]);
	}
}