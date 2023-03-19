#include<stdio.h>
int main()
{
	int sum=0;
	int a1[10]; //Array 1 dimensonal 
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("Enter the array element:");
		scanf("%d",&a1[i]);
		printf("The Value of %d element is = %d\n",i,a1[i]);
		printf("The Address of %d element is = %d\n",a1[i],&a1[i]);
		sum = sum + a1[i];	
	}
	printf("sum of all the array elements:%d",sum);
	
}