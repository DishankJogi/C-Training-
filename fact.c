#include<stdio.h>

void facto(int,int); // function Declaration

int main()
{
	int f,number;
	f=1;
	printf("Enter a Number to Find Factorial: ");
    scanf("%d",&number);
	facto(f,number);
	return 0;
}

void facto(int x ,int y){
	int fact =1;
	while(x<=y)
	{
		fact = fact*x; 
		x++;
	}
	printf("The factorial of %d is : %d",y,fact);
}