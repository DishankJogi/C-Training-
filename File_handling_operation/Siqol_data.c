#include<stdio.h>

void main()
{
	FILE *data;
	int id,num,i;
	char name[30];
	float salary;
	
	printf("Total No.of Employee:");
	scanf("%d",&num);
	data = fopen("employee_data.txt","w+");
	if (data==NULL)
	{
		printf("File Does not Exist\n");
		return;
	}
	else
	{
		for(i=0;i<num;i++)
		{
			
			printf("Enter the id\n");
			scanf("%d",&id);
			fprintf(data,"EMployee_ID = %d\n",id);
			printf("Enter the name\n");
			scanf("%s",&name);
			fprintf(data,"EMployee_Name = %s\n",name);
			printf("Enter the Salary\n");
			scanf("%f",&salary);
			fprintf(data,"Salary=%f\n",salary);
			fprintf(data,"\n");
		}
	}
	fclose(data);
}