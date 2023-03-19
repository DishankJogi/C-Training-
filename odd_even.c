#include<stdio.h>

int main()
{
	int i , even = 0, odd = 0;
	int a1[10];
	
	for(i=0;i<10;i++)
	{
		printf("enter the element of a1[%d]:",i);
		scanf("%d",&a1[i]);
		if(a1[i] % 2 == 0)
		{
			even ++;
		}
		else
		{
			odd ++; 
		}
		printf("Even is : %d\n and odd is = %d\n",even,odd);
	}
	
}