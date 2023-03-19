#include<stdio.h>

int main()
{
	int i,max,min;
	int array1[10]={11,22,32,4,5,66,77,55,44,232};
	min = max = array1[0];
	for(i=1;i<10;i++)
	{
		if(array1[i]<min)
		{
			min = array1[i];
		}
		if(array1[i]>max)
		{
			max = array1[i];
		}
	}
	printf("maximum is = %d\t minimum is = %d",max,min);
}