#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct students{
        int rollno;
        int yearofjoining;
        char name[40];
        char dept[80];
        char course[40];
    }students;
void check(students s1,students s2)
{
    if(strcmp(s1.dept,s2.dept)==0)
    {
        printf("both are in the same dipartment");
    }
    else{
        printf("not in the same dipartment");
    }
}
int main()
{
    students s1,s2;
    s1.rollno=20;
    s1.yearofjoining=2004;
    strcpy(s1.course,"ece");
    strcpy(s1.dept,"electronics");
    strcpy(s1.name,"ece");
    s2.rollno=20;
    s2.yearofjoining=2004;
    strcpy(s2.course,"ece");
    strcpy(s2.dept,"electronics");
    strcpy(s2.name,"ece");
    check(s1,s2);
}