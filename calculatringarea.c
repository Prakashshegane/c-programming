#include<stdio.h>
#define PI 3.14
int main()
{
    int radius=6;
    float area;
    printf("enter a radius:");
    scanf("%d",&radius);
    area=PI*radius*radius;
    printf("area of circle is = %.2f",area);
    return 0;


}