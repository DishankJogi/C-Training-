#include<stdio.h>

int Printhelow(int);

int main()
{
	Printhelow(5);
	return 0;
}

// recursive Function
int Printhelow(int count)
{
	if(count==0)
	{
		return 0;
	}
	printf("Hellow\n");
	Printhelow(count-1);
}