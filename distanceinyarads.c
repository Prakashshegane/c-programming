#include<stdio.h>
int main()
{
    int miles =26, yarads=385;
    double kilometers;
    kilometers=1.609*(miles + yarads/1760.0);
    printf(" a marthon is %lf kilometers ",kilometers);
    return 0;
}