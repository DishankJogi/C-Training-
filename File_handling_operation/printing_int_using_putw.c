#include<stdio.h>

int main()
{
	FILE *number;
	int i,num;
	printf("Enter the Ending Number:");
	scanf("%d",&num);

	number = fopen("print.dat","wb");
	
	for(i=0;i<num;i++)
	{
		putw(num,number);
	}
	fclose(number);
	
}