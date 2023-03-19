#include<stdio.h>
int main()
{
    int i;
    char str[]="Dishank Jogi";
    while(i<str[i])
    {
        printf("character : %c\n",str[i]);
        printf("Address : %u\n",&str[i]);
        i++;
    }
}