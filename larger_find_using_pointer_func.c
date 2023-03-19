#include<stdio.h>

int* larger(int* , int*);

int* main()
{	
	int a,b;
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("Enter the value of b :");
	scanf("%d",&b);
	int *p;
	p = larger(&a,&b);
	printf("%d Is Larger",*p);
	
}

int* larger(int *x , int *y)
{
	if(*x > *y)
	{
		return x;
	}
	else
	{
		return y;
	}
}