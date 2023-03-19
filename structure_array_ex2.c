#include<stdio.h>
#include<string.h>

struct friends
{
    char name[25];
    int years_of_friendship;
    char expertise_sub[30];
};
int main()
{
    struct friends f1[7];
    int i,j;
    for(i=0;i<7;i++)
    {
        printf("Friend %d\n",i+1);
        printf("Name:");
        scanf("%s",f1[i].name);
        printf("Years of Friendship:");
        scanf("%d",&f1[i].years_of_friendship);
        for(j=0;j<3;j++)
        {
            printf("Enter Subject %d",j+1);
			printf("Test 1");
            scanf("%s",f1[i].expertise_sub[j]);
        }
    }
    for(i=0;i<7;i++)
    {
        printf("Name: %s\n",f1[i].name);
        printf("Years of Friendship: %d\n",f1[i].years_of_friendship);
        for(j=0;j<3;j++)
        {
            printf("%s\n",f1[i].expertise_sub[j]);
        }
    }
	return 0;
}