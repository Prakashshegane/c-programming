#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
    int hp;
    char name[40];
    char tier[40];
    int speed;
    int attack; 
}pokemon;
int main()
{
    pokemon pikachu;
    pikachu.speed=300;
    pikachu.hp=20;
    pikachu.attack=39;
    strcpy(pikachu.tier,"A");
    strcpy(pikachu.name,"pralasf");
    pokemon *x=&pikachu;
    printf("%p\n",&pikachu.attack);
    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.speed);
    printf("%p\n",pikachu.tier);
    printf("%p\n",pikachu.name);
    printf("%p",x);
    return 0;

}