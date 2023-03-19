#include<stdio.h>

void _square(int *n);

int main()
{
	int number;
	
	printf("Enter the Number:");
	scanf("%d",&number);
	_square(&number);
	printf("number is : %d\n",number);

}

void _square(int *n)
{
	a = (*n) * (*n);
	printf("Square is :%d\n",a);
}