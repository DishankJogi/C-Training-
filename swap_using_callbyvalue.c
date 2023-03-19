#include<stdio.h>

void _swap(int,int);

int main()
{
	int a; int b;
	printf("enter the value of A:");
	scanf("%d",&a);
	
	printf("enter the value of B:");
	scanf("%d",&b);
	
	_swap(a,b);
	
	
}

void _swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a = %d , b = %d",a,b);
}