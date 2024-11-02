#include<stdio.h>
#include<string.h>
void reverse(char *str,int length)
{
    if(length<0)
    {
        return ;
    }
    printf("%c",str[length-1]);
    reverse(str,length-1);
}
int main()
{
    char str[]="prakash";
    int length=strlen(str);
    reverse(str,length);
    return 0;
}