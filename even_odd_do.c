// Write a C program to print even and odd numbers from 1-50 using Do while
#include<stdio.h>

int main()
{
	int num, index=0;
	printf("Enter the value of: ");
	scanf("%d",&num);
	
	do
	{
		//printf("%d \n ",index);
		index = index + 1;
		if(index % 2 ==0){
			printf(" Even Number : %d \n ",index);
		}
		else{
			printf(" Odd Number : %d \n",index);
		}
	}while(index < num);
	
	return 0;
}