#include<stdio.h>

int square(int);

int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	square(num);
	
	
}

int square(int n)
{
	n = n * n;
	printf("Square is: %d",n);
}