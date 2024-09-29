/*find the differwnce between the sum of element at even indices to the sum 
of element at odd indices*/
#include<stdio.h>
int main()
{
    int sumeven=0,sumodd=0,difference,i,arr[6]={1,2,3,4,5,6};
    for(i=0;i<6;i++)
    {
        if(i%2==0)
        {
            sumeven=sumeven+arr[i];
        }
        else{
            sumodd=sumodd+arr[i];
        }
    }
 difference=sumeven-sumodd;
 printf("difference is =%d",difference);
}