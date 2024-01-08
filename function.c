#include<stdio.h>
int find_max(int x,int y)
{
    int max;
    if(x>y)
    max=x;
    else
    max=y;
     return(max);
}
void main(){
    int x,y;
    printf("enter a any two value :");
    scanf("%d%d",&x,&y);
    printf("maximum is :%d\n",find_max(x,y));

}

