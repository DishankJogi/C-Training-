#include<stdio.h>

int main()
{
	int a,x,y,z,x_cube,y_cube,z_cube;
	
	printf("Enter the Number",a);
	scanf("%d",&a);
	
	x=a%10;
	printf("X is %d\n",x);
	
	x_cube=x*x*x;
	printf("X_Cube is %d\n",x_cube);
	
	x = a/10;
	// printf("Value of A is %d\n",x);
	
	y = x%10;
	printf("Y is %d\n",y);
	y_cube=y*y*y;
	printf("Y_Cube is %d\n",y_cube);
	
	y = x/10;
	// printf("Value of B is %d\n",y);
	
	z = y%10;
	printf("Z is %d\n",z);
	z_cube=z*z*z;
	printf("Z_Cube is %d\n",z_cube);
	
	
	
	int Sum_cube=x_cube+y_cube+z_cube;
	printf("An Armstrong Number of %d is %d \n ",a,Sum_cube);
		
			if(Sum_cube ==a)
			{
			printf("%d An Armstrong Number\n ",a);
			}
			else
			{
			printf(" %d Not an Armstrong Number\n ",a);
			}
		
	return 0;
	
	
	
	
}