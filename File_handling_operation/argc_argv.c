#include<stdio.h>
#include<string.h>
int main(int argc , char *argv[])
{
	printf("Size of Argc is : %d\n",argc);
	int choice;
	if(strcmp(argv[1],argv[2])==0)
	{
		printf("1. Add Student Detail\n");
		printf("2. Delete the details \n");
		printf("3. Update the details \n");
		printf("4. Display the details \n");
		printf("5. Exit \n");
		scanf("%d", &choice);   
   }
   else
   {
	   printf("No");
   }
}