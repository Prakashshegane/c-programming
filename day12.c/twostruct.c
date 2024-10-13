#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct date{
        int day;
        int month;
        int year;
    }date;
    date a,b;
/*     a.day=3;
    a.month=6;
    a.year=3000;
    b=a;
    if(a.day==b.day && a.month==b.month && a.year==b.year)
    {
        printf("two dates are similar");
    }
    else{
        printf("not similar");
    } */
    a.day=3;
    a.month=6;
    a.year=3000;
   /*  b.day=43;
    b.month=43;
    b.year=4352; */
    b=a;
    bool flag=true;
    if(a.day!=b.day) flag=false;
    if(a.month!=b.month) flag=false;
    if(a.year!=b.year) flag=false;

    if(flag==true) printf("similar");
    else printf("not similar");

}