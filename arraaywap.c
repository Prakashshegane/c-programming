#include<stdio.h>
void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}
int main()
{
    int a[10],n,i,j,temp;
    printf("enter size of array :\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    printf("before sorting array is :\n");
    display(a,n);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }

    }
    printf("after the sorting array is :\n");
    display(a,n);
    }