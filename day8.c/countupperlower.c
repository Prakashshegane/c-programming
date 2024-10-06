#include<stdio.h>
#include<string.h>
#include<ctype.h>
int upperlower(char *line)
{
     int count=0,countt=0;
    int n=strlen(line);
    for(int i=0;i<n;i++)
    {
        if(isupper(line[i]))
        {
            count++;
        }
        else{
            countt++;
        }
    }
    printf("%d\n",count);
    printf("%d",countt);
}
int main()
{
    char line[5];
    printf("enter a any chrecter:");
    scanf("%s",line);
    upperlower(line);
}