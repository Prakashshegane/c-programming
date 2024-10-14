#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct person{
        int age;
        int height;
        float weight;
        char name[30];
    }person;
    person p1={10,77,20,"sagar"};
    /* p1.weight=49;
    strcpy(p1.name,"sagar"); */
    printf("%d\n",p1.age);
    printf("%d\n",p1.height);
    printf("%f\n",p1.weight);
    printf("%s\n",p1.name);
}