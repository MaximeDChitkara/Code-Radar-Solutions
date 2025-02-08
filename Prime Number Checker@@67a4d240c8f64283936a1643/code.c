#include <stdio.h>

int isPrime(double a)
{
    return a < 2 ? 0 : (
        ({
            double i = 2, isNotPrime = 0;
            double s = sqrt(a);
            for(; i<=s && !isNotPrime ; ++i)
                isNotPrime = (a % i == 0);
            isNotPrime ? 0 : 1;
        }));

}