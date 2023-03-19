#include<stdio.h>

int main(){
    float radius , Area_of_circle;
    printf("Enter Value of Radius=");
    scanf("%f",&radius);

    Area_of_circle = 3.14*radius*radius;
    printf("Area of Circle is %f",Area_of_circle);

    return  0;
}