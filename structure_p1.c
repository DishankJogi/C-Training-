#include<stdio.h>
#include<string.h>

struct staff
{
    int employee_id;
    char name[30];
    char designation[30];
};
int main()
{
    struct staff s1,s2,s3,s4;
    printf("Staf List Of SIQOL\n");
    //Employee 1
    s1.employee_id=1;
    strcpy(s1.name,"Manishbhai Narani");
    strcpy(s1.designation,"Founder");
    printf("Employee_id:%d\n",s1.employee_id);
    printf("Name of Employee: %s\n",s1.name);
    printf("Designation: %s\n",s1.designation);
    // Employee 2
    s2.employee_id=2;
    strcpy(s2.name,"Pratikbhai Panchal");
    strcpy(s2.designation,"Co-Founder");
    printf("Employee_id:%d\n",s2.employee_id);
    printf("Name of Employee: %s\n",s2.name);
    printf("Designation: %s\n",s2.designation);
    //Employee 3
    s3.employee_id=3;
    strcpy(s3.name,"Darshan Rathod");
    strcpy(s3.designation,"Embedded Software Enigneer");
    printf("Employee_id:%d\n",s3.employee_id);
    printf("Name of Employee: %s\n",s3.name);
    printf("Designation: %s\n",s3.designation);
    //Employee 4
    s4.employee_id=4;
    strcpy(s4.name,"Dishank Jogi");
    strcpy(s4.designation,"Embedded Intern");
    printf("Employee_id:%d\n",s4.employee_id);
    printf("Name of Employee: %s\n",s4.name);
    printf("Designation: %s\n",s4.designation);
    
    // For Address printing
    printf("Adress of employee id:%u\n",&s1.employee_id);//Contatins 4 Bytes
    printf("adress of name of employee: %u\n",s1.name);//Contains 30 Bytes
    printf("adress of name of designation: %u\n",s1.designation);//Contains 30 Bytes
    
}