#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef union person{
        char name[40];
        int height;
        float weight;
        int rollno;
        //char tier[40];
}person;
person s1;

s1.rollno=33;
s1.height=209;
s1.weight=12;
//strcpy(s1.tier,"prakashshegane");
strcpy(s1.name,"prakash");

printf("%f\n",s1.weight);
printf("%d\n",s1.rollno);
printf("%d\n",s1.height);
printf("%s\n",s1.name);
//printf("%s\n",s1.tier);
}