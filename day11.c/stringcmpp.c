#include<stdio.h>
#include<string.h>
int main()
{
    char s1[90]="prakash";
    char s2[30]="prakash";
    int value=strcmp(s1 ,s2);
    if(value==0)
    {
        printf("the strings are equal");
    }
    else
    {
        printf("the strings are not equal");
    }
}