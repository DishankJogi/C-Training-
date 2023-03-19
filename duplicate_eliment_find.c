#include <stdio.h>

int main()
{
    int i, j, size, count = 0;
    printf("Enter size of the array : ");
    scanf("%d", &size);
	int arr1[size];

	// User Input 
	printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr1[i]);	
    }
	printf("Duplicate Elements are = ");
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
			
            if(arr1[i] == arr1[j])
            {
				
                count++;
				printf("%d \t",arr1[j]);
                break;
            }
        }
    }

    printf("\nTotal of Duplicate elements in array is = %d", count);

}