#include<stdio.h>
#include<string.h>
int main()
{
    struct books{
        char name[80];
        float price;
        int pages;
    }a,b,c;
    strcpy(a.name,"haven");
    a.price=590;
    a.pages=400;
    printf("%f\n",a.price);
    printf("%d\n",a.pages);
    printf("%s\n",a.name);
    strcpy(b.name,"bottom");
    b.price=59;
    b.pages=490;
    printf("%f\n",b.price);
    printf("%d\n",b.pages);
    printf("%s\n",b.name);
}  