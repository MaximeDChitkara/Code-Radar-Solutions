#include <stdio.h>
#include <math.h>

char* isPrime(double a)
{
    return a < 2 ? "Not Prime" : (
        ({
            double i = 2, isNotPrime = 0;
            double s = sqrt(a);
            for(; i<=s && !isNotPrime ; ++i)
                isNotPrime = (a % i == 0);
            isNotPrime ? "Not Prime" : "Prime";
        }));

}

int main() {
    double a;
    scanf("%lf", &a);
    printf("%s", isPrime(a));
    return 0;
}