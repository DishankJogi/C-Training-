#include<stdio.h>


struct car_collection
{
	char brand[30];
	char model[25];
	char fuel_type[10];
	int seat_capacity;
	
};

void cars_display(struct car_collection);

struct car_collection c1[5];

int main()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the Brand Name:");
        scanf("%s",c1[i].brand);
        printf("Enter the Model Name:");
        scanf("%s",c1[i].model);
        printf("Enter the Fuel Type:");
        scanf("%s",c1[i].fuel_type);
        printf("Enter the seat capacity:");
        scanf("%d",&c1[i].seat_capacity);
    }
    cars_display(c1[i]);
}
void cars_display(struct car_collection c)
{
    int i=0;
	printf("\"This My Car Collection\"\n");
    for(i=0;i<5;i++)
        {
            printf("Brand:%s\n Model:%s\n fuel type:%s\n seating capacity:%d\n",c1[i].brand,c1[i].model,c1[i].fuel_type,c1[i].seat_capacity);
        }
}