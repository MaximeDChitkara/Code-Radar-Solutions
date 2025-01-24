#include <stdio.h>

char* isPrime(int a)
{
    return a < 2 ? "Not Prime" : (
        ({
            int i = 2, isNotPrime = 0;
            for(; i<a && !isNotPrime ; ++i)
                isNotPrime = (a % i == 0);
            isNotPrime ? "Not Prime" : "Prime";
        }));

}

int main() {
    int a;
    scanf("%i", &a);
    printf("%s", isPrime(a));
    return 0;
}