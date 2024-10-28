#include<stdio.h>
#define pi 3.142
int main()
{
    float radius ,area;
    printf("enter a radius:");
    scanf("%d",&radius);
    area= pi* radius * radius;
    printf("the area of circle is:",area);
}