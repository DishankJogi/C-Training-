//Write a C program to print even and odd numbers from 1-50 using for

#include<stdio.h>

int main(){
	int i;
	for(i=0;i<50;i++)
	{
		if(i % 2 == 0){
			printf("Even Number: %d \n ",i);
		}
		else{
			printf("Odd Number: %d \n ",i);
		}
		
	}
	return 0;
	
}