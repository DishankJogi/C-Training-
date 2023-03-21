#include<stdio.h>

int main()
{
	FILE *data;
	
	data=fopen("Name.txt","w+");
	
	fputs("Hello I am Dishank",data);
	fseek(data,11,SEEK_SET);
	fputs("Darshan",data);
	fclose(data);
}