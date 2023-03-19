#include<stdio.h>
// Invert Pyramid 

int main()
{
	int i,j;
	int a=6;
	
	
	for(i=a;i>=1;i--)
	{
		for(j = 1;j<=i;j++){
		printf("*");	
		}
	printf("\n");
	}
	return 0;
}

// user Input Star Prining 
// int main()
// {
	// int i,j,a;
	// printf("Enter the number:");
	// scanf("%d",&a);
	
	
	// for(i=1;i<=a;i++)
	// {
		// for(j=1;j<=i;j++){
		// printf("*");	
		// }
	// printf("\n");
	// }
	// return 0;
// }