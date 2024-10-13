#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct students{
        char name[400];
        int rollno;
        int marks;
    }student;
    student arr[6];
    strcpy(arr[0].name,"prakash");
    arr[0].rollno=89;
    arr[0].marks=444;
     strcpy(arr[1].name,"pr");
    arr[1].rollno=9;
    arr[1].marks=44;
     strcpy(arr[2].name,"ash");
    arr[2].rollno=70;
    arr[2].marks=40;
     strcpy(arr[3].name,"kushal");
    arr[3].rollno=4;
    arr[3].marks=60;
     strcpy(arr[4].name,"karnataka");
    arr[4].rollno=50;
    arr[4].marks=100;
     strcpy(arr[5].name,"kundan");
    arr[5].rollno=19;
    arr[5].marks=400;
    for(int i=0;i<6;i++)
    {
        printf("name:%s\n",arr[i].name);
        printf("rollno:%d\n",arr[i].rollno);
        printf("marks:%d\n",arr[i].marks);
    }
    return 0;
}