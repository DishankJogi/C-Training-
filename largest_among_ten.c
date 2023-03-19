//Write a C program to find the largest number among ten

#include<stdio.h>
int main()
{
	 int a, b, c, d, e, f, g, h, i, j, p, q, w, x, y, z, large;
	 
	 printf("Enter First integer numbers:");
	 scanf("%d",&a);
	 
	 printf(" Enter Second integer numbers:");
	 scanf("%d",&b);
	 
	 printf("Enter Third integer numbers:");
	 scanf("%d",&c);
	 
	 printf("Enter Four integer numbers:");
	 scanf("%d",&d);
	 
	 printf("Enter Five integer numbers:");
	 scanf("%d",&e);
	 
	 printf("Enter Six integer numbers:");
	 scanf("%d",&f);
	 
	 printf("Enter Seven integer numbers:");
	 scanf("%d",&g);
	 
	 printf("Enter Eight integer numbers:");
	 scanf("%d",&h);
	 
	 printf("Enter Nine integer numbers:");
	 scanf("%d",&i);
	 
	 printf("Enter Ten integer numbers:");
	 scanf("%d",&j);
	 
	 
	 x = (a > b? a : b); 
	 
	 y = (c > d? c : d);
	 
	 z = (e > f? e : f);
	 
	 p = (g > h? g : h);
	 
	 q = (i > j? i : j);
	 
	 w = x > y ? ( x > z ? x : z) : (y > z ? y : z) ;
	 
	 large = p > q ? ( p > w ? p : w) : (q > w ? q : w) ;
	 
	 printf("\n The largest number among 10 numbers : %d", large);
	 
	 return 0;
}