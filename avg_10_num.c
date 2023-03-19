#include<stdio.h>

int main(){
	int a=1,n,sum=0,avg;
	printf("Enter ten positive number:\n");
	while(a<=10)
	{
		printf("Enter the Number: %d ",a);
		scanf("%d",&n);
		
		sum = sum + n;
		a++;
		
		if(n<0){
			printf("Enter Only Postive Numbers");
		}
	
	}
	avg = sum / 10;
	printf("Average of ten number is %d",avg);
	return 0;
}
