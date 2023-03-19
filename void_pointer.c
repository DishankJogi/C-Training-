#include<stdio.h>

int main()
{
	int a = 12;
	char ch = '*';
	void *a_pointer;
	a_pointer = &a;
	printf("Value of Pointer is: %d\n",*((int *)a_pointer));
	a_pointer = &ch; 
	printf("Value of Pointer is: %c\n",*((char *)a_pointer));
	
	return 0;
}