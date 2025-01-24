#include <stdio.h>

char* isPrime(int a)
{
    char* rep;
    int haschanged = 0;
    for(int i = 2; i < a;++i)
    {
        (a % i) == 0 ? return "Not Prime" : rep = rep;
    }
    return  haschanged > 0 ? "Not Prime" : "Prime";
}

int main() {
    int a;
    scanf("%i", &a);
    printf("%s", isPrime(a));
    return 0;
}