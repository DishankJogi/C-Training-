#include<stdio.h>

int find_ara1(int,int*,int);
int main()
{
	int size,i,s;
	
	printf("Enter the size of Array : ");
	scanf("%d",&size);
	
	int ara1[size];
	
	for(i=0;i<size;i++)
	{
		printf("Enter the %d element of Array :",i);
		scanf("%d",&ara1[i]);
	}
	printf("Enter the value that u want to search from array: ");
	scanf("%d",&s);
	
	int b = find_ara1(size,ara1,s);
	if(b == 1)
	{
		printf("element found");
	}
	else
	{
		printf("Not found");
	}
}

int find_ara1(int size,int *ara1,int s)
{
	for(int i=0; i<size;i++)
	{
		if (s == ara1[i])
		{
			return 1;
		}	
	}
	
	
}