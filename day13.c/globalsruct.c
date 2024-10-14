//global diclaration of struct and transper the pikachu data in to function 
//we want change the data using chane function but it doesnt change
//beacuse steucts is using call by value this is not call by refferns
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemaon{
    int hp;
    int speed;
    int attack;
    char name[30];
}pokemon;
void func(pokemon pikachu)
{
    printf("attack:%d\n",pikachu.attack);
    printf("speed:%d\n",pikachu.speed);
    return;
}
void change(pokemon p)
{
    int hp=20;
    int speed=399;
    int attack=39;
    return;
}
int main()
{
 pokemon pikachu;
 pokemon *x1=&pikachu;
 pikachu.hp=38;
 pikachu.attack=20;
 pikachu.speed=200;
 //func(pikachu);
 change(pikachu);
 printf("hp:%d\n",pikachu.hp);
 printf("attack:%d\n",pikachu.attack);
 printf("speed:%d\n",pikachu.speed);

}