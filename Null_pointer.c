#include<stdio.h>

int main()
{
	int x = 8200;
	int *xptr = NULL;
	printf("The Adress of : %d\n",xptr);
	xptr = &x;
	printf("The Adress of : %d\n",*xptr);
}