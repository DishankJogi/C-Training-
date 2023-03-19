//Write a C program to find the largest of three numbers (i.e 12, 25, 13) using if condition
#include<stdio.h>

int main(){

    int a,b,c;
    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%d",&b);
    printf("Enter the value of c =");
    scanf("%d",&c);

    if (a>b)
    {
        printf("Largest Number is %d",a);
    }

    else if (a>c)
    {
        printf("Largest Number is %d",a);
    }
    else if (b>c)
    {
        printf("Largest Number is %d",b);
    }

    else
    {
        printf("Largest Number is %d",c);
    }
    return 0;   
    }
    
