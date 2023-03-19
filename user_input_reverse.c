//Write a C program to print a number given by user but digits reversed.

#include <stdio.h>

int main(){

    int Number; 
	int reverse_Num = 0; 
	int remain;

    printf("Enter the number to reverse: ");

    scanf("%d", &Number);    

    while (Number != 0){

        remain = Number % 10;
		printf("remain = %d\n",remain);

        reverse_Num = reverse_Num * 10 + remain;
		printf("Reverse Value = %d\n",reverse_Num);

        Number = Number/10;
		printf("Number= %d\n",Number);

    }    

    printf("The reversed number is: %d", reverse_Num);

    return 0;

}