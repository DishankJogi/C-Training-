#include<stdio.h>

int main()
{
	int arr[5]={5,10,15,20,25};
	int i = 0;
	for(i=0;i<5;i++)
	{
		printf("Values  : %d\n",arr[i]);
		printf("Address : %d\n",&arr[i]);
	}
	
}