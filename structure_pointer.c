#include<stdio.h>

struct car
{
    char brand[25];
    char name[30];
    int year_model;
    char colour[10];
};
int main()
{
    struct car c1={"Mahindra","Thar",2023,"Black"};
    struct car *ptr_c1=&c1;
    printf("Brand:%s\n",ptr_c1->brand);
    printf("Name:%s\n",ptr_c1->name);
    printf("Year:%d\n",ptr_c1->year_model);
    printf("Colour:%s\n",ptr_c1->colour);
}