#include<stdio.h>

int leapyear(int);

int main()
{	
	int year,a;
	printf("enter the year : ");
	scanf("%d",&year);
	a = leapyear(year);
	
	if(a == 1)
	{
		printf("Year");
	}
	else
	{
		printf("Not an Year");
	}
	
}

int leapyear(int x)
{
	if(x%4==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}