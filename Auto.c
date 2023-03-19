#include<stdio.h>

int main()
{
	// int a=10;
	int a =20;
	{
		auto int a = 24;
	{
		auto int a= 28;
		printf("%d\n",a);
		printf("%d\n",&a);
	}
		printf("%d\n",a);
		printf("%d\n",&a);
	}
	printf("%d\n",a);
	printf("%d\n",&a);
}