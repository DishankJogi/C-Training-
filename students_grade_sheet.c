#include<stdio.h>

int marks(int sub1,int sub2,int sub3,int sub4);

int main()
{
	int sub1,sub2,sub3,sub4;
	
	printf("Enter the marks of Sub1=");
	scanf("%d",&sub1);
	if (sub1<35)
	{
		printf("Fail\n");
	}
	
	printf("Enter the marks of Sub2=");
	scanf("%d",&sub2);
	if (sub2<35)
	{
		printf("Fail\n");
	}
	
	printf("Enter the marks of Sub3=");
	scanf("%d",&sub3);
	if (sub3<35)
	{
		printf("Fail\n");
	}
	
	printf("Enter the marks of Sub4=");
	scanf("%d",&sub4);
	
	if (sub4<35)
	{
		printf("Fail\n");
	}
	
	marks(sub1, sub2, sub3, sub4);
}

int marks(int j1,int j2,int j3,int j4)
{
	float percentage,total;
	total=j1+j2+j3+j4;
	printf("Total is = %.2f\n",total);
	percentage = (total / 400) * 100;
	printf("Percentage is = %.2f\n",percentage);
	
	if (percentage>=90)
	{
		printf("Percentage is %f anf Grade is A",percentage);
	}
	else if (percentage>=80)
	{
		printf("Percentage is %f anf Grade is B",percentage);
	}
	else if (percentage>=70)
	{
		printf("Percentage is %f anf Grade is C",percentage);
	}
	else
	{
		printf("Congrats You Have Cleared This Exam");
	}
}