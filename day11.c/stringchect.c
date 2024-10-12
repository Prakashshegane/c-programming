#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,flagh=0;
    char s1[20]="prakash";
    char s2[20]="prakash";
    for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            flagh=1;
            break;
        }
    }
    if(flagh==0)
    {
        printf("the string is equal");
    }
    else
    {
        printf("the string are not equal");
    }
}