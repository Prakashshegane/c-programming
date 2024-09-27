#include <stdio.h>
int main()
{
    int N; 
    scanf("%d",&N); 
int ips, sum=0;
    for(ips=1; ips < N;ips++)
    {
        if(N%ips==0)
            sum+=ips;
    }
 
    if(sum==N)
        printf("\n%d is a perfect number.",N);
    else
        printf("\n%d is not a perfect number.",N);
}