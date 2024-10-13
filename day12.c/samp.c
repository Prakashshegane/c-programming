#include<stdio.h>
#include<string.h>
int main()
{
     struct pokemon{
        int speed;
        int attack;
        int hp;
        char grade;  
        char name[400];
    }pokemon;
   /*  pokemon charizard;
    pokemon pikachu;  */
    struct pokemon arr[3];
    arr[0].attack=30;
    arr[0].speed=30;
    arr[0].hp=39;
    arr[0].grade='A';
    strcpy(arr[0].name,"prkash");
     arr[1].attack=40;
    arr[1].speed=340;
    arr[1].hp=9;
    arr[1].grade='B';
    strcpy(arr[1].name,"varun");
     arr[2].attack=330;
    arr[2].speed=320;
    arr[2].hp=3;
    arr[2].grade='C';
    strcpy(arr[2].name,"kundan");
    for(int i=0;i<3;i++)
    {
        printf("attack:%d\n",arr[i].attack);
        printf("speed:%d\n",arr[i].speed);
        printf("hp:%d\n",arr[i].hp);
        printf("grade:%c\n",arr[i].grade);
        printf("name:%s\n",arr[i].name);
    }
    return 0;
}