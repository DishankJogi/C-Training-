//Write a C program to print the series 1 1 2 3 5 8 13 21

#include<stdio.h>

int main(){
	int num,a=0, b=1,c,i;
	printf("Enter the number=");
	scanf("%d",&num);
	
	for(i=1; i<=num ;i++)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
		
	}
	return 0;
}