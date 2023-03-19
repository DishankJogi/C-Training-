#include<stdio.h>

int even(int number)
{
	return (number % 2==0);
}

int main()
{
	int number;
	
	printf("enter the number:\n");
	scanf("%d",&number);
	
	if (even(number))
	{
		printf("%d is Even Number",number);
	}
	else
	{
		printf("%d is Odd Number",number);
	}
	return 0;
}

