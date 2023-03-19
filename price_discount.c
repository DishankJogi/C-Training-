#include<stdio.h>

int main()
{
	float price,discount_price,paidamount; 
	
	printf("Enter the Amount: ");
	scanf("%f",&price);
	
	if(price >= 1000 && price <= 5000)
	{
		discount_price = (price*20)/100;
		printf("Total Discount Price =%f \n",discount_price);
		paidamount=price - discount_price;
		printf("final amount is = %f \n",paidamount);
	}
	else if(price >= 500 && price <= 999)
	{
		discount_price = (price*15)/100;
		printf("Total Discount Price= %f \n",discount_price);
		paidamount = price - discount_price;
		printf("final amount is = %f\n",paidamount);
	}
	else if(price >= 50 && price <= 499)
	{
		discount_price=(price*10)/100;
		printf("Total Discount Price = %f\n",discount_price);
		paidamount = price - discount_price;
		printf("final amount is = %f\n",paidamount);
	}	
	else
	{
		printf("No Discount Under 50 Rupees\n");
	}
	return 0;
}