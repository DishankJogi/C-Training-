#include<stdio.h>

int main(){
	int fahrenhit; 
	float celsius;
	// // Coversion of F ----> C 
	
	// printf("Enter the Fahrenhit Value:");
	// scanf("%d",&fahrenhit);
	
	// celsius = (fahrenhit-32) / 1.8;
	// printf("Conversion in celsius = %f",celsius);
	
	// Conversion of C ----> F
	
	printf("Enter the celsius Value:");
	scanf("%f",&celsius);
	
	fahrenhit= (celsius*1.8)+32;
	printf("Conversion in fahrenhit = %d",fahrenhit);
	
	return 0;
	
	
}