#include<stdio.h>

int main()
{
	int n,i;
	printf("enter the number of elements in array :");
	scanf("%d",&n);
	
	int arr[n]; 
	

	// int even[];
	// int odd[];
	for(i=0;i<n;i++)
	{
	    printf("Enter elements in the array:");
		scanf("%d",&arr[i]);
	}
	printf("\n Even number array is:");
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d\t",arr[i]);
			
		}
	}
	printf("\n Odd number array is:");
	for(int i=0;i<n;i++)
    {
		if(arr[i]%2==1)
		{
			printf("%d\t", arr[i]);
		}
    }
}