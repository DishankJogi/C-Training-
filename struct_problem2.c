//C program to Calculate the total salary of the employees a
//Total salary = Basic + DA + HRA
//DA = 10% of basic
//HRA = 5% of basic
//Display the name, age and total salary of the employees


#include<stdio.h>
struct employee
{
    char name[25];
    int age;
    int basic;
};
void display_employee(struct employee);
struct employee e1[4];
int main()
{
    int i;
    for(i=0;i<4;i++)
    {
        printf("Enter the name:");
        scanf("%s",e1[i].name);
        printf("Enter the age:");
        scanf("%d",&e1[i].age);
        printf("Enter the Basic_salary:");
        scanf("%d",&e1[i].basic);
    }
    display_employee(e1[i]);
}

void display_employee(struct employee e)
{
    int i,da,hra,basic,Total_Salary;
    for(i=0;i<4;i++)
    {
        printf("Employee %d\n",i+1);
        printf("Name :%s\n age:%d\n basic:%d\n",e1[i].name,e1[i].age,e1[i].basic);
		basic = e1[i].basic;
		da = (basic*10)/100; 
		printf("da:%d\n",da);
		hra =(basic*15)/100;
		printf("hra:%d\n",hra);
		Total_Salary=basic+da+hra;
		printf("total_salary:%d\n",Total_Salary);
		
		
    }
}
    
