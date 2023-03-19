#include<stdio.h>
#include<stdlib.h>

int main()
{
	//case 1:
	int *ptr = (int*)malloc(5*sizeof(int));
	ptr[1] = 23;
	ptr[2] = 13;
	ptr[3] = 43;
	ptr[4] = 53;
	ptr[5] = 83;
	free(ptr);
	printf("%d\n",ptr);// generate garbage value
}