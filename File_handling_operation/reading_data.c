#include<stdio.h>

int main()
{
	FILE *rd;
	char buff[200];// array for storing the data...
	rd = fopen("Company.txt","r");//Open the file..
	//for reading the data
	while(fscanf(rd,"%s",buff)!=EOF)
	{
		printf("%s",buff);
	}
	fclose(rd);
}