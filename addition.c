#include<stdio.h>

int addition(int num1,int num2); // Declaration 

int main()
{
	int num1,num2,c;
	printf("Enter the value of Num1 :\n");
	scanf("%d",&num1);
	printf("Enter the value of Num2 :\n");
	scanf("%d",&num2);
	c = addition(num1,num2);
	printf("Result=%d", c);
}

int addition(int a , int b)
{
	return a+b;
}
