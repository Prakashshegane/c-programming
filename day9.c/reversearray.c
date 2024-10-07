#include<stdio.h>
#include<string.h>
void reverse(char arr[])
{
    int n;
    n = strlen(arr);
    for(int i=n-1;i>=0;i--)
    {
       printf("%c",arr[i]);
    }
}
int main()
{
    char arr[40];
    printf("enter a array:");
    scanf("%s",&arr);
    reverse(arr);
}