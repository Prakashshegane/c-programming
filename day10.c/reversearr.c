#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    puts("enter a string:");
    scanf("%s",str);
    int n=strlen(str);
    printf("%d",n);
   for(int i=0;i<n;i++)
   {
    for(int j=n-1;j==i;i++)
    {
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
   }
   }
    puts("the reverse string is:");
    printf("%s",str);
}