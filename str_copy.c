#include<stdio.h>

int main()
{
    char str1[16]="DishankJogi";
    char str2[8];
    int i;
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    printf("length of str1 is : %d\n",i);
    str2[i]='\0';
    printf("%s",str2);
}