#include<stdio.h>
#include<string.h>
void reverse(char arr[],int index)
{
    if(index < 0)
    {
        return;
    }
    printf("%c",arr[index]);
    reverse(arr,index-1);
}
int main()
{
    char arr[300];
    printf("enter a array:");
    scanf("%s",arr);
    int n=strlen(arr);
    reverse(arr,n);
}