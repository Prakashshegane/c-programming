//in static its value is change but in auto its remains same
#include<stdatomic.h>
void increment()
{
   static int i=10;
    printf("i=%d",i);
    i++;
}
int main()
{
    increment();
    increment();
    increment();

    return 0;
}
