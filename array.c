//it is a compile time initilisation 
#include<stdio.h>
int main()
{
    int i;
    int array[6]={1,3,4,5,6,6};
    printf("elements of array are ::\n");
    for(i=0;i<6;i++)
    printf("%d\n",array[i]);
    return  0;
}