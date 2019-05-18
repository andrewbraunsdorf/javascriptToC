#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int factorialize(long long int num);

int main(void)
{
    return factorialize(5);
}

int factorialize(long long num)
{
    long long answer = 0;
    for ( int startingDigit = num; startingDigit > 0; startingDigit--)
    {
        return num *= startingDigit;
        answer = startingDigit;
        printf("%lli", num);
    }
    return answer;
  printf("%lli", answer);
}

