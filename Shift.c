#include<stdio.h>

int main()
{
	int a = 25; 
	int b = 38;
	
	a = a << 1;
	b = b >> 2;
	
	printf("Shift Left : %d \n",a);
	printf("Shift Right: %d \n",b);
}