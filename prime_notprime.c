// Write a C program to find the prime number

#include<stdio.h>

int main(){
	int number, j , count=0 ;
	
	printf("Enter the number:");
	scanf("%d",&number);
	
	for(j=1;j<=number;j++)
	{
		if(number % j==0){
			count ++;
		}
	}
	if (count==2){
		printf("Number %d Prime", number);
	}
	else{
		printf("Number %d Not Prime", number);
	}
	return 0;
	
}