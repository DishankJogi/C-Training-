//Write a C program to print even and odd numbers from 1-50 using while

#include<stdio.h>

int main()
{
	int i=0;
	
	while(i<50){
		printf("%d \n",i);
		i=i+1;
		
		if(i % 2 == 0){
			printf("Even Number :",i);
		}
		else{
			printf("Odd Number :",i);
		}	
	}
	return 0;
}