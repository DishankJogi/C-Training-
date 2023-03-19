#include<stdio.h>
int check(int num);

int main()
{
	int i;
	int array1[10];
	printf("Enter the array elements: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&array1[i]);
		check(array1[i]);
	}
	
}

int check(int num)
{
	if(num%2==0)
		printf("%d is even\n",num);
	else
		printf("%d is odd\n",num);

}