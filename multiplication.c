// return_type,function_name,arguments_with_data_type Declaration
// function_name,arguments() ,if return something from function definition than we have to create variable 
// and we have to store it to them________ calling
// return_type,function_name,arguments with data type,body of function,function_definition 

#include<stdio.h>

// int mul(int a,int b,int c); // Declaration
int c =7,d =7,e=7;
int mul(int g)
{
	
	return c*d*e*g;
	
}
void main()
{
	float f;
	float g =7.23;
	f = mul(g);
	printf("Answer is %f",f);

}

