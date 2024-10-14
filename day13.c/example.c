#include<stdio.h>
#include<string.h>
#include<stdbool.h>
 typedef struct students{
        int rollno;
        int yearofjoining;
        char name[40];
        char dept[30];
        char course[50];
    }students;
void check(students arr[]) {
    if ((arr[0].dept==arr[1].dept) )
        printf("Both are in the same department\n");
    else
        printf("Not in the same department\n");
}
int main()
{
    students arr[2];
    for(int i=0;i<2;i++)
    {
        scanf("%d",&arr[i].rollno);
        scanf("%d",&arr[i].yearofjoining);
        scanf("%s",arr[i].name);
        scanf("%s",arr[i].dept);
        scanf("%s",arr[i].course);
    }
check(arr);
}