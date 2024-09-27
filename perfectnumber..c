#include<stdio.h>
int main()
{
    int i, num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for(i = 1; i < num; i++)
    {
        if(num % i == 0)  // Correct condition for checking divisors
            sum = sum + i;
    }
    
    if(sum == num)
    {
        printf("It is a perfect number\n");
    }
    else
    {
        printf("It is not a perfect number\n");
    }
    
    return 0;
}
