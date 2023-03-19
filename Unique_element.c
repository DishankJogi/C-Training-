#include <stdio.h>

int main()
{
    int i, j, k ,size, count = 0;
    printf("Enter size of the array : ");
    scanf("%d", &size);
	int a1[size];

	// User Input 
	printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a1[i]);	
    }
	printf("Unique Elements are = ");
    for(i=0; i<size; i++)
    {
		count = 0;
        for(j=0; j<i; j++)
        {
			
            if(a1[i] == a1[j])
            {
                count++;
            }
        }
		for(k = i+1; k<size ; k++)
		{
			if(a1[i]==a1[k])
			{
				count++;
			}
		}
		if(count == 0)
		{
		 printf("%d\t",a1[i]);
		}
    }
	printf("\n");
}