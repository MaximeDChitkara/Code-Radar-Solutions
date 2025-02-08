#include <stdio.h>

int isPrime(double a)
{
    return a < 2 ? 0 : (
        ({
            int i = 2, isNotPrime = 0;
            for(; i<=a/2 && !isNotPrime ; ++i)
                isNotPrime = (a % i == 0);
            isNotPrime ? 0 : 1;
        }));

}