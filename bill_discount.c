//Write a C program to prepare a bill for 10 books after 20% discount for your library

#include<stdio.h>

int main()
{
	int a,b,c,d,e,f,g,h,i,j;
	float Total,payamount,discount;
	
	
	printf("Enter the price of first book:");
	scanf("%d",&a);
	
	printf("Enter the price of Second book:");
	scanf("%d",&b);
	
	printf("Enter the price of Third book:");
	scanf("%d",&c);
	
	printf("Enter the price of fourth book:");
	scanf("%d",&d);
	
	printf("Enter the price of fifth book:");
	scanf("%d",&e);
	
	printf("Enter the price of sixth book:");
	scanf("%d",&f);
	
	printf("Enter the price of Seventh book:");
	scanf("%d",&g);
	
	printf("Enter the price of Eighth book:");
	scanf("%d",&h);
	
	printf("Enter the price of Nineth book:");
	scanf("%d",&i);
	
	printf("Enter the price of Tenth book:");
	scanf("%d",&j);
	
	
	//printf("Price of First Book= %d ",a);
	
	Total=a+b+c+d+e+f+g+h+i+j;
	printf("Total is %f\n ",Total);
	discount = (Total *20)/100;
	printf("Discount Amount = %f\n ", discount);
	payamount = Total - discount ; 
	printf("Final Price: %f\n ",payamount);
	
	
	return 0;
	
	
	
	
}