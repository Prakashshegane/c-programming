#include<stdio.h>
#include<string.h>
int main()
{
    char str[80];
    puts("enter a string");
    gets(str);
    int n=strlen(str);
    for(int i=0;i<=n;i++)
    {
        for(int j=n-1;j<n;i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;

    }
    }
    puts(str);
}