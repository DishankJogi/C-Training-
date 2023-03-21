#include<stdio.h>

int main()
{
	FILE *data;
	data=fopen("Name1.txt","w+");
	
	fputs("Dishank",data);
	rewind(data);
	
	fputs("Jogi ",data);
	
	fclose(data);
}