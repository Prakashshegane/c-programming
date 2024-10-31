#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[]="STRING not upper";
    int size=strlen(str);
    int countupper=0,countlower=0;
    for(int i=0;i<size;i++)
    {
        if(isupper(str[i]))
        {
            countupper++;
        }
        else if(islower(str[i]))
        {
            countlower++;
        }
    }
    printf("the no of upeecase letter is : %d\n",countupper);
    printf("the no of lowercase letters is :%d",countlower);
}