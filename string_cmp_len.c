#include<stdio.h>
#include<string.h>

int main()
{
    char name1[15],name2[15];
    printf("Enter the Name 1:");
    scanf("%s",&name1);
    printf("Enter the Name 2:");
    scanf("%s",&name2);
    
    printf("Length of Name1: %d\n",strlen(name1));
    printf("Length of Name2: %d\n",strlen(name2));
    
    if (strcmp(name1,name2)==0)
    {
        printf("Both Are Equal");
    }
    else
    {
        printf("Not Equal");
    }
}

// Length 
#include<stdio.h>
#include<string.h>
//int string_len(char);//Function Declaration

int string_len(char x1[])//Function Definition
{
    int i=0;
    while(i<x1[i])
    {
        i++;
    }
    printf("%d",strlen(x1));
}

int main()
{
    char a1[20];
    printf("Enter the Name:");
    scanf("%[^\n]",a1);
    string_len(a1);// Function Call
}