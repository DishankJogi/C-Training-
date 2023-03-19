#include<stdio.h>

int CharPrint(char,int);

int main()
{
	char letter; 
	int num;
	
	printf("Enter the character:");
	scanf("%c",&letter);
	
	printf("Enter the Number:");
	scanf("%d",&num);
	
	CharPrint(letter,num);
	
	return 0;
	
}

int CharPrint(char c,int x)
{
	int i=1;
	while(i<=x)
	{
		printf("%c",c);
		i++;
	}
}
