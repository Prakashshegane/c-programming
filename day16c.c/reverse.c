#include<stdio.h>
#include<string.h>
void reverse(char str[],int length)
{
    for(int i=0;i<length/2;i++)
    {
        int temp=str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=temp;
    }
}
int main()
{
    char str[]="india";
    int length=strlen(str);
    reverse(str,length);
    printf("the reversed array is:");
    for(int i=0;i<length;i++)
    {
        printf("%c",str[i]);
    }
}