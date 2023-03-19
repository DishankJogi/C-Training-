//Write a C program to find the large number among three

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);


    if(a>b)
    {
        printf(" A is Greater than B \n");
    }
    else if (a>c)
    {
        printf("A is Greater than B \n");
    }
    else if(b>c)
    {
        printf(" B is Greater than C \n");
    }
    else
    {
        printf(" C is Greater than  A & B \n");
    }
return 0;
}