#include<stdio.h>
int a;
void myproc()
{
    int a=2;
    while(a==2)
    {
        int a=3;
        printf("a=%d\n",a);
        break;
    }
    printf("a=%d\n",a);
}
void main()
{
  a=1;
  myproc();
  printf("a=%d\n",a);

}