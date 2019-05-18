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
    long long answer = 1;
    for (long long i = 1; i <= num; i++)
    {
        answer *= i;
    }
        return answer;
    // if (factor==0)

    //     {
    //         return 1;

    //     }

    //     return factor * factorialize(factor-1);
    //     printf("%lld", factor);

// //    long long answer = 0;
// //     for ( int startingDigit = num; startingDigit < 0; startingDigit--)
// //     {
// //         return num *= startingDigit;
// //         answer = startingDigit;
// //         printf("%lli", num);
// //     }
// //     return 1;
// //   printf("%lli", answer);
}

