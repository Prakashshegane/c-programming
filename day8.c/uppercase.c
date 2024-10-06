#include<stdio.h>
#include<string.h>
int main()
{
    int n,count=0;
     char  line[20];
     printf("enter a chsrecter:");
     scanf("%s",line);
     n=strlen(line);
     for(char i=0;i<n;i++)
     {
        if(isupper (line[i]))
        count++;
     }
     printf("%d letters are uppercase.",count);
}