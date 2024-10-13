#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        //char tier;
        char name[80];
    }pokemon;

    typedef struct legendrypokemon{
        pokemon normal;
        char ability[49];
    }legendrypokemon;
    typedef struct godpokemon{
        legendrypokemon legend;
        int specialattack;
    }godpokemon;
    godpokemon a;
    a.specialattack=800;
    strcpy(a.legend.ability,"turnsintostone");
    strcpy(a.legend.normal.name,"prakash");
    a.legend.normal.speed=400;
    a.legend.normal.attack=300;
    a.legend.normal.hp=34;
    printf("%d",a.legend.normal.attack);

}