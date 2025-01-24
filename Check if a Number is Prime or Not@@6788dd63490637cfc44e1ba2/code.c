#include <stdio.h>

char* isPrime(int a)
{
    return "oui";
}

int main() {
    int a;
    scanf("%i", &a);
    printf("%s", isPrime(a));
    return 0;
}