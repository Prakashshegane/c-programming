#include <stdio.h>

void reverse(char *arr)
{
    if (*arr == '\0') 
    {
        return;
    }
    reverse(arr + 1);  
    printf("%c", *arr);  
}

int main()
{
    char arr[100] = "india";
    reverse(arr);  
    return 0;
}
