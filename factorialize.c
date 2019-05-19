#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

long long factorialize(long long num);

int main(void)
{
    // int factor = get_int("What is the factor: ");

    // factorialize(20);
    printf("factorial: %llu\n", factorialize(20));
}

// int factorialize(long long num)
long long factorialize(long long num)
{
    // this also works
    // long long answer = 1;
    // for (long long i = 1; i <= num; i++)
    // {
    //     answer *= i;
    // }
    // return answer;


    long long answer = 1;
    for ( long long startingDigit = num; startingDigit >= 1; startingDigit--)
    {
         answer *= startingDigit;
    }
    return answer;
  printf("%llu", answer);
}

