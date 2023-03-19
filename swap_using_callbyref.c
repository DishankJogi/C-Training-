#include<stdio.h>

void _swap(int *x,int *y);

int main()
{
	int a; int b;
	printf("enter the value of A:");
	scanf("%d",&a);
	
	printf("enter the value of B:");
	scanf("%d",&b);
	
	_swap(&a,&b);
	printf("a = %d , b = %d",a,b);
	
}

void _swap(int *x,int *y)
{
	int t = *x;
	*x = *y;
	*y = t;
}