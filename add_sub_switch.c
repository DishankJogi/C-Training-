#include<stdio.h>
int main()
{
    int a,b, sum,sub;
    char o;
    printf("Enter the value of A : ");
    scanf("%d",&a);
    printf("Enter the value of B : ");
    scanf("%d",&b);
	printf("Enter the sign + or - :");
	scanf("%c",&o);
    switch (a,b)
    {
    case '+':
        sum = a+b;
        printf("The a+b: %d\n ",sum);
        break;
    case '-':
        sub = a-b;
        printf("The Subtraction of a-b: %d\n", sub);
        break;
    default:
        break;
    }
    return 0;

}