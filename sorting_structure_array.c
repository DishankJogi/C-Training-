#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct records_company
{
    char name[30];
    int age;
    float salary;
};
struct records_company emp[5];
struct records_company *ptr=&emp[5];
int main()
{
    int i,j,n;
    for(i=0;i<5;i++)
    {
        printf("Enter the Detail of Employee %d\n",i+1);
        printf("Enter the Name=");
        scanf("%s",ptr->name);
        printf("Enter the age=");
        scanf("%d",&ptr->age);
        printf("Enter the salary=");
        scanf("%f",&ptr->salary);
    }
    n=5;
    for(i=0;i<5;i++)
    {
        printf("Details of Employee %d\n",i+1);
        printf("Enter the Name=%s\n",ptr->name);
        printf("Enter the age=%d\n",ptr->age);
        printf("Enter the salary=%f\n",ptr->salary);
    }
    sorting(emp[5],n);
}
void sorting(struct records_company emp[5])
{   
    int i,j,n=5;
    struct records_company temp;
    for(i=0;i<n-1;j++)
    {
        for(j=0;j<(n-1-j);j++)
        {
            if(ptr[j].name,ptr[j+1].name)
            {
                temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }
}