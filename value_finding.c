#include<stdio.h>

int main()
{
	int i,value,a1[5];
	
	printf("Enter the value : ");
	scanf("%d",&value);
	for(i=0;i<5;i++)
	{
		// printf("loop %d value is %d = %d \n",i,value,a1[i]);
		printf("Enter the value of array element:");
		scanf("%d",&a1[i]);
		if(value == a1[i])
		{
			printf("value has been found\n");
			break;
		}
		else 
			continue;
		
	}
	if(i == 5)
	{
		printf("value not found");
	}
}