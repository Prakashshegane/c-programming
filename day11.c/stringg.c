#include<stdio.h>
int main()
{
  /*   char arr[40];
    printf("enter a string:");
    scanf("%s",&arr);
    printf("%s",arr); */
    char str[40];
    /* printf("enter a string:");
    gets(str);
    puts(str); */
    scanf("%s",str);
    printf("%s",&str[2]);
}