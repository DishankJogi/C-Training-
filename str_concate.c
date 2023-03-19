#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50],str2[50],str3[50];
    strcpy(str1,"Dishank ");
    strcpy(str2,"Jayendrabhai ");
    strcpy(str3,"Jogi");
    strcat(str1,str2);
    strcat(str1,str3);
    printf("%s",str1);
}