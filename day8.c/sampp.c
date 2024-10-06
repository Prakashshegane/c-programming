#include<stdio.h>
int main()
{
    int i;
    char a[] = "";
    if(printf("%s", a))
        printf("The string is empty");
    else
        printf("%s",a);
    return 0;
}
