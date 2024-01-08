#include<stdio.h> 
int main()
{
    int  fahrenheit, celsius;
    printf("please enter  fahrenheit as an integer");
    scanf("%d",&fahrenheit);
    celsius=(fahrenheit -32)/1.8;
    printf("\n %d fahremheit is %d celsius.\n",fahrenheit,celsius);
    return 0;
}