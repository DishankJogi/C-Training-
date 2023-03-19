#include<stdio.h>

void a1sort(int,int*);


int main()
{
	int i,size;
	printf("Enter the Size of Array: ");
	scanf("%d",&size);
	
	int a1[size];
	for(i=0;i<size;i++)
	{
		printf("Enter the Array[%d] element :",i);
		scanf("%d",&a1[i]);
	}
	a1sort(size,a1);
	
	
}

void a1sort(int size , int *ptr)
{
	int i,j,x;
	for (i = 0; i < size; i++) 
	{ 
        for (j = i + 1; j < size; j++) 
		{ 
            if (*(ptr + j) < *(ptr + i)) 
			{ 
                x = *(ptr + i); 
                *(ptr + i) = *(ptr + j); 
                *(ptr + j) = x; 
            } 
        } 
    } 
	for (i = 0; i < size; i++)
	{
        printf("Sorting the Array : %d\n ", *(ptr + i)); 
	} 
}