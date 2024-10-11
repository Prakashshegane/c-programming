#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    puts("enter a string:");
    gets(str);
    puts(str);
    int n=strlen(str);
    printf("%d",n);
}