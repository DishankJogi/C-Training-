// to find the area of square , circle and rectangle.

#include<stdio.h>

float squareArea(float);
float CircleArea(float);
float rectangleArea(float,float);

int main()
{
	int z,y;
	float Area,Circle,Rectangle;
	printf("Enter the value z : ");
	scanf("%d",&z);
	
	printf("Enter the value y : ");
	scanf("%d",&y);
	
	Area=squareArea(z);
	printf("Area of Square is : %f\n",Area);
	Circle=CircleArea(z);
	printf("Area of Circle is : %f\n",Circle);
	Rectangle=rectangleArea(z,y);
	printf("Area of Rectangle is : %f\n",Rectangle);
	
}

float squareArea(float side)
{
	return side*side;
}

float CircleArea(float Radius)
{
	return 3.14*Radius*Radius;
}

float rectangleArea(float l,float h)
{
	return l*h;
}
