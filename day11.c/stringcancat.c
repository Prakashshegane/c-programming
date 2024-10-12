#include<stdio.h>
#include<stdio.h>
int main()
{
    char s1[40],s2[40];
    puts("enter a first string:");
    gets(s1);
    puts("enter a second string:");
    gets(s2);
    int len1=strlen(s1);
    int len2=strlen(s2);
    for(int i=0;i<=len2;i++)
    {
        s1[len1+i]=s2[i];
    }
    printf("string after concatenation is %s:",s1);
    puts(s2);
}