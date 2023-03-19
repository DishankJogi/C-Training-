#include<stdio.h>
#include<string.h>

int a1strcmp(char,char);

int main()
{
	char a1[]="Dishank", a2[] ="Darshan";
	a1strcmp(a1,a2);
}

int a1strcmp(char x1,char x2)
{
	int i;
	while(x1[i]!="/0" && x2[i]!="/0" && x1[i]==x2[i])
	{
		i++;
	}
	if(x1[i]==x2[i])
	{
		printf("Both are Same")
	}
	else
	{
		printf("Not Same")
	}
}