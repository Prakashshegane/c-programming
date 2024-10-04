#include<stdio.h>
void us()
{
    printf("i am in us\n");
    void aus();
    return;
}
void india()
{
    printf("i am in india\n");
    //void aus();
    us();
    return;
}
int main()
{
    india();
}
void aus()
{
    printf("i am in aus\n");
    return;
}