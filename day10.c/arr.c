#include<stdio.h>
#include<string.h>
void reverse(char *str)
{
    int i;
  int n=strlen(str);
  for(int i=n-1;i>=0;i--)
  {
    printf("%c",str[i]);
  }
}
int main()
{
    char str[]="prakash";
    reverse(str);
}