#include<stdio.h>
int main()
{
    int n,i,revers;
    printf("enter a size of the array:");
    scanf("%d",&n);
    int arr[n];
     for(i=0;i<n;i++)
     {
        printf("enter a number:");
        scanf("%d",&arr[i]);
     }
     for(i=n-1;i>=0;i--)
     {
      revers=arr[i];
      printf("%d\n",revers);
     }
     return 0;

}