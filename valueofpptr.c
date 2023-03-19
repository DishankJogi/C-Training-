#include<stdio.h>

int main()
{
	char ch = 'D';
	char *ptr = &ch;
	char **pptr = &ptr;
	
	printf("Value of ch is: %c\n",ch);
	printf("Value of ptr is: %c\n",*ptr);
	printf("Value of pptr is: %c\n",*pptr);
	printf("Value of pptr is: %c\n",**pptr);
}