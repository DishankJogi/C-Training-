#include<stdio.h>

int main()
{
	unsigned x= 0x10, y=0x15 , d;
	int a=1,b=0,c;
	
	
	c = a || b;
	d = x && y;
	
	printf("X & Y = %x\n ", d);
	printf("a && b = %d\n ",c);
	
	return 0;
	
	
	
	
	
		
	
}