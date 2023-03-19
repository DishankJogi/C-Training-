//Write a C program to find the large number among two

#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);

    if(a>b)
    {
        printf(" A is Greater than B \n");
    }
    else
    {
        printf("B is Greater than A \n");
    }
return 0;
}