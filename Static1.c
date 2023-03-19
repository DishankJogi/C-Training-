#include<stdio.h>

int function(void)
{
	static int count = 0;
	count++;
	
	return count;
}

int function2(void)
{
	int count1 = 0;
	count1++;
	
	return count1;
}

int main(void)
{
	printf("The value of Static Variable is : %d\n",function());
	printf("The value of Static Variable is : %d\n",function());
	
	printf("The value of Normal Variable is : %d\n",function2());
	printf("The value of Normal Variable is : %d\n",function2());
}
