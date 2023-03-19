/* make this one too as a using of Function */

#include<stdio.h>

int main()
{
	int num,n;
	long fact=1;
	
	printf("Enter the Number:");
	scanf("%d",&n);
	
	num = n;
	if(n<0)
	{
		printf("Not get factorial of Nagative Number");
	}
	else 
	{
		while(n > 1)
		{
		fact*= n;
		n --;
		}
	printf("Factorial of %d is %ld ",num, fact);
	}
	return 0;
}