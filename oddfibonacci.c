#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int sumFibs(int num);
int main(void)
{
    sumFibs(10);
    printf("odd numbers: %i\n", sumFibs(10));
}

int sumFibs(int num)
{
    int result = 0;
    int oddNums = 0;
    for (int i = 0; i < num; i++)
    if (i % 2 != 0)
    {
        result ++;
    }
    return(result);
}