#include<stdio.h>
#include<string.h>

int astrcmp(char *x1,char *x2)
{
	int i;
	while(*x1!='\0' && *x2!='\0' && *x1==*x2)
	{
		x1++;
		x2++;
	}
	if(*x1==*x2)
	{
		printf("Both are Same");
	}
	else
	{
		printf("Not Same");
	}
}

int main()
{
	char *a1="Dishank";
	char *a2="Dishank";
	astrcmp(a1,a2);
}

