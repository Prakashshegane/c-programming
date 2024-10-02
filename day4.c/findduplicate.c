#include<stdio.h>
int main()
{
    int arr[7]={1,44,3,22,55,3,77};
    for(int i=0;i<7;i++)
    {
    for(int j=i+1;j<7;j++)
    {
        if(arr[i]==arr[j])
        {
            printf("%d is the duplicate number",arr[i]);
        }
    }
 }
}