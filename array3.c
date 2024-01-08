//wther a given element in available inside the array or not
#include<stdio.h>
void Search(int a[],int n,int key)
{
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("element is not found");
    else
    printf("element is  found");
}
int main()
{
int i,n,a[10],key;
printf("enter the array size: \n");
scanf("%d\n",&n);
printf("enter %d elements: \n",n);
for(i=0;i<n;i++)
scanf("%d\n",&a[i]);
printf("enter element to be searched :\n ");
scanf("%d\n",&key);
Search(a,n,key);
}