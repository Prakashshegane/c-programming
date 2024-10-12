#include<stdio.h>
#include<string.h>
int main()
{
    char s1[40]="prakash";
    char s2[]="prakash";
    if(strcmp(s1,s2)==0)
    {
        printf("the string is equal");
    }
    else{
        printf("the string is not equal");
    }
}