#include<stdio.h>
#include<string.h>
int main()
{
    char str[49];
    int i=0;
    puts("enter a string");
    gets(str);
    int n=strlen(str);
/*     for(int i=0;str[i]!='\0';i++)
    {
        //if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    printf("string is :%s",str); */
    while(str[i]!='\0')
    {
        str[i]=str[i]-32;
        i++;
    }
    puts(str);
}