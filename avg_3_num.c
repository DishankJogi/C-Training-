#include<stdio.h>

int main(){
 int a,b,c,Avg;
 
 printf("Enter the value of A = ");
 scanf("%d",&a);
 
 printf("Enter the value of B = ");
 scanf("%d",&b);
 
 printf("Enter the value of C = ");
 scanf("%d",&c);
 
 Avg= a + b + c;
 Avg=Avg/3;
 printf("Average is %d ", Avg);
 
 return 0;
 
}