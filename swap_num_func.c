//Write a C program to swap two numbers entered by user without third variable in a swap() function (Using call by value)

#include <stdio.h>  

void swap (int a, int b)
{   
    a =  a+b;  
    b =  a-b;  
    a =  a-b;  
    printf("Swaping Output is a = %d, b = %d\n",a,b); 
}  

int main()  
{  
    int x,y;  

	printf("Enter The Value of x:",x);
	scanf("%d",&x);
	printf("Enter The Value of y:",y);
	scanf("%d",&y);
	
    printf("Original Value x = %d, y = %d\n",x,y); 
    swap(x,y); 
}  

