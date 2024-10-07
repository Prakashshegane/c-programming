#include<stdio.h>
int HCF(int, int); 
int main()
{
   int a, b, c, d, result;
   scanf("%d %d %d %d", &a, &b, &c, &d); 
   result = HCF(HCF(a, b), HCF(c,d));
   printf("The HCF is %d", result);
}
int HCF(int x, int y)
{
   while (x != y)
   {
      if (x > y)
       {
           return HCF(x - y, y);
       }
       else
       {
       return HCF(x, y - x);
       }
    }
    return x;
}