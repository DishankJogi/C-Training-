#include<stdio.h>
int main()
{
    int i=0;
    char a1[51];
    scanf("%s",a1);
    
    while(a1[i]!='\0')
    {
        i++;
    }
    if(i%2==0)
    {
        printf("1");
    }
    else
    {
        printf("2");
    }
}