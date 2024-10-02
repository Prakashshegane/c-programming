#include<stdio.h>
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int i,small,larger=arr[0];
    //int sum[0];
    for(i=1;i<7;i++)
    {
        if(larger<arr[i])
        {
            larger=larger+arr[i];
        }

    }
printf("%d is the largest number",larger);

}