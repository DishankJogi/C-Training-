#include<stdio.h>

struct train_info
{
    char train_name[50];
    int hours;
	int min;
	char time_format[4];
};
void train_info_display(struct train_info);
struct train_info train[1];
int main()
{
    
    int i;
    for(i=0;i<1;i++)
    {
        printf("Enter the Train Name:");
        scanf("%s",train[i].train_name);
        printf("Enter the train arrival Hour:");
        scanf("%d",&train[i].hours);
		printf("Enter the train arrival time Minutes:");
        scanf("%d",&train[i].min);
		printf("Enter the train arrival time format:");
        scanf("%s",train[i].time_format);
    }
    train_info_display(train[i]);
}

void train_info_display(struct train_info t )
{
    int i,hr,min;
	char f;
    for(i=0;i<1;i++)
    {
		char *timef=train[i].time_format;
		char *timer="pm";
		if(*timef==*timer)
		{
			printf("**24 Hours**");
			hr=train[i].hours;
			printf("%d\n",hr+12);
			min=train[i].min;
			printf("%d\n",min+00);
		}
		else
		{
			printf("Name Of Train : %s\n Arrival Hours:%d\n Arrival min:%d\n Arrival format:%s\n",train[i].train_name,train[i].hours,train[i].min,train[i].time_format);
		}
		
    }
    
}