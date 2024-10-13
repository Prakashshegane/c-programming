#include<stdio.h>
int main()
{
    typedef struct pokemon{
        int speed;
        int attack;
        int hp;
        char grade;  
    }pokemon;
   /*  pokemon charizard;
    pokemon pikachu;  */
    pokemon arr[3];
    arr[0].attack=30;
    arr[0].speed=30;
    arr[0].hp=39;
    arr[0].grade='A';
     arr[1].attack=40;
    arr[1].speed=340;
    arr[1].hp=9;
    arr[1].grade='B';
     arr[2].attack=330;
    arr[2].speed=320;
    arr[2].hp=3;
    arr[2].grade='C';
    for(int i=0;i<3;i++)
    {
        printf("%d\n",arr[i].attack);
        printf("%d\n",arr[i].speed);
        printf("%d\n",arr[i].hp);
        printf("%c\n",arr[i].grade);

    }
    return 0;
}