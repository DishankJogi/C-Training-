#include<stdio.h>

int sum(int a,int b);//function prototype
int sub(int a,int b);//function prototype
int mul(int a,int b);//function prototype
int div(int a,int b);//function prototype

int main()
{
	int a,b,s;
	char op;
	

	printf("Make Your Choice: + , - , * , / = \n");
	scanf("%c",&op);
	
	printf("Enter the Value of a :\n ");
	scanf("%d",&a);
	
	printf("Enter the Value of b :\n ");
	scanf("%d",&b);
	
	
	if(op == '+')
	{
		s=sum(a,b); // function calling 
		printf("a + b = %d",s);
	}
	else if(op == '-')
	{
		s=sub(a,b);// function calling
		printf("a - b = %d",s);
	}
	if(op == '*')
	{
		s=mul(a,b);// function calling
		printf("a * b = %d",s);
	}
	if(op == '/')
	{
		s=div(a,b);// function calling
		printf("a / b = %d",s);
	}
	return 0;
	
}
// function definition
int sum(int x , int y)
{
	return x+y;
}
// function definition
int sub(int x , int y)
{
	return x - y;
}
// function definition
int mul(int x , int y)
{
	return x * y;
}
// function definition
int div(int x , int y)
{
	return x / y;
}