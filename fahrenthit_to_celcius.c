#include<stdio.h>

float Celcius(float);
float Fahrenhit(float);

int main()
{
	float a,b;
	float x,y;
	printf("Enter the fahrenhit value:");
	scanf("%f",&a);
	
	printf("Enter the celcius value:");
	scanf("%f",&b);
	
	x = Celcius(a);
	printf("Celcius is : %f \n",x);
	
	y   = Fahrenhit(b);
	printf("Fahrenhit is : %f \n",y);
	

}

float Celcius(float f)
{
	return (f-32)*5/9;
}


float Fahrenhit(float c)
{
	return c * 1.8 + 32;
}