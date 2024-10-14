#include<stdio.h>
#include<stdio.h>
#include<stdbool.h>
int main()
{
    typedef struct person{
        int age;
        float weight;
    }person;
    person p1;
    p1.age=4;
    p1.weight=23;
    person *x=&p1;//cchange the value using pointer
    (*x).age=40;
    (*x).weight=300;
    printf("%d\n",p1.age);
    printf("%f",p1.weight);
}  