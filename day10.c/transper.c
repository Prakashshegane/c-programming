#include<stdio.h>
#include<string.h>
int main()
{
    char s1[12]="prakash";
    char s2[12]="shegane";
    /* int d=strlen(s1);
    int s=strlen(s2);
    printf("%d",s1); 
    printf("%d",s2); */
   /*  strcpy(s2,s1);
    printf("%s",s1); */
    strcat(s2,s1);
    printf("%s ",s2);
}