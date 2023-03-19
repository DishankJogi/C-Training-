#include<stdio.h>

int main()
{
	float price[3];
	
	printf("Enter the Price1 is :");
	scanf("%f",&price[0]);
	
	
	printf("Enter the Price2 is :");
	scanf("%f",&price[1]);
	
	
	printf("Enter the Price3 is :");
	scanf("%f",&price[2]);
	
	
	printf("Final Cost_1 with Gst is : %f\n",price[0]+(0.18 * price[0]));
	printf("Final Cost_2 with Gst is : %f\n",price[1]+(0.18 * price[1]));
	printf("Final Cost_3 with Gst is : %f\n",price[2]+(0.18 * price[2]));
	
	
	
}