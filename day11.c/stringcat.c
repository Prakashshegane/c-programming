#include<stdio.h>
#include<string.h>
int main()
{
    char s1[40],s2[30];
    puts("enter a fist string:");
    gets(s1);
    puts("enter a second string:");
    gets(s2);
    strcat(s1,s2);
    puts(s1);
}