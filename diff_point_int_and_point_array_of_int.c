#include<stdio.h>

int main()
{
	int *p;         // int pointer 
	int (*ptr)[5]; // pointer of int array 
	int arr[5];// int array
	
	
	p   = arr; // point 0th indexing
	ptr = &arr; // point whole array
	
	printf("p = %u, ptr = %u\n",p,ptr);
	p++;
	ptr++;
	printf("p = %u, ptr = %u\n",p,ptr);
}