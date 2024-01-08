//function with argument and return value
 #include<stdio.h>
int find_max(int x,int y)
{
   int max;
   if(x>y)
   max=x;
   else
   max=y;
   return max;
}
int main()
{
 int x,y,z;
 printf("enter the x nad y values");
 scanf("%d%d",&x,&y);
 z=find_max(x,y);
 printf("%d",z);
}