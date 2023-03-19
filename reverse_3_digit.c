//Write a C program to reverse a 3-digit integer

#include <stdio.h>

int main(){

    int Number=456; 
	int reverse_Num = 0; 
	int remain;
    

    while (Number != 0){

        remain = Number % 10;
		printf("remain = %d\n",remain); // It takes Last Digit Of Number

        reverse_Num = reverse_Num * 10 + remain; 
		printf("Reverse Value = %d\n",reverse_Num);

        Number = Number/10;
		printf("Number= %d\n",Number);

    }    

    printf("The reversed number is: %d", reverse_Num);

    return 0;

}