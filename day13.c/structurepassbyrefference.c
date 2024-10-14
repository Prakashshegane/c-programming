#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct person{
        int age;
        float weight;
        float height;
        char name[40];
    }person;
void change(person *x)
{
    /* (*x).age=333; */
    x->age=222;
    (*x).height=3434;
    (*x).weight=2;
    strcpy((*x).name,"vishal");
}
int main()
{
    person p1;
    p1.age=12;
    p1.height=14;
    p1.weight=30;
    strcpy(p1.name,"pra");
    person *x=&p1;
    printf("%d\n",p1.age);
    printf("%f\n",p1.weight);
    printf("%f\n",p1.height);
    printf("%s\n",p1.name);
    change(&p1);
    printf("%d\n",p1.age);
    printf("%f\n",p1.weight);
    printf("%f\n",p1.height);
    printf("%s\n",p1.name);
}