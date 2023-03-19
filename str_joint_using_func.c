
#include<stdio.h>
//Function Definition
int joint_string(char name[],char surname[])
{
    int i,j;
    while(name[i]!='\0')
    {
        i++;
    }
    while(surname[j]!='\0')
    {
        name[i]=surname[j];
        i++;
        j++;
    }
    name[i]='\0';
    printf("Joint: %s ",name);
}
int main()
{
    char str1[16],str2[16];
    printf("Enter the Name String:");
    scanf("%[^\n]%*c",str1);
    printf("Enter the Surname:");
    scanf("%[^\n]%*c",str2);
    joint_string(str1,str2);
}