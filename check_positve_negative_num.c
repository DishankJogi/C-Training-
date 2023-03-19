#include<stdio.h>

int main(){
	int a;
	
	printf("enter the number:");
	scanf("%d",&a);
	
	if(a>0){
		printf("The given number is positive");
	}	
	else if(a<0){
		printf("The given number is negtive");
	}
	else{
		printf("The given number is Zero");
	}
	return 0;
}