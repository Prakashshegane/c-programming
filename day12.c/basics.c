#include<stdio.h>
#include<string.h>
int main()
{
    struct students{
        char name;
        int roll_no;
        int marks;
        float percentage;
        char grade;
    }prakash,vishal,akash;
    prakash.name='prakash';
    prakash.marks=90;
    prakash.percentage=90;
    prakash.grade='A';
    printf("display the praksh percentage:%.2f\n",prakash.percentage);
    printf("display the praksh grade:%c",prakash.grade);


}