#include <stdio.h>
 int main()
{
    int N; 
    scanf("%d",&N); 
 int tempo, count; 
    count=0;
    tempo=N;
    while(tempo>0)
	{
        count++;
        tempo=tempo/10;
    }
     printf("The number %d contains %d digits.",N,count);
}