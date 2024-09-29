#include<stdio.h>
void fun(int arr[])
{
    int temp,i;
   /* for(i=0;i<2;i++)
    {
    max=arr[i];
    printf("%d",arr[i]);
    }*/
   temp=arr[1];
   arr[1]=arr[0];
   arr[0]=temp;
   printf("%d%d",arr[0],arr[1]);

}
int main()
{
    int arr[2]={1,2};
    fun(arr);
}