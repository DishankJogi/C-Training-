#include<stdio.h>

int sum_of_array(int a1[],int n)
 {
 	int i,sum=0;
 
    for(i=0; i<n; i++)
    {
         sum=sum + a1[i];
         
    }
 	return sum;
 }
int main()
{
	int n,sum;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int a1[n]; //Array 1 dimensonal 
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("Enter the array element:");
		scanf("%d",&a1[i]);
		
	}
	sum = sum_of_array(a1,n);
	printf("sum of all the array elements:%d",sum);
}
