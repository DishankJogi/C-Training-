#include<stdio.h>

int main()
{
	FILE *ap,*fp;
	char buff[200];
	
	ap = fopen("Company.txt","w");
	fp = fopen("Company.txt","r");
	fprintf(ap,"Hello , SIQOL....\n");
	fprintf(ap,"I am Dishank Jogi\n");
	
	while(fscanf(fp,"%s",buff)!=EOF)
	{
		printf("%s",buff);
	}
	fclose(ap);
	fclose(fp);
}