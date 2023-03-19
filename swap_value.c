/*Write a C program to swap the value of two variables with the help of a third variable and 
without the help of a third variable.*/

#include<stdio.h>
/*
int main()
{
    int a,b,c;
    a=3;
    b=4;

    printf("Value of Variable A is : %d\n",a);
    printf("Value of Variable B is : %d\n",b);

    c=b; // b to c
    b=a; // a to b
    a=b;

    printf("Value of Variable A is : %d\n",c);
    printf("Value of Variable B is : %d\n",a);

    return 0;

}*/

int main()
{
    int a,b;

    //printf("Values are : ");
    printf("Original Value of a:\n");
	scanf("%d", &a);
    
    printf("Original Value of b:\n");    
    scanf("%d", &b);
    

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Swap value of a %d\n",a);
    printf("Swap value of b %d\n",b);

    return 0;
}