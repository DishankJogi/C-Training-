// sum of naturals number
#include<stdio.h>
// int sum(int);

// int main()
// {
	// printf("sum is %d",sum(5));
	// return 0;
// }

// //recursive function 
// int sum(int n)
// {
	// if(n==1)
	// {
		// return 1;
	// }
	// int sumN1=sum(n-1);
	// int sumN = sumN1+n;
	// return sumN;
// }


// factroial of numbers 

int fact(int);

int main()
{
	
	printf("factorial of is  %d",fact(5));
	return 0;
	
}

int fact(int n)
{
	if (n==0)
	{
		return 1;
	}
	int factnM1=fact(n-1);
	int factN = factnM1 * n;
	return factN;
}