#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    pid_t cpid;
    if(fork()==0)
    exit(0);
    else
    cpid=wait(NULL);
    printf("parent pid=%d\n",getpid());
    printf("child pid=%d\n",cpid);
    return 0;
}   
#include<stdio.h>
#include<unistd.h>
int main()
{
    if(fork()==0)
    printf("HC:hello from child\n");
    else
    {
        printf("HP:hello from parent\n");
        wait(NULL);
        printf("CT:child has terminated\n");
    }
    printf("bye\n");
    return 0;
}
