#include<stdio.h>
int main()
{
	FILE *data;
	int num;
	data = fopen("print.dat","rb");
	
	while(num = getw(data)!=EOF)
	{
		printf("%d\n",num);
	}
	fclose(data);
}