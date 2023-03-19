#include<stdio.h>

int user_details(char,int,int);

int main()
{
	char name;
	int age,standard;
	
	printf("Enter the name:\n");
	scanf("%c",&name);
	
	printf("Enter the Age:\n");
	scanf("%d",&age);
	
	printf("enter your standard:\n");
	scanf("%d",&standard);
	
	
	user_details(name,age,standard);
	
	return 0;

}

int user_details(char a,int b,int c)
{
	printf("Name is: %c\n",a);
	printf("Age is : %d\n",b);
	printf("Standard is :%d\n",c);
}