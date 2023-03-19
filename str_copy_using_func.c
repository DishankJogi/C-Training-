#include<stdio.h>

int copy_str(char x[],char y[])
{
    int i=0;
    while(y[i]!='\0')
    {
        x[i]=y[i];
        i++;
    }
    x[i]='\0';
    printf("After copying String: %s\n",x);
}

int main()
{
    char a[15],b[15];
    printf("Enter the string for A\n");
    scanf("%[^\n]%*c",a);
    
    printf("Enter the string for B\n");
    scanf("%[^\n]%*c",b);
    
    copy_str(a,b);
}