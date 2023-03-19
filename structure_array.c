#include<stdio.h>
#include<string.h>

struct family
{
    char name[30];
    char blood_relation[20];
    int age;
};
int main()
{
    struct family family_arr[4];
    int i=0;
    for(i=0;i<4;i++)
    {
        printf("Name:");
        scanf("%s",family_arr[i].name);
        printf("Blood Relation:");
        scanf("%s",family_arr[i].blood_relation);
        printf("Age:");
        scanf("%d",&family_arr[i].age);
    }
    for(i=0;i<4;i++)
    {
        printf("%s\n",family_arr[i].name);
        printf("%s\n",family_arr[i].blood_relation);
        printf("%d\n",family_arr[i].age);
    }
    return 0;
    
}