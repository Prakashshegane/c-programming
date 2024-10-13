#include<stdio.h>
#include<string.h>
int main()
{
    struct person{
        char name[40];
        float salary;
        int age;
    }ankit;
    ankit.age=39;
    strcpy(ankit.name,"naveen");
    ankit.salary=1000;
    printf("%d\n",ankit.age);
    printf("%f\n",ankit.salary);
    printf("%s\n",ankit.name);
}