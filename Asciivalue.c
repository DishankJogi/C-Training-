#include<stdio.h>

void AsciiPrint(char);


int main()
{
	char c;
	printf("Enter the character: ");
	scanf("%c",&c);
	AsciiPrint(c);

}


void AsciiPrint(char ch)
{
	printf("Asciivalue is : %d",ch);
}