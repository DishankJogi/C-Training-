#include<stdio.h>

int main()
{
	int z;
	int *ptr;
	
	ptr = &z;
	*ptr = 0;
	
	printf("Value of Z is: %d\n",z);
	printf("Value of ptr is: %d\n",*ptr);
	
	*ptr += 7; // *ptr = *ptr + 7;
	
	printf("Value of z is : %d\n",z);
	printf("Value of ptr is : %d\n",*ptr);
	
	(*ptr)++; // *ptr = *ptr + 1;
	printf("Value of z is : %d\n",z);
	printf("Value of ptr is : %d\n",*ptr);
	
	
	
}