#include<LPC17xx.h>
#include<stdint.h>
void delay(uint32_t ms);
int main()
{
LPC_GPI01 -> FIODTR |=1<19;
while(1)
{
LPC_GPI01 -> FIOSET = 1<<19;
delay(100);
LPC_GPI01 -> FIOCLR = 1<<19;
delay(100);
}
return o;
}
void delay(uint32_t ms)
{
uint32_t  i,j;
for(i=0;i<ms;i++)
{
for(j=0;i<10000;j++)
{
}
}
return ;
}
