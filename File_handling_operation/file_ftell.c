#include<stdio.h>

int main()
{
	FILE *data;
	int length;
	
	data=fopen("Name.txt","r");
	fseek(data, 0, SEEK_END); // Moving File Pointer 
	length = ftell(data);
	fclose(data);
	printf("Size of file:%d bytes",length);
	
}