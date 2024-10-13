#include<stdio.h>
#include<stdio.h>
int main()
{
    struct pokemon{
        int hp;
        int speed;
        int attack;
    };
    struct pokemon pikachu;
    pikachu.attack=90;
    pikachu.speed=100;
    printf("%d",pikachu.speed);
}