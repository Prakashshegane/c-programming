#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct student{
        int age;
        char name[90];
        int marks;
    }student;
    student a,b;
    strcpy(a.name,"sh");
    a.age=49;
    a.marks=44;
    b=a;
    strcpy(b.name,"prakash");
    printf("%s\n",a.name);
    printf("%d\n",a.age);
    printf("%d\n",a.marks);
    printf("%s\n",b.name);
    printf("%d\n",b.age);
    printf("%d\n",b.marks);

}